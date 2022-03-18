# ifndef DIO_INTERFACE_H
# define DIO_INTERFACE_H

#define high     1
#define low      0
#define PORT_A   0
#define PORT_B   1
#define PORT_C   2
#define PORT_D   3
#define PIN_0    0
#define PIN_1    1
#define PIN_2    2
#define PIN_3    3
#define PIN_4    4
#define PIN_5    5
#define PIN_6    6
#define PIN_7    7
#define INPUT    0
#define OUTPUT   1

void DIO_vidSetPinDirection(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Direction);
void DIO_vidSetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Value);
u8 DIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin);
void DIO_vidSetPortDirection(u8 Copy_u8Port,u8 Copy_u8Direction);
void DIO_vidSetPortValue(u8 Copy_u8Port,u8 Copy_u8Value);
u8 DIO_u8GetPortValue(u8 Copy_u8Port);


# endif
