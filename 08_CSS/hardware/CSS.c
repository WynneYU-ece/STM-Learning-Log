#include "stm32f10x.h"                  // Device header
#include "Delay.h"


uint16_t CSS_Count;

void CSS_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;          
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB, GPIO_PinSource14);
	
	EXTI_InitTypeDef EXTI_IniStructure;
	EXTI_IniStructure.EXTI_Line = EXTI_Line14;
	EXTI_IniStructure.EXTI_LineCmd = ENABLE;
	EXTI_IniStructure.EXTI_Mode =  EXTI_Mode_Interrupt;
	EXTI_IniStructure.EXTI_Trigger = EXTI_Trigger_Falling;
	EXTI_Init(&EXTI_IniStructure);
	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
	NVIC_InitTypeDef NVIC_Inistructure;
	NVIC_Inistructure.NVIC_IRQChannel = EXTI15_10_IRQn;
	NVIC_Inistructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Inistructure.NVIC_IRQChannelPreemptionPriority = 1; 
	NVIC_Inistructure.NVIC_IRQChannelSubPriority = 1;
	NVIC_Init(&NVIC_Inistructure);
}

uint16_t CSS_Get(void)
{
	return CSS_Count;
}

void EXTI15_10_IRQHandler(void)
{
	if(EXTI_GetITStatus(EXTI_Line14) == SET)
	{
		Delay_ms(20);
		CSS_Count ++;
		EXTI_ClearITPendingBit(EXTI_Line14);
	}
}
