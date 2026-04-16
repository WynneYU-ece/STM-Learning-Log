#ifndef __LSS_H
#define __LSS_H

#include "stm32f10x.h"                  // Device header

void Lss_Init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
uint8_t Lss_Get(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

#endif
