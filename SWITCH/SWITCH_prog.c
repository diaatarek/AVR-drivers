# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "SWITCH_config.h"
# include "SWITCH_interface.h"
# include "DIO_register.h"
# include "DIO_interface.h"
# include <avr\delay.h>

void SWITCH_u32SetAngle(u32 Copy_u32Angle)
{
	DIO_vidSetPortDirection(SWITCH_PORT,OUTPUT);
	u32 i=0;
		for (i=0;i<((360/(Copy_u32Angle))/4);i++)
		{
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_0,low);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_1,high);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_2,high);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_3,high);
			_delay_ms(10);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_0,high);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_1,low);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_2,high);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_3,high);
			_delay_ms(10);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_0,high);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_1,high);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_2,low);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_3,high);
			_delay_ms(10);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_0,high);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_1,high);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_2,high);
			DIO_vidSetPinValue(SWITCH_PORT,BASE_PIN_3,low);
			_delay_ms(10);
		}
}
