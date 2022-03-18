/*
 * main.c
 *
 *  Created on: 11 Feb 2022
 *      Author: Mahmoud Mo7amdii
 */

# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_register.h"
# include "DIO_interface.h"
# include "TimerR0_register.h"
# include "TimerR0_interface.h"
# include "GIE_interface.h"
# include "GIE_register.h"


int main()
{
	/*
	DIO_vidSetPinDirection(PORT_A,PIN_0,OUTPUT);
	Timer_VidInit();
	GIE_VidEnable();
	*/
	DIO_vidSetPinDirection(PORT_B,PIN_3,OUTPUT);
	Timer_VidFPWM();
	u8 Counts=(256*15)/100;
	Set_FPWMOCR0Value(Counts);
	DIO_vidSetPinValue(PORT_B,PIN_3,OUTPUT);
	while (1)
	{

	}
}

/*
void __vector_10(void)__attribute__((signal));
void __vector_10(void)
{
	static u16 counter=0,flag1=0;
	counter++;
	if (flag1==0)
	{
	if (counter==500)
	{
	DIO_vidSetPinValue(PORT_A,PIN_0,OUTPUT);
	}
	else if (counter==1000)
	{
	DIO_vidSetPinValue(PORT_A,PIN_0,INPUT);
	counter=0;
	flag1=1;
	}
	}
	if (flag1==1)
	{
		if (counter == 250)
		{
			DIO_vidSetPinValue(PORT_A,PIN_0,OUTPUT);
		}
		else if (counter == 750)
		{
			DIO_vidSetPinValue(PORT_A,PIN_0,INPUT);
			counter=0;
			flag1=0;
		}
	}

}
*/
