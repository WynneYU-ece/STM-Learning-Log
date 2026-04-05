#ifndef __LED_H
#define __LED_H
#include "stm32f10x.h"

#define LED_PIN   GPIO_Pin_0
#define LED_PORT  GPIOA

void LED_Init(void);
void LED_On(void);
void LED_Off(void);

#endif
