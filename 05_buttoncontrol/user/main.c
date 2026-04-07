#include "stm32f10x.h"                  // Device header
#include "led.h"
#include "Delay.h"
#include "key.h"

uint8_t KeyNum;

int main(void)
{

	LED_Init(GPIOA, GPIO_Pin_0 | GPIO_Pin_2);
	KEY_Init(GPIOB, GPIO_Pin_0 | GPIO_Pin_10);
	
	while(1)
	{
	
		KeyNum = Key_GetNum(GPIOB, GPIO_Pin_10);
		
		if(KeyNum == 1)
		{
		
		LED_Turn(GPIOA, GPIO_Pin_0);
		
		}
	}

}
