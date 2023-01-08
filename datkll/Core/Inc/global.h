/*
 * global.h
 *
 *  Created on: Jan 7, 2023
 *      Author: duyvt
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "uart.h"
#include "software_timer.h"
#include <stdio.h>

#define WIDTH		480
#define HEIGHT		640

extern uint8_t image[HEIGHT * WIDTH];

void image_init();

#endif /* INC_GLOBAL_H_ */
