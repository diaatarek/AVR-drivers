

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "KEY_config.h"
#include "KEY_interface.h"
#include "DIO_interface.h"
#include "DIO_register.h"

u8 KEY_GetPressedKey(void)
{
	u8 state = 5;
	u8 PressedKey = 101;
	u8 Array [4][4] = KEY_USER_ARRAY;
	u8 ColumnArray [] = {KEY_COLUMN0 ,KEY_COLUMN1 ,KEY_COLUMN2 ,KEY_COLUMN3};
	u8 RowArray [] = {KEY_ROW0 ,KEY_ROW1 ,KEY_ROW2 ,KEY_ROW3};

	u8 col,row;
	for (col=0;col<4;col++)
	{

		DIO_vidSetPinValue(KEY_PORT,ColumnArray[col],low);
		for (row=0;row<4;row++)
		{
			state = DIO_u8GetPinValue(KEY_PORT,RowArray[row]);
			if (state == low)
			{
				PressedKey=Array[col][row];
			while (state==low)
			{
				state = DIO_u8GetPinValue(KEY_PORT,RowArray[row]);
			}
			DIO_vidSetPinValue(KEY_PORT,ColumnArray[col], high);
			return PressedKey;
			}
		}
		DIO_vidSetPinValue(KEY_PORT,ColumnArray[col], high);
	}
	return PressedKey;

}
