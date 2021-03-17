/*
 * lcdDriverInterface.h
 *
 *  Created on: Feb 23, 2021
 *      Author: neset
 */

#ifndef LCDDRIVERINTERFACE_H_
#define LCDDRIVERINTERFACE_H_

#include <lcd_i2cModule.h>
#include "../motorDriverInterface/motorDriverInterface.h"
#include "stdbool.h"

#define LCD_I2C_CHANNEL1 hi2c1
extern I2C_HandleTypeDef LCD_I2C_CHANNEL1;

#define LCD_I2C_CHANNEL2 hi2c2
extern I2C_HandleTypeDef LCD_I2C_CHANNEL2;


void lcd_Init(void);
void printToLcdDrv1Receive(mD_interface gets,bool isSelected);
void printToLcdDrv1Transmit(mD_interface sends,bool isSelected);
void printToLcdDrv2Receive(tMD_interface gets,bool isSelected);
void printToLcdDrv2Transmit(tMD_interface sends,bool isSelected);
void cleanTheLcd(void);

#endif /* LCDDRIVERINTERFACE_H_ */
