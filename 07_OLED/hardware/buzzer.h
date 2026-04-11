#ifndef __BUZZER_H
#define __BUZZER_H

#include "stm32f10x.h"                  // Device header


void BUZZER_Init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

void BUZZER_On(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

void BUZZER_Off(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

void BUZZER_Turn(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

#endif
