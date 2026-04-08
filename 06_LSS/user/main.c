#include "stm32f10x.h"                  // Device header
#include "lss.h"
#include "buzzer.h"
#include "Delay.h"
#include "led.h"

int main(void)
{
	BUZZER_Init(GPIOB, GPIO_Pin_12);
	Lss_Init(GPIOB, GPIO_Pin_13);
	
	while(1)
	{
		LED_On(GPIOA, GPIO_Pin_0); 
		
		if (Lss_Get(GPIOB, GPIO_Pin_13) == 1)
			BUZZER_On(GPIOB, GPIO_Pin_12);
		else
			BUZZER_Off(GPIOB, GPIO_Pin_12);
		
			
	
	}

}
