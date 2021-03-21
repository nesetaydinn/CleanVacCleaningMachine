/*
 * ComputerInterface.h
 *
 *  Created on: Mar 9, 2021
 *      Author: neset
 */

#ifndef COMPUTERINTERFACE_H_
#define COMPUTERINTERFACE_H_

#define COMPUTERINTERFACE_ACTIVE 0

#if COMPUTERINTERFACE_ACTIVE

#include "main.h"
#include "FreeRTOS.h"
#include "task.h"

#define ComputerChannel huart4
extern UART_HandleTypeDef ComputerChannel;


typedef struct{
    uint16_t size;
    int32_t steer_pos;
    int32_t drive_speed;
}Com_interface;

void CI_sendDataChannel(uint16_t lenght, int32_t steer_poss,
		int32_t driver_poss, int32_t driver_speed,uint8_t batt_per);
void CI_enableGetDataChannel(void);
void CI_getDataChannel_IT(UART_HandleTypeDef *callBackHandle);
void testCIsend(void);


#endif

#endif /* COMPUTERINTERFACE_H_ */
