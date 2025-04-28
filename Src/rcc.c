/*
 * rcc.c
 *
 *  Created on: Mar 4, 2025
 *      Author: stefan
 */

#ifndef RCC_C_
#define RCC_C_

#include "rcc.h"

void RCC_ENABLE_AHB_PERIPHERAL(uint32_t PER) {
    RCC->AHB1ENR |= PER;
}

void RCC_ENABLE_GPIO(uint32_t PER) {
    RCC_ENABLE_AHB_PERIPHERAL(PER);
}


#endif /* RCC_C_ */
