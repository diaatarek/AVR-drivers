# ifndef ICU_REGISTER_H
# define ICU_REGISTER_H

# define ICR1L       *((volatile u16*)0x46)
# define TIFR        *((volatile u8*)0x58)
# define TIMSK       *((volatile u8*)0x59)
# define TCCR1B      *((volatile u8*)0x4E)
# define TCCR1A      *((volatile u8*)0x4F)
# define TCNT1L      *((volatile u16*)0x4C)

# define TICIE1      5
# define ICF1        5

# define ICES1       6
# define CS10        0
# define CS11        1
# define CS12        2

# define COM1A1      7
# define COM1A0      6

# define WGM10       0
# define WGM11       1
# define WGM12       3
# define WGM13       4


# endif
