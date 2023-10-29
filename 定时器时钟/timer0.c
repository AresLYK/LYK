#include <REGX52.H>
/**
   *@brief   定时器0初始化，1ms
   *@param    无
   *@retval   无
   */
void timer0_init()
{
		TMOD &= 0xF0;			//设置定时器模式
		TMOD |= 0x01;			//设置定时器模式
		TL0 = 0x66;				//设置定时初始值
		TH0 = 0xFC;				//设置定时初始值
		TF0 = 0;				//清除TF0标志
		TR0 = 1;
		ET0 = 1;
		EA = 1;
		PT0 = 0;//定时器0 开始计时
	
}
/*定时器中断模板
void timer0_routine() interrupt 1
{
	static unsigned int count;
	TL0 = 0x66;				//设置定时初始值
	TH0 = 0xFC;
	count++;
	if (count>=1000)
	{ 
		count = 0;
	}
	
}
*/