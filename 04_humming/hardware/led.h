#ifndef __LED_H
#define __LED_H
#include "stm32f10x.h"

#define LED_PIN   GPIO_Pin_0
#define LED_PORT  GPIOA

void LED_Init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void LED_On(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void LED_Off(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

#endif
