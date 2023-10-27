#include"REGX52.h"
#include"Delay.h"

unsigned char maxk()
{
	unsigned char keynumber=0;
	
	P1=0xFF;
	P1_3=0;
	if (P1_7 == 0) { Delay(20); while (P1_7 == 0); Delay(20); keynumber = 1; }
	if (P1_6 == 0) { Delay(20); while (P1_6 == 0); Delay(20); keynumber = 5; }
	if (P1_5 == 0) { Delay(20); while (P1_5 == 0); Delay(20); keynumber = 9; }
	if (P1_4 == 0) { Delay(20); while (P1_4 == 0); Delay(20); keynumber = 13;}
	P1 = 0xFF;
	P1_2 = 0;
	if (P1_7 == 0) { Delay(20); while (P1_7 == 0); Delay(20); keynumber = 2; }
	if (P1_6 == 0) { Delay(20); while (P1_6 == 0); Delay(20); keynumber = 6; }
	if (P1_5 == 0) { Delay(20); while (P1_5 == 0); Delay(20); keynumber = 10; }
	if (P1_4 == 0) { Delay(20); while (P1_4 == 0); Delay(20); keynumber = 14; }
	P1 = 0xFF;
	P1_1 = 0;
	if (P1_7 == 0) { Delay(20); while (P1_7 == 0); Delay(20); keynumber = 3; }
	if (P1_6 == 0) { Delay(20); while (P1_6 == 0); Delay(20); keynumber = 7; }
	if (P1_5 == 0) { Delay(20); while (P1_5 == 0); Delay(20); keynumber = 11;}
	if (P1_4 == 0) { Delay(20); while (P1_4 == 0); Delay(20); keynumber = 15;}
	P1 = 0xFF;
	P1_0= 0;
	if (P1_7 == 0) { Delay(20); while (P1_7 == 0); Delay(20); keynumber = 4; }
	if (P1_6 == 0) { Delay(20); while (P1_6 == 0); Delay(20); keynumber = 8; }
	if (P1_5 == 0) { Delay(20); while (P1_5 == 0); Delay(20); keynumber = 12; }
	if (P1_4 == 0) { Delay(20); while (P1_4 == 0); Delay(20); keynumber = 16; }

	return keynumber;
}
#endif