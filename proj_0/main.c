/*
 * main.c
 *
 *  Created on: 17 Dec 2021
 *      Author: Mahmoud Mo7amdii
 */

#include <avr/io.h>
#include <avr/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "DIO_register.h"
#include "LCD_interface.h"
#include "LCD_config.h"


int main()
{
/*
	int i;
	DDRA = 0xFF;
	while (1)
	{
	for (i=0;i<8;i++)
	{
	SET_BIT(PORTA,i);
	_delay_ms(50);
	}

	for (i=7;i>0;i--)
		{
		CLR_BIT(PORTA,i);
		_delay_ms(50);
		}
	}
*/

	/*data pins*/
	DIO_vidSetPortDirection(PORT_A,OUTPUT);
		/*control pins*/
	DIO_vidSetPortDirection(PORT_B,OUTPUT);
	LCD_VidInit();
	LCD_VidSendData(1+'0');
	LCD_VidSendData(2+'0');
	while (1)
	{

	}

}
