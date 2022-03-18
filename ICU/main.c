/*
 * main.c
 *
 *  Created on: 20 Feb 2022
 *      Author: Mahmoud Mo7amdii
 */

# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_register.h"
# include "DIO_interface.h"
# include "ICU_interface.h"
# include "ICU_register.h"
# include "GIE_interface.h"
# include "GIE_register.h"
# include "LCD_interface.h"
# include "LCD_config.h"
# include "avr/delay.h"



u16 Signal_start=0;
u16 Signal_end=0;
u16 Period=0;
u16 Time_on=0;

int main()
{

	DIO_vidSetPinDirection(PORT_D,PIN_6,INPUT);
	DIO_vidSetPortDirection(PORT_A,OUTPUT);
	DIO_vidSetPortDirection(PORT_B,OUTPUT);
	LCD_VidInit();
	GIE_VidEnable();
	ICU_VidEnableInt();
	TimerR1ICU_VidInt();


	while (1)
	{

	}

}

void __vector_6(void)__attribute__((signal));
void __vector_6(void)
{
	static u8 flag=0;
	flag++;
	if (flag==1)
	{
		Signal_start=ICU_GetValue();
	}
	else if(flag==2)
	{
		Signal_end=ICU_GetValue();
		Period=Signal_end-Signal_start;
		ICU_VidSetEdge(0);
	}
	else if(flag==3)
	{
		Time_on=ICU_GetValue()-Signal_end;
		ICU_VidSetEdge(1);
		LCD_VidSendData('T');
		LCD_VidSendData('i');
		LCD_VidSendData('m');
		LCD_VidSendData('e');
		LCD_VidSendData('O');
		LCD_VidSendData('n');
		LCD_VidSendData(':');
		LCD_VidPrintInt(Time_on);
		LCD_VidGotXY(1,0);
		LCD_VidSendData('P');
		LCD_VidSendData('e');
		LCD_VidSendData('r');
		LCD_VidSendData('i');
		LCD_VidSendData('o');
		LCD_VidSendData('d');
		LCD_VidSendData(':');
		LCD_VidPrintInt(Period);
		LCD_VidGotXY(0,0);
		flag=0;
		Signal_start=0;
		Signal_end=0;
		Period=0;
		Time_on=0;
	}
}


