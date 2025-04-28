/*
 * rcc.h
 *
 *  Created on: Mar 4, 2025
 *      Author: stefan
 */

#ifndef RCC_H_
#define RCC_H_

#include "stm32f4xx.h"

/* APB2 PERIPHERALS */
#define SYSCFG_APB2  (1UL << 14)
#define TIM1_APB2    (1UL << 0)
#define TIM8_APB2    (1UL << 1)
#define USART1_APB2  (1UL << 4)
#define USART6_APB2  (1UL << 5)
#define ADC1_APB2    (1UL << 8)
#define SPI1_APB2    (1UL << 12)
#define SPI4_APB2    (1UL << 13)
#define TIM9_APB2    (1UL << 16)
#define TIM10_APB2   (1UL << 17)
#define TIM11_APB2   (1UL << 18)

/* GPIOS PERIPHERALS */
#define GPIOA_IO  (1UL << 0)
#define GPIOB_IO  (1UL << 1)
#define GPIOC_IO  (1UL << 2)
#define GPIOD_IO  (1UL << 3)
#define GPIOE_IO  (1UL << 4)
#define GPIOH_IO  (1UL << 7)

void RCC_ENABLE_AHB_PERIPHERAL(uint32_t PER);
void RCC_ENABLE_GPIO(uint32_t PER);

#endif /* RCC_H_ */
