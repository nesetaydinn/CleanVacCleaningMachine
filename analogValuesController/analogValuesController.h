/*
 * analogValuesController.h
 *
 *  Created on: Feb 16, 2021
 *      Author: neset
 */

#ifndef ANALOGVALUESCONTROLLER_H_
#define ANALOGVALUESCONTROLLER_H_


#include "main.h"

#define ANALOGINPUTVAL 2
#define ADCTIMEOUT 150

#define VREF_CAL (uint16_t*)((uint32_t)0x1FFF7A2A)

#if ANALOGINPUTVAL==1
uint16_t readAndGetAnalog1Value(ADC_HandleTypeDef *adc);
uint16_t getAnalogValue1(void);
#elif ANALOGINPUTVAL==2
void readAnalog2Values(ADC_HandleTypeDef *adc1,ADC_HandleTypeDef *adc2);
void readAnalogVal1(ADC_HandleTypeDef *adc1);
void readAnalogVal2(ADC_HandleTypeDef *adc2);

uint16_t getAnalogValue1(void);
uint16_t getAnalogValue2(void);

float getVdda(void);
float getADC1(void);
float getADC2(void);

#endif


uint16_t valuesMap(uint16_t inValue, uint16_t inMin, uint16_t inMax, uint16_t outMin, uint16_t outMax);
int16_t valuesMapInt(int16_t inValue, int16_t inMin, int16_t inMax, int16_t outMin, int16_t outMax);
uint16_t valuesMapWFloat(float inValue, float inMin, float inMax, uint16_t outMin, uint16_t outMax);
int16_t valuesMapFloat(float inValue, float inMin, float inMax, int16_t outMin, int16_t outMax) ;
#endif /* ANALOGVALUESCONTROLLER_H_ */
