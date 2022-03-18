# ifndef TIMERR1_REGISTER_H
# define TIMERR1_REGISTER_H

# define TCCR1A      *((volatile u8*)0x4F)
# define TCCR1B      *((volatile u8*)0x4E)

# define OCR1AL      *((volatile u16*)0x4A)
# define ICR1L       *((volatile u16*)0x46)

# define COM1A0      6
# define COM1A1      7

# define WGM10       0
# define WGM11       1
# define WGM12       3
# define WGM13       4

# define CS10        0
# define CS11        1
# define CS12        2





# endif
