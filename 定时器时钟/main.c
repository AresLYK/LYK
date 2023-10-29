#include"regx52.h"
#include"delay.h"
#include"timer.h"
#include"lcd1602.h"
unsigned char sec;
unsigned char min;
unsigned char shi;
 void main()
{
	LCD_Init();
	timer0_init();

	LCD_ShowString(1, 1, "clock");
	LCD_ShowString(2, 1, "  :  :  ");

	while(1)
	{
		LCD_ShowNum(2,1,shi,2);
		LCD_ShowNum(2,4,min,2);
		LCD_ShowNum(2,7,sec,2);
	}
}

void timer0_routine() interrupt 1
{
	static unsigned int count;
	TL0 = 0x66;				
	TH0 = 0xFC;
	count++;
	if (count >= 1000)
	{
		count = 0;
		sec++;
		if (sec>=60)
		{
			sec = 0;
			min++;
			if (min>=60)
			{
				min = 0;
				shi++;
				if (shi>=24)
				{
					shi = 0;
				}
			}
		}
	}

}