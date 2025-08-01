/*
 * green_led.c
 *
 *  Created on: Aug 1, 2025
 *      Author: taps
 */
#include "stm32f4xx.h"
#include "green_led.h"

void LED_Init(void) {

	/* Enable GPIOA clock */
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    // 2. Set PA5 as general purpose output
    GPIOA->MODER &= ~(3U << (5 * 2));
    GPIOA->MODER |= (1U << (5 * 2));

    // 3. Optional: Set output type to push-pull (default)
    GPIOA->OTYPER &= ~(1U << 5);

    // 4. Optional: Set output speed (medium)
    GPIOA->OSPEEDR &= ~(3U << (5 * 2));
    GPIOA->OSPEEDR |= (1U << (5 * 2));

    // 5. Optional: Disable pull-up/pull-down
    GPIOA->PUPDR &= ~(3U << (5 * 2));
}
