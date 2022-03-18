# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_register.h"
# include "DIO_interface.h"
# include "TimerR0_register.h"
# include "TimerR0_interface.h"

void Timer_VidInit()
{
	SET_BIT(TCCR0,WGM01);
	CLR_BIT(TCCR0,WGM00);

	OCR0=250;

	SET_BIT(TIMSK,OCIE0);

	SET_BIT(TCCR0,CS00);
	SET_BIT(TCCR0,CS01);
	CLR_BIT(TCCR0,CS02);


}

void Timer_VidFPWM()
{
	/*Select FPWM*/
	SET_BIT(TCCR0,WGM01);
	SET_BIT(TCCR0,WGM00);

	/*Select Mode*/
	CLR_BIT(TCCR0,COM00);
	SET_BIT(TCCR0,COM01);

	/*Select prescaler*/
	SET_BIT(TCCR0,CS00);
	SET_BIT(TCCR0,CS01);
	CLR_BIT(TCCR0,CS02);
}

void Set_FPWMOCR0Value(u8 Copy_u8Counts)
{
	OCR0=Copy_u8Counts;
}
