/*
 * main.c
 *
 *  Created on: 19 Feb 2022
 *      Author: Mahmoud Mo7amdii
 */


# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_register.h"
# include "DIO_interface.h"
# include "WDT_register.h"
# include "WDT_interface.h"
# include <avr/delay.h>


int main()
{
	/* here, the three bits have set to be zero since the register defined, then the reset time is 16.3 ms where three bits are zeros
	WDT_VidEnable();
	*/
	DIO_vidSetPinDirection(PORT_A,PIN_0,OUTPUT);
	DIO_vidSetPinValue(PORT_A,PIN_0,high);
	_delay_ms(1000);
	DIO_vidSetPinValue(PORT_A,PIN_0,low);
	WDT_VidEnable();
	/*Select the binary corresponding to the time in data sheet*/
	WDT_VidSleep(6);
	while(1);

}
