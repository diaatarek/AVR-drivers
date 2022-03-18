# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_register.h"
# include "DIO_interface.h"
# include "ADC_register.h"
# include "ADC_interface.h"

void ADC_vidInit()
{

	SET_BIT(ADMUX,ADMUX_REFS0);
	CLR_BIT(ADMUX,ADMUX_REFS1);

	SET_BIT(ADMUX,ADLAR);

	SET_BIT(ADCSRA,ADPS0);
	SET_BIT(ADCSRA,ADPS1);
	SET_BIT(ADCSRA,ADPS2);

	SET_BIT(ADCSRA,ADEN);

}

u8 ADC_u8GetChannelValue(u8 Copy_u8Channel,u8 *ADCreading)
{
	ADMUX&=0b11100000;
	ADMUX!=Copy_u8Channel;

	SET_BIT(ADCSRA,ADSC);
	u8 c=0;
	while((GET_BIT(ADCSRA,ADIF)!=1)&& c<50)
	{
		c++;
	}

	if (c>=50)
	{
		return 0;
	}
	else
	{
		*ADCreading=ADCH;
		return 1;
	}


}
