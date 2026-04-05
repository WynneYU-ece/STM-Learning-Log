#include "led.h"

/**
 * @brief  Configures the specific GPIO pin for LED.
 * @note   This function enables the clock and sets output mode.
 */


void LED_Init(void)
{
RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE); //ENABLR CLOCK


	//Configuer GPIO:
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = LED_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(LED_PORT, &GPIO_InitStructure);

}

void LED_ON(void)
{
    GPIO_ResetBits(LED_PORT, LED_PIN);
}
void LED_OFF(void);
{
    GPIO_SetBits(LED_PORT, LED_PIN);
}

