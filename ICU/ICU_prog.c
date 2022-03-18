# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_register.h"
# include "DIO_interface.h"
# include "ICU_interface.h"
# include "ICU_register.h"

void ICU_VidEnableInt()
{
	SET_BIT(TIMSK,TICIE1);
	SET_BIT(TIFR,ICF1);
}

void ICU_VidSetEdge(u8 Copy_u8Mode)
{
	if (Copy_u8Mode==0)
	{
		CLR_BIT(TCCR1B,ICES1);
	}
	else
	{
		CLR_BIT(TCCR1B,ICES1);
	}
}

void TimerR1ICU_VidInt()
{
	/*Select normal mode*/
	CLR_BIT(TCCR1A,COM1A1);
	CLR_BIT(TCCR1A,COM1A0);

	/*Select Wave generation mode as a normal*/
	CLR_BIT(TCCR1A,WGM10);
	CLR_BIT(TCCR1A,WGM11);
	CLR_BIT(TCCR1B,WGM12);
	CLR_BIT(TCCR1B,WGM13);


	/*Select prescaller*/
	CLR_BIT(TCCR1B,CS10);
	SET_BIT(TCCR1B,CS11);
	CLR_BIT(TCCR1B,CS12);

}

u16 ICU_GetValue()
{
	return ICR1L;
}
