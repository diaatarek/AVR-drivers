/*
 * main.c
 *
 *  Created on: 5 Feb 2022
 *      Author: Mahmoud Mo7amdii
 */


# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_register.h"
# include "DIO_interface.h"
# include "ADC_register.h"
# include "ADC_interface.h"
# include "DIO_interface.h"
# include "DIO_register.h"
# include "DIO_config.h"


int main()
{
	DIO_vidSetPinDirection(PORT_A,PIN_0,INPUT);
	DIO_vidSetPortDirection(PORT_B,OUTPUT);
	ADC_vidInit();
	/*data pins*/
	DIO_vidSetPortDirection(PORT_C,OUTPUT);
	/*control pins*/
	DIO_vidSetPortDirection(PORT_B,OUTPUT);
	LCD_VidInit();
	while (1)
	{
		u8 x=0,y,i=0;
		f32 value[100];
		y=ADC_u8GetChannelValue(0,&x);
		f32 Xc=x*((5*1000)/(10*1024));
		u8 counter =0,i=0;
		while (Xc!=0)
		{
			Xc=Xc/10;
			counter++;
		}
		while (counter!=0)
		{
		for (i=0;i<counter;i++)
			{
				value[i]=((Xc)/10)-(int)Xc;
			}
		}
		for (i=counter;i>=0;i++)
		{
			LCD_VidSendData(value[i]+'0');
		}
	}
/*
		if (y!=0)
		{
			DIO_vidSetPortValue(PORT_B,x);
		}
		else
		{
			DIO_vidSetPinValue(PORT_B,PIN_0,OUTPUT);
		}
*/

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





			while (1)
			{

			}
*/
}
