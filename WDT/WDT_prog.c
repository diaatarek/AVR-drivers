# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_register.h"
# include "DIO_interface.h"
# include "WDT_register.h"
# include "WDT_interface.h"

void WDT_VidEnable()
{
	SET_BIT(WDTCR,WDE);
}

void WDT_VidSleep(u8 Copy_u8Time)
{
	/*Bit masking*/
	WDTCR&=0b11111000;
	WDTCR|=Copy_u8Time;
}

void WDT_VidDisable()
{
	WDTCR=0b00011000;
	/*CLR_BIT(WDTCR,WDE);*/
	WDTCR=0;

}
