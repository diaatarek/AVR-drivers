# ifndef UART_REGISTER_H
# define UART_REGISTER_H

# define UDR       *((volatile u8*)0x2C)
# define UCSRA     *((volatile u8*)0x2B)
# define UCSRB     *((volatile u8*)0x2A)
# define UCSRC     *((volatile u8*)0x40)
# define UBRRH     *((volatile u8*)0x40)
# define UBRRL     *((volatile u8*)0x29)


# define RXC 	7
# define UDRE	5

# define RXEN	4
# define TXEN	3





# endif
