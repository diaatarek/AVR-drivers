/*
 * main.c
 *
 *  Created on: 31 Dec 2021
 *      Author: Mahmoud Mo7amdii
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "KEY_config.h"
#include "KEY_interface.h"
#include "DIO_interface.h"
#include "DIO_register.h"
#include <avr/delay.h>

int main()
{

/*
 value= 0;

	DIO_vidSetPinDirection(PORT_A,PIN_0,OUTPUT);
	DIO_vidSetPinDirection(PORT_A,PIN_1,OUTPUT);
	DIO_vidSetPinDirection(PORT_A,PIN_2,OUTPUT);
	DIO_vidSetPinDirection(PORT_A,PIN_3,OUTPUT);

	DIO_vidSetPinDirection(PORT_A,PIN_4,INPUT);
	DIO_vidSetPinValue(PORT_A,PIN_4,OUTPUT);

	DIO_vidSetPinDirection(PORT_A,PIN_5,INPUT);
	DIO_vidSetPinValue(PORT_A,PIN_5,OUTPUT);

	DIO_vidSetPinDirection(PORT_A,PIN_6,INPUT);
	DIO_vidSetPinValue(PORT_A,PIN_6,OUTPUT);

	DIO_vidSetPinDirection(PORT_A,PIN_7,INPUT);
	DIO_vidSetPinValue(PORT_A,PIN_7,OUTPUT);

	DIO_vidSetPinDirection(PORT_B,PIN_0,OUTPUT);

	while (1)
	{
		value=KEY_GetPressedKey();

		if (value==1)
		{
			DIO_vidSetPinValue(PORT_B,PIN_0,high);
			_delay_ms(1000);
		}
		else
		{
			DIO_vidSetPinValue(PORT_B,PIN_0,low);
		}
	}
	*/
	/*
	DIO_vidSetPinDirection(PORT_A,PIN_0,OUTPUT);
		DIO_vidSetPinDirection(PORT_A,PIN_1,OUTPUT);
		DIO_vidSetPinValue(PORT_A,PIN_0,high);
		DIO_vidSetPinValue(PORT_A,PIN_1,high);
		_delay_ms(3000);
		DIO_vidSetPinValue(PORT_A,PIN_1,low);
		_delay_ms(3000);
		*/
	/*
	DIO_vidSetPortDirection(PORT_A,OUTPUT);
	u32 i=0;
	for (i=0;i<500;i++)
	{
		DIO_vidSetPinValue(PORT_A,PIN_0,low);
		DIO_vidSetPinValue(PORT_A,PIN_1,high);
		DIO_vidSetPinValue(PORT_A,PIN_2,high);
		DIO_vidSetPinValue(PORT_A,PIN_3,high);
		_delay_ms(2);
		DIO_vidSetPinValue(PORT_A,PIN_0,high);
		DIO_vidSetPinValue(PORT_A,PIN_1,low);
		DIO_vidSetPinValue(PORT_A,PIN_2,high);
		DIO_vidSetPinValue(PORT_A,PIN_3,high);
		_delay_ms(2);
		DIO_vidSetPinValue(PORT_A,PIN_0,high);
		DIO_vidSetPinValue(PORT_A,PIN_1,high);
		DIO_vidSetPinValue(PORT_A,PIN_2,low);
		DIO_vidSetPinValue(PORT_A,PIN_3,high);
		_delay_ms(2);
		DIO_vidSetPinValue(PORT_A,PIN_0,high);
		DIO_vidSetPinValue(PORT_A,PIN_1,high);
		DIO_vidSetPinValue(PORT_A,PIN_2,high);
		DIO_vidSetPinValue(PORT_A,PIN_3,low);
		_delay_ms(2);
	}
*/

	while (1)
	{






	}

}

