/*
 * main.c
 *
 *  Created on: 25 Feb 2022
 *      Author: Mahmoud Mo7amdii
 */

# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_interface.h"
# include "DIO_register.h"
# include "UART_register.h"
# include "UART_interface.h"
# include <avr/delay.h>
# include "LCD_interface.h"




int main()
{
	/*recevier pint*/
	DIO_vidSetPinDirection(PORT_D,PIN_0,INPUT);
	/*transmitter pin*/
	DIO_vidSetPinDirection(PORT_D,PIN_1,OUTPUT);
	UART_VidInt();

	DIO_vidSetPortDirection(PORT_A,OUTPUT);
	DIO_vidSetPortDirection(PORT_B,OUTPUT);
	LCD_VidInit();
	/*used to clear display*/
	LCD_Clear();
	DIO_vidSetPinDirection(PORT_C,PIN_0,OUTPUT);
	while (1)
	{
		u8 x=UART_u8Receive();
		LCD_VidSendData(x);

		if (x=='1')
		{
			DIO_vidSetPinValue(PORT_C,PIN_0,high);
			_delay_ms(1000);
		}
		else
		{
			DIO_vidSetPinValue(PORT_C,PIN_0,low);
		}
		UART_VidSendData(x);
	}

}
