#include "LED.h"

void LEDInit()
{
		
	GPIO_InitTypeDef GPIO_InitStructure; 
	SystemInit();
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC , ENABLE); 
		
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All; 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz; 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP ; 
	GPIO_Init(GPIOC, &GPIO_InitStructure); 

}	

void LEDdisplay()
{ 
	while(1)
	{
	GPIO_Write(GPIOC, 0xfe); 
		delay_ms(1000);//SysTick Timer Delay 1s
		GPIO_Write(GPIOC, 0xfd); 
		delay_ms(1000);// SysTick Timer Delay 1s
		GPIO_Write(GPIOC, 0xfb); 
		delay_ms(1000);// SysTick Timer Delay 1s
		GPIO_Write(GPIOC, 0xf7); 
		delay_ms(1000);// SysTick Timer Delay 1s
		GPIO_Write(GPIOC, 0xef); 
		delay_ms(1000);// SysTick Timer Delay 1s
		GPIO_Write(GPIOC, 0xdf); 
		delay_ms(1000);// SysTick Timer Delay 1s
		GPIO_Write(GPIOC, 0xbf); 
		delay_ms(1000);// SysTick Timer Delay 1s
		GPIO_Write(GPIOC, 0x7f); 
		delay_ms(1000);// SysTick Timer Delay 1s	
	}
}
