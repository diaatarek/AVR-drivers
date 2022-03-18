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
/*
	u8 arr[]={0b1111110,0b0110000,0b1101101,0b1111001,0b0110011,0b1011011,0b1011111,0b1110000,0b1111111,0b1111011};
	DIO_vidSetPortDirection(PORT_A,OUTPUT);
	DIO_vidSetPortValue(PORT_A,arr[i]);
	while (1){
           for (i=0;i<10;i++)
            {
			DIO_vidSetPortValue(PORT_A,arr[i]);
			_delay_ms(500);
            }

	}
	*/


}
