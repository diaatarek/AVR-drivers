/*
 * main.c
 *
 *  Created on: 24 Dec 2021
 *      Author: Mahmoud Mo7amdii
 */

# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_interface.h"
# include <avr/delay.h>
# include "LCD_interface.h"
# include "LCD_config.h"
# include "avr/delay.h"

int main(){


/*
	DIO_vidSetPinDirection(PORT_A,PIN_0,OUTPUT);
	DIO_vidSetPinValue(PORT_A,PIN_0,high);
*/

	/*
	DIO_vidSetPortDirection(PORT_A,OUTPUT);
	DIO_vidSetPortValue(PORT_A,high);
*/
	/*
	x= DIO_u8GetPinValue(PORT_A,PIN_0);
	if (x==1)
	{
		DIO_vidSetPinDirection(PORT_B,PIN_0,OUTPUT);
		DIO_vidSetPinValue(PORT_B,PIN_0,high);
	}
	*/

	/*data pins*/
	DIO_vidSetPortDirection(PORT_A,OUTPUT);
	/*control pins*/
	DIO_vidSetPortDirection(PORT_B,OUTPUT);
	LCD_VidInit();


/*
	LCD_VidSendData('M');
	LCD_VidSendData('a');
	LCD_VidSendData('h');
	LCD_VidSendData('m');
	LCD_VidSendData('o');
	LCD_VidSendData('u');
	LCD_VidSendData('d');
	LCD_VidSendData('.');
	LCD_VidSendData('M');
	LCD_VidSendData('o');
	LCD_VidSendData('h');
	LCD_VidSendData('m');
	LCD_VidSendData('a');
	LCD_VidSendData('d');
	LCD_VidSendData('y');
*/
	u16 Value=5,i=1;
	static u8 counter=0;

		while (1)
		{
			/*Over rewrite*/
			for (i=1;i<=Value;i++)
				{
					LCD_VidPrintInt(i);
					if (counter==15)
						{
							LCD_VidGotXY(1,0);
						}
					counter++;
					_delay_ms(500);
					if (counter==32)
					{
						LCD_VidGotXY(0,0);
						counter=0;
					}
				}


		}


}
