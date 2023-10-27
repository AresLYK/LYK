#include"REGX52.h"
#include"Delay.h"
#include"LCD1602.h"
#include"maxk.h"

unsigned char keynum;
unsigned int password,count;

void main()
{

	LCD_Init();
	LCD_ShowString(1, 1, "Password");
	while (1)
	{
		keynum=maxk();
		if (keynum)
		{
			if (keynum <= 10)//如果s1到s10按键按下。输入密码
			{
				if (count < 4)//如果输入次数小于4
				{
					password *= 10;//密码右移一位
					password += keynum % 10;//获取一位密码
					count++;//计数加一
				}
			}
			LCD_ShowNum(2, 1, password, 4);//更新显示
			if (keynum == 11)//如果s11按键按下，确认
			{
				if (password == 2345)
				{
					LCD_ShowString(1,14,"ok ");//如果密码正确
					password = 0;
					count = 0;
					LCD_ShowNum(2, 1, password, 4);
				}
				else  //否则
				{
					LCD_ShowString(1,14,"err");//显示错误
					password = 0;
					count = 0;
					LCD_ShowNum(2, 1, password, 4);
				}
			}
			if (keynum==12)//如果s11按键按下，取消
			{
				password = 0;
				count = 0;
				LCD_ShowNum(2, 1, password, 4);
			}
		}
	}
}









