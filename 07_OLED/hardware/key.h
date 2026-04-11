#ifndef __KEY_H
#define __KEY_H

#include "stm32f10x.h"                  // Device header


void KEY_Init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

uint8_t Key_GetNum(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

#endif
