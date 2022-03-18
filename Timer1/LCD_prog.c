# include <avr/delay.h>
# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "LCD_config.h"
# include "LCD_interface.h"
# include "DIO_interface.h"



void LCD_VidSendCommand(u8 Copy_u8Command)
{
	/*Set RS as zero to send command*/

	DIO_vidSetPinValue(LCD_CONTROL_PORT,LCD_RS_PIN ,low);

			/*Set RW as zero to write */

			DIO_vidSetPinValue(LCD_CONTROL_PORT,LCD_RW_PIN ,low);

			/*Send your Data*/

			DIO_vidSetPortValue(LCD_DATA_PORT,Copy_u8Command);

			/*Set E as high*/

			DIO_vidSetPinValue(LCD_CONTROL_PORT,LCD_E_PIN,high);

			/*delay 2 ms */

			_delay_ms(2);

			/* Set E as low */

			DIO_vidSetPinValue(LCD_CONTROL_PORT,LCD_E_PIN,low);
}
void LCD_VidSendData(u8 Copy_u8Data)
{
	/*Set RS as one to send command*/

		DIO_vidSetPinValue(LCD_CONTROL_PORT,LCD_RS_PIN ,high);

		/*Set RW as zero to write */

		DIO_vidSetPinValue(LCD_CONTROL_PORT,LCD_RW_PIN ,low);

		/*Send your Data*/

		DIO_vidSetPortValue(LCD_DATA_PORT,Copy_u8Data);

		/*Set E as high*/

		DIO_vidSetPinValue(LCD_CONTROL_PORT,LCD_E_PIN,high);

		/*delay 2 ms */

		_delay_ms(2);

		/* Set E as low */

		DIO_vidSetPinValue(LCD_CONTROL_PORT,LCD_E_PIN,low);
}
void LCD_VidInit(void)
{
	_delay_ms(30);
	LCD_VidSendCommand(0b00111100);
	_delay_ms(1);
	LCD_VidSendCommand(0b00001100);
	_delay_ms(1);
	LCD_VidSendCommand(0b00000001);
	
}

void LCD_VidPrintInt(u32 Copy_u32num)
{
	if (Copy_u32num!=0)
	{
		LCD_VidPrintInt(Copy_u32num/10);
		LCD_VidSendData(Copy_u32num%10+'0');
	}
	else
	{
		LCD_VidSendData('0');
	}
}
