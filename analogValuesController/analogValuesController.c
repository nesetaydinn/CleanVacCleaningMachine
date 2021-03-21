/*
 * analogValuesController.c
 *
 *  Created on: Feb 16, 2021
 *      Author: neset
 */

#include "analogValuesController.h"
#if ANALOGINPUTVAL==1
uint16_t analogValue1;
uint16_t readAndGetAnalog1Value(ADC_HandleTypeDef *adc){
	  HAL_ADC_Start(adc);
	  HAL_ADC_PollForConversion(adc, ADCTIMEOUT);
	  analogValue1 = HAL_ADC_GetValue(adc);
	  HAL_ADC_Stop (adc);
}
uint16_t getAnalogValue1(void){return analogValue1;}
#elif ANALOGINPUTVAL==2
uint16_t analogValue1;
uint16_t analogValue2;
uint16_t vref;
float Vadc1,Vadc2,Vdda;


void readAnalog2Values(ADC_HandleTypeDef *adc1,ADC_HandleTypeDef *adc2){
	static uint32_t filter1=0,filter2=0;
	  HAL_ADC_Start(adc1);
	  HAL_ADC_PollForConversion(adc1, ADCTIMEOUT);
	  vref= HAL_ADC_GetValue(adc1);
	  Vdda=(float)(3.3*(*VREF_CAL)/vref);
	  HAL_ADC_PollForConversion(adc1, ADCTIMEOUT);
	  for(int c=0;c<256;c++){
		  filter1+=HAL_ADC_GetValue(adc1);
	  }
	  analogValue1=(uint16_t)(filter1>>8);
	  Vadc1=Vdda*analogValue1/4095;
	  filter1=0;
	  HAL_ADC_Stop (adc1);
	  HAL_ADC_Start(adc2);
	  HAL_ADC_PollForConversion(adc2, ADCTIMEOUT);
	  for(int c=0;c<256;c++){

		  filter2+=HAL_ADC_GetValue(adc2);
	  }
	  analogValue2=(uint16_t)(filter2>>8);
	  Vadc2=Vdda*analogValue2/4095;

	  filter2=0;
	  HAL_ADC_Stop (adc2);
}
void readAnalogVal1(ADC_HandleTypeDef *adc1){
	static uint32_t filter1=0;
	  HAL_ADC_Start(adc1);
	  HAL_ADC_PollForConversion(adc1, ADCTIMEOUT);
	  vref= HAL_ADC_GetValue(adc1);
	  Vdda=(float)(3.3*(*VREF_CAL)/vref);
	  HAL_ADC_PollForConversion(adc1, ADCTIMEOUT);
	  for(int c=0;c<256;c++){
		  filter1+=HAL_ADC_GetValue(adc1);
	  }
	  analogValue1=(uint16_t)(filter1>>8);
	  Vadc1=Vdda*analogValue1/4095;
	  filter1=0;
	  HAL_ADC_Stop (adc1);
}
void readAnalogVal2(ADC_HandleTypeDef *adc2){
	static uint32_t filter2=0;
	HAL_ADC_PollForConversion(adc2, ADCTIMEOUT);
	  HAL_ADC_Start(adc2);
	  for(int c=0;c<256;c++){
		  filter2+=HAL_ADC_GetValue(adc2);
	  }
	  analogValue2=(uint16_t)(filter2>>8);
	  Vadc2=Vdda*analogValue2/4095;

	  filter2=0;
	  HAL_ADC_Stop (adc2);
}
uint16_t getAnalogValue1(void){return analogValue1;}
uint16_t getAnalogValue2(void){return analogValue2;}
float getVdda(void){return Vdda;}
float getADC1(void){return Vadc1;}
float getADC2(void){return Vadc2;}
#endif



/**
 * @brief Creating mapping values for input values
 * @param inValue -> our input value
 * @param inMin -> input interval minumum value
 * @param inMax -> input interval maximum value
 * @param outMin -> output interval minumum value
 * @param outMax -> output interval maximum value
 * @return output value
 */
uint16_t valuesMap(uint16_t inValue, uint16_t inMin, uint16_t inMax, uint16_t outMin, uint16_t outMax) {
	return (inValue - inMin)*(outMax - outMin) / (inMax - inMin) + outMin;
}

int16_t valuesMapInt(int16_t inValue, int16_t inMin, int16_t inMax, int16_t outMin, int16_t outMax) {
	return (inValue - inMin)*(outMax - outMin) / (inMax - inMin) + outMin;
}
uint16_t valuesMapWFloat(float inValue, float inMin, float inMax, uint16_t outMin, uint16_t outMax) {
	return (inValue - inMin)*(outMax - outMin) / (inMax - inMin) + outMin;
}
int16_t valuesMapFloat(float inValue, float inMin, float inMax, int16_t outMin, int16_t outMax) {
	return (inValue - inMin)*(outMax - outMin) / (inMax - inMin) + outMin;
}



