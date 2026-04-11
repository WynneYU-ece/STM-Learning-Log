#include "stm32f10x.h"                  // Device header
#include "OLED.h"
#include "Delay.h"
#include "led.h"
#include "ir.h"
int main(void)
{   
	
	IR_Init(GPIOB, GPIO_Pin_14);
	OLED_Init();
	OLED_ShowChar(1, 1, 'S');
	while(1)
	{
		IR_On(GPIOB, GPIO_Pin_14);
		LED_On(GPIOB, GPIO_Pin_4);
		LED_On(GPIOB, GPIO_Pin_3);
		
	}
}
