/*
 * gpio.c
 *
 *  Created on: Mar 4, 2025
 *      Author: stefan
 */


#include "gpio.h"

void SET_GPIO_AS_OUTPUT(GPIO_TypeDef *PORT, uint8_t PIN)
{
	PORT->MODER |= (1 << (PIN * 2));
	PORT->MODER &= ~(1 << (PIN * 2 + 1));
}

void SET_GPIO_OUTPUT_PUSHPULL(GPIO_TypeDef *PORT, uint8_t PIN)
{
	PORT->OTYPER &= ~(1UL << PIN);
}

void SET_GPIO_OPEN_DRAIN(GPIO_TypeDef *PORT, uint8_t PIN)
{
	PORT->OTYPER |= 1UL << (PIN);
}

void SET_GPIO_SPEED_HIGH(GPIO_TypeDef *PORT, uint8_t PIN)
{
	PORT->OSPEEDR |= (1 << (PIN * 2));
	PORT->OSPEEDR &= ~(1 << (PIN * 2 + 1));
}

void SET_GPIO_NO_PULL(GPIO_TypeDef *PORT, uint8_t PIN)
{
	PORT->PUPDR &= ~(3 << (PIN * 2));
}

