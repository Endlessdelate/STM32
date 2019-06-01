#include "stm32f10x.h"                  // Device header
#include "delay.h"
#include "sys.h"
#include "LED.h"

int main()
{
    delay_init();
    LED_Init();
    while(1)
    {
        GPIO_SetBits(GPIOA,GPIO_Pin_5);
        GPIO_SetBits(GPIOA,GPIO_Pin_6);
        delay_ms(400);
        GPIO_ResetBits(GPIOA,GPIO_Pin_5);
        GPIO_ResetBits(GPIOA,GPIO_Pin_6);
        delay_ms(400);
    }        
}

