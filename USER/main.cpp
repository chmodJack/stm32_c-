#include "main.h"

GPIO LED(GPIOC,13);
GPIO KEY1(GPIOA,0,GPIO_Mode_IPD);
GPIO KEY2(GPIOA,1,GPIO_Mode_IPU);
USART com1(USART1,9600);

int main(void)
{
	delay_init();
	com1<<"WELCOME_TO_STM32F103C8T6\r\n";
  while(1)
	{
		if(KEY1.GetLevel())
		{
			LED<<1;
			com1<<"You have pressed key1\r\n";
		}
		if(!KEY2.GetLevel())
		{
			LED<<0;
			com1<<"You have pressed key2\r\n";
		}
	}
}
