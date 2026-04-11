#include "key.h"
#include "Delay.h"

void KEY_Init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{		
		// ENABLE CLOCK
    if (GPIOx == GPIOA) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    else if (GPIOx == GPIOB) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    else if (GPIOx == GPIOC) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin;          

    GPIO_Init(GPIOx, &GPIO_InitStructure);
}

uint8_t Key_GetNum(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
	uint8_t KeyNum = 0;
	
		if(GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == 0)
		{
			Delay_ms(20);
			while(GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == 0)
			Delay_ms(20);
			KeyNum = 1;
		}
		return KeyNum;
	
}
