/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
#include "Platform_Types.h"


#define 	SYSCTL_BASE  			0x400FE000
#define 	GPIOF_BASE  			0x40025000


typedef union {
	vuint32 reg;
	struct{
		vuint32 pin0:1;
		vuint32 pin1:1;
		vuint32 pin2:1;
		vuint32 pin3:1;
		vuint32 pin4:1;
		vuint32 pin5:1;
		vuint32 pin6:1;
		vuint32 pin7:1;
		vuint32 pin8:1;
		vuint32 pin9:1;
		vuint32 pin10:1;
		vuint32 pin11:1;
		vuint32 pin12:1;
		vuint32 pin13:1;
		vuint32 pin14:1;
		vuint32 pin15:1;
		vuint32 pin16:1;
		vuint32 pin17:1;
		vuint32 pin18:1;
		vuint32 pin19:1;
		vuint32 pin20:1;
		vuint32 pin21:1;
		vuint32 pin22:1;
		vuint32 pin23:1;
		vuint32 pin24:1;
		vuint32 pin25:1;
		vuint32 pin26:1;
		vuint32 pin27:1;
		vuint32 pin28:1;
		vuint32 pin29:1;
		vuint32 pin30:1;
		vuint32 pin31:1;
	}pin;
}R32_Register;

volatile R32_Register * SYSCTL_RCGC2_R = (volatile R32_Register *)  (SYSCTL_BASE+0x108);
volatile R32_Register * GPIOF_DATA_R = 	 (volatile R32_Register *)  (GPIOF_BASE+0x3FC);
volatile R32_Register * GPIOF_DIR_R = 	 (volatile R32_Register *)  (GPIOF_BASE+0x400);
volatile R32_Register * GPIOF_DEN_R = 	 (volatile R32_Register *)  (GPIOF_BASE+0x51C);


int main(void)
{

	int volatile i = 0;
	SYSCTL_RCGC2_R->reg = 0X00000020;
	for( i = 0; i < 100; i++);
	GPIOF_DIR_R->pin.pin3 = 1;
	GPIOF_DEN_R->pin.pin3 = 1;

	while(1)
	{
		GPIOF_DATA_R->pin.pin3 = 1;
		for( i = 0; i < 20000; i++);
		GPIOF_DATA_R->pin.pin3 = 0;
		for( i = 0; i < 20000; i++);
	}

	return 0;
}
