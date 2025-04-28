/*
 * led.c
 *
 *  Created on: Mar 13, 2025
 *      Author: stefan
 */
#include "led.h"
#include "rcc.h"
#include "gpio.h"

void INIT_GREEN_LED(void)
{
    // 1. Uključi clock za GPIOD
	RCC_ENABLE_GPIO(GPIOD_IO);
    // 2. Postavi PD12 kao izlaz
	SET_GPIO_AS_OUTPUT(GPIOD, PIN12);
	SET_GPIO_OUTPUT_PUSHPULL(GPIOD, PIN12);
	SET_GPIO_SPEED_HIGH(GPIOD, PIN12);
	SET_GPIO_NO_PULL(GPIOD, PIN12);
}
