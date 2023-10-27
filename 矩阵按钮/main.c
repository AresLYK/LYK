#include"REGX52.h"
#include"Delay.h"
#include"LCD1602.h"
#include"maxk.h"

unsigned char keynum;

void main()
{

	LCD_Init();
	LCD_ShowString(1, 1, "maxk");
	while (1)
	{
		keynum=maxk();
		if(keynum)
		{
			LCD_ShowNum(2,1,keynum,2);
		}
	}
}









