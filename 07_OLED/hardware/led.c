#include "led.h"

/**
 * @brief  Generalized GPIO Driver
 * @param  GPIOx: (GPIOA, GPIOB, GPIOC...)
 * @param  GPIO_Pin: (GPIO_Pin_0 to GPIO_Pin_15)
 */
void LED_Init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin) 
{
    // ENABLE CLOCK
    if (GPIOx == GPIOA) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    else if (GPIOx == GPIOB) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    else if (GPIOx == GPIOC) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin;          
	GPIO_Init(GPIOx, &GPIO_InitStructure);
	
	GPIO_SetBits(GPIOx, GPIO_Pin);
}


//Active Low
void LED_On(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
    GPIO_ResetBits(GPIOx, GPIO_Pin); 
}
void LED_Off(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
    GPIO_SetBits(GPIOx, GPIO_Pin);
}
void LED_Turn(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
	if(GPIO_ReadOutputDataBit(GPIOx, GPIO_Pin) == 0)
				LED_Off(GPIOx, GPIO_Pin);
	else		
				LED_Off(GPIOx, GPIO_Pin);
}
