#include <REGX52.H>
#include"timer0.h"
#include"key.h"
#include"INTRINS.H"
unsigned char keynum,ledmode;
void main()
{    
	P2 = 0xFE;
	timer0_init();
	while(1)
	{
		keynum=key();
			if (keynum)
			{
				if (keynum == 1)
				{
					ledmode++;
				if(ledmode>=2) ledmode = 0;
				}
			}
	}
}

void timer0_routine() interrupt 1
{
	static unsigned int count;
	TL0 = 0x66;				//设置定时初始值
	TH0 = 0xFC;
	count++;
if (count>=500)
	{ 
		count = 0;
		if (ledmode==0)P2=_crol_(P2,1);
		if (ledmode==1)P2=_cror_(P2,1);
	}
	
}




