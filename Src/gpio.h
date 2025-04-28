/*
 * gpio.h
 *
 *  Created on: Mar 4, 2025
 *      Author: stefan
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "stm32f4xx.h"

/* PIN */
#define PIN0				0
#define PIN1				1
#define PIN2				2
#define PIN3				3
#define PIN4				4
#define PIN5				5
#define PIN6				6
#define PIN7				7
#define PIN8				8
#define PIN9				9
#define PIN10				10
#define PIN11				11
#define PIN12				12
#define PIN13				13
#define PIN14				14
#define PIN15				15

void SET_GPIO_AS_OUTPUT(GPIO_TypeDef *PORT, uint8_t PIN);
void SET_GPIO_OUTPUT_PUSHPULL(GPIO_TypeDef *PORT, uint8_t PIN);
void SET_GPIO_OPEN_DRAIN(GPIO_TypeDef *PORT, uint8_t PIN);
void SET_GPIO_SPEED_HIGH(GPIO_TypeDef *PORT, uint8_t PIN);
void SET_GPIO_NO_PULL(GPIO_TypeDef *PORT, uint8_t PIN);

#endif /* GPIO_H_ */
