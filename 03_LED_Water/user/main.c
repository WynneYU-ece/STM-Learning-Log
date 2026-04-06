#include "stm32f10x.h"
#include "Delay.h"
#include "led.h"

uint16_t LED_Pins[] = {GPIO_Pin_0, GPIO_Pin_1, GPIO_Pin_2, GPIO_Pin_3};

int main(void)
{	
	for(int i=0; i<4; i++)
			LED_Init(GPIOA, LED_Pins[i]);
	
	while(1)
	{
		for(int i=0; i<4; i++)
		{	LED_On(GPIOA, LED_Pins[i]);
				Delay_ms(100);
			LED_Off(GPIOA, LED_Pins[i]);
		}
	}
}
