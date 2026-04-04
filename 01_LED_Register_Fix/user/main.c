#include "stm32f10x.h"

void GPIO_Register_Config(void) {
    // 1. ENABLE CLOCK：RCC_APB2ENR 的位 2 是 IOPAEN
    RCC->APB2ENR |= (1 << 2);

    // 2. Configuer PA0：CRL 寄存器的低 4 位 (Bit 3:0)
    // 第一步：清零 (Masking) —— 用 &= ~ 将对应位设为 0
    // 0xF 即二进制 1111，左移 0 位。目的是确保这 4 位初始为 0
    GPIOA->CRL &= ~(0xF << 0);

    // 第二步：置位 (Setting) —— 用 |= 写入新模式
    // 0x03 对应二进制 0011 (通用推挽输出 + 50MHz 速度)
    GPIOA->CRL |= (0x03 << 0);
}

int main(void) {
    GPIO_Register_Config();

    while(1) {
        // 输出低电平点亮 (ODR 寄存器)
        GPIOA->ODR &= ~(1 << 0); 
    }
}
