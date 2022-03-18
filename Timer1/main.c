/*
 * main.c
 *
 *  Created on: 18 Feb 2022
 *      Author: Mahmoud Mo7amdii
 */


# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_register.h"
# include "DIO_interface.h"
# include "TimerR1_register.h"
# include "TimerR1_interface.h"
# include "avr/delay.h"

int main()
{
	DIO_vidSetPinDirection(PORT_D,PIN_5,OUTPUT);
	TimerR1_VidInt();
	while (1)
	{
		u16 i=0;
		u32 x=0;
		for (i=400;i<=2500;i++)
		{
			TimerR1_VidSetOCR1(i);
			_delay_ms(3);
		}
		x=2500/14;
		LCD_VidPrintInt(x);
	}
}
