/*
 * global.c
 *
 *  Created on: Jan 7, 2023
 *      Author: duyvt
 */

#include "global.h"

uint8_t image[HEIGHT*WIDTH];

void image_init(){
	for (int i =0; i< HEIGHT*WIDTH; i++){
		image[i] =1;
	}
}
