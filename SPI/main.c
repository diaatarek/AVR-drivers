/*
 * main.c
 *
 *  Created on: 26 Feb 2022
 *      Author: Mahmoud Mo7amdii
 */

# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_interface.h"
# include "SPI_interface.h"

# define MASTER	1
# define SLAVE	0

# define TARGET		SLAVE


#if TARGET == MASTER

int main()
{
	/*MOSI pin direction*/
	DIO_vidSetPinDirection(PORT_B,PIN_5,OUTPUT);
	/*MISO pin direction*/
	DIO_vidSetPinDirection(PORT_B,PIN_6,INPUT);
	/*SCK*/
	DIO_vidSetPinDirection(PORT_B,PIN_7,OUTPUT);
	/*SS*/
	DIO_vidSetPinDirection(PORT_B,PIN_4,OUTPUT);
	DIO_vidSetPinValue(PORT_B,PIN_4,low);
	DIO_vidSetPortDirection(PORT_A,INPUT);
	SPI_VidMasterInt();
	while (1)
	{
		u8 x=SPI_u8transciever(5);
		if (x==10)
		{
			DIO_vidSetPortValue(PORT_A,x);
		}
	}

}

#elif TARGET == SLAVE

int main()
{
	/*MOSI pin direction*/
	DIO_vidSetPinDirection(PORT_B,PIN_5,INPUT);
	/*MISO pin direction*/
	DIO_vidSetPinDirection(PORT_B,PIN_6,OUTPUT);
	/*SCK*/
	DIO_vidSetPinDirection(PORT_B,PIN_7,INPUT);
	/*SS*/
	DIO_vidSetPinDirection(PORT_B,PIN_4,INPUT);
	DIO_vidSetPortDirection(PORT_A,INPUT);

	SPI_VidSlaveInt();
		while (1)
		{
			u8 x=SPI_u8transciever(10);
					if (x==5)
					{
						DIO_vidSetPortValue(PORT_A,x);
					}
		}
}

#endif
