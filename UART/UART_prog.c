# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_interface.h"
# include "DIO_register.h"
# include "UART_register.h"
# include "UART_interface.h"



void UART_VidInt()
{

	/*No parity mode, Asynchronous, single stop bit, and Character size*/
	UCSRC=0b10000110;

	/*Select Baud rate*/
	UBRRL=51;

	/*Enable Receiver and transmitt of microcontroller*/
	SET_BIT(UCSRB,RXEN);
	SET_BIT(UCSRB,TXEN);


}


void UART_VidSendData(u8 Copy_u8Data)
{
	/*check the register is empty or not*/

	while (GET_BIT(UCSRA,UDRE)==0);
	UDR = Copy_u8Data;
}

u8 UART_u8Receive()
{
	/*check if receive complete*/
	while (GET_BIT(UCSRA,RXC)==0);
	return UDR;
}
