# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_register.h"
# include "DIO_interface.h"
# include "TimerR1_register.h"
# include "TimerR1_interface.h"

void TimerR1_VidInt()
{
	/*Select FPWM mode*/
	SET_BIT(TCCR1A,COM1A1);
	CLR_BIT(TCCR1A,COM1A0);

	/*Select Wave generation mode*/
	CLR_BIT(TCCR1A,WGM10);
	SET_BIT(TCCR1A,WGM11);
	SET_BIT(TCCR1B,WGM12);
	SET_BIT(TCCR1B,WGM13);

	/*Select Maximum overflow counts*/
	ICR1L= 20000;

	/*Select prescaller*/
	CLR_BIT(TCCR1B,CS10);
	SET_BIT(TCCR1B,CS11);
	CLR_BIT(TCCR1B,CS12);

}

void TimerR1_VidSetOCR1(u16 Copy_u16Value)
{
	OCR1AL=Copy_u16Value;
}
