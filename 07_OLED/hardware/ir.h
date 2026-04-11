#ifndef __IR_H
#define __IR_H

#include "stm32f10x.h"                  // Device header

void IR_Init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void IR_On(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void IR_Off(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

#endif
