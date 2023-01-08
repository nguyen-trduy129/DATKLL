/*
 * uart.h
 *
 *  Created on: Jan 7, 2023
 *      Author: duyvt
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "global.h"

#define WIDTH		480
#define HEIGHT		640

extern UART_HandleTypeDef huart2;

extern uint8_t temp;
extern int sendindex;
extern char* str;

extern int state;
extern uint8_t temp;

void sendRun();

void command_parser_fsm();
void uart_communiation_fsm();

#endif /* INC_UART_H_ */
