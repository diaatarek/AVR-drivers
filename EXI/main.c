/*
 * main.c
 *
 *  Created on: 14 Jan 2022
 *      Author: Mahmoud Mo7amdii
 */

# include "BIT_MATH.h"
# include "STD_TYPES.h"
# include "EXI_register.h"
# include "EXI_interface.h"
# include "DIO_interface.h"
# include "GIE_interface.h"
# include <avr/delay.h>

int main()
{
	DIO_vidSetPinDirection(PORT_A,PIN_0,OUTPUT);
	DIO_vidSetPinDirection(PORT_D,PIN_2,INPUT);
	DIO_vidSetPinValue(PORT_D,PIN_2,OUTPUT);
	GIE_VidEnable();
	EXI0_VidInt();

	while (1)
	{

	}


}
void __vector_1(void)__attribute__((signal));
void __vector_1(void)
{
	DIO_vidSetPinValue(PORT_A,PIN_0,OUTPUT);
	_delay_ms(1000);
	DIO_vidSetPinValue(PORT_A,PIN_0,INPUT);
	_delay_ms(1000);

}
