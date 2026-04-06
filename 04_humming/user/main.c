#include "stm32f10x.h"
#include "Delay.h"
#include "led.h"

int main(void)
{
	LED_Init(GPIOB, GPIO_Pin_12);


	while(1)
	{
		//LED_On(GPIOB, GPIO_Pin_12);
			//Delay_ms(100);
		LED_Off(GPIOB, GPIO_Pin_12);
			//Delay_ms(100); 
	}
}
