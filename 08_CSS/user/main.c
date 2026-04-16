#include "stm32f10x.h"                  // Device header
#include "OLED.h"
#include "Delay.h"
#include "led.h"
#include "lss.h"
#include "CSS.h"

int main(void)
{   
	
	OLED_Init();
	CSS_Init();
	
	OLED_ShowString(1, 1, "Count:");
	while(1)
	{
		OLED_ShowNum(1, 7, CSS_Get(), 5);
	}
}
