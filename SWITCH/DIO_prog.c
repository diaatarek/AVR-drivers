
# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_register.h"
# include "DIO_interface.h"



void DIO_vidSetPinDirection(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Direction){

	
	if (Copy_u8Direction==OUTPUT)
	{
		switch (Copy_u8Port)
		{
		case (PORT_A): SET_BIT(DDRA,Copy_u8Pin);break;
		case (PORT_B): SET_BIT(DDRB,Copy_u8Pin);break;
		case (PORT_C): SET_BIT(DDRC,Copy_u8Pin);break;
		case (PORT_D): SET_BIT(DDRD,Copy_u8Pin);break;
		}
	}
	else if (Copy_u8Direction==INPUT)
	{
		switch (Copy_u8Port)
		{
		case (PORT_A): CLR_BIT(DDRA,Copy_u8Pin);break;
		case (PORT_B): CLR_BIT(DDRB,Copy_u8Pin);break;
		case (PORT_C): CLR_BIT(DDRC,Copy_u8Pin);break;
		case (PORT_D): CLR_BIT(DDRD,Copy_u8Pin);break;
		}
	}
}

void DIO_vidSetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Value){

	
	if (Copy_u8Value==OUTPUT)
		{
			switch (Copy_u8Port)
			{
			case (PORT_A): SET_BIT(PORTA,Copy_u8Pin);break;
			case (PORT_B): SET_BIT(PORTB,Copy_u8Pin);break;
			case (PORT_C): SET_BIT(PORTC,Copy_u8Pin);break;
			case (PORT_D): SET_BIT(PORTD,Copy_u8Pin);break;
			}
		}
		else if (Copy_u8Value==INPUT)
		{
			switch (Copy_u8Port)
			{
			case (PORT_A): CLR_BIT(PORTA,Copy_u8Pin);break;
			case (PORT_B): CLR_BIT(PORTB,Copy_u8Pin);break;
			case (PORT_C): CLR_BIT(PORTC,Copy_u8Pin);break;
			case (PORT_D): CLR_BIT(PORTD,Copy_u8Pin);break;
			}
		}

}
u8 DIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin){
	
	switch (Copy_u8Port)
	{
    case (PORT_A): return GET_BIT(PINA,Copy_u8Pin);break;
	case (PORT_B): return GET_BIT(PINB,Copy_u8Pin);break;
	case (PORT_C): return GET_BIT(PINC,Copy_u8Pin);break;
	case (PORT_D): return GET_BIT(PIND,Copy_u8Pin);break;
	}

}
void DIO_vidSetPortDirection(u8 Copy_u8Port,u8 Copy_u8Direction){
	

	if (Copy_u8Direction==OUTPUT)
		{
			switch (Copy_u8Port)
			{
			case (PORT_A): DDRA=255;break;
			case (PORT_B): DDRB=255;break;
			case (PORT_C): DDRC=255;break;
			case (PORT_D): DDRD=255;break;
			}
         }
    else if (Copy_u8Direction==INPUT)
		{
            switch (Copy_u8Port)
			{
			case (PORT_A): DDRA=0x00;break;
			case (PORT_B): DDRB=0x00;break;
			case (PORT_C): DDRC=0x00;break;
			case (PORT_D): DDRD=0x00;break;
			}
		}

}

void DIO_vidSetPortValue(u8 Copy_u8Port,u8 Copy_u8Value){
	

				switch (Copy_u8Port)
				{
				case (PORT_A): PORTA=Copy_u8Value;break;
				case (PORT_B): PORTB=Copy_u8Value;break;
				case (PORT_C): PORTC=Copy_u8Value;break;
				case (PORT_D): PORTD=Copy_u8Value;break;
				}

}
u8 DIO_u8GetPortValue(u8 Copy_u8Port){
	
	switch (Copy_u8Port)
		{
	    case (PORT_A): return PINA;break;
		case (PORT_B): return PINB;break;
		case (PORT_C): return PINC;break;
		case (PORT_D): return PIND;break;
		}

}
