#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "led.h"


int main(void)
{
	LED_Init(GPIOA, GPIO_Pin_3);
	
	while(1)
	{
	LED_On(GPIOA,GPIO_Pin_3);
		Delay_ms(500);
	LED_Off(GPIOA, GPIO_Pin_3);
		Delay_ms(500);
	}

}
