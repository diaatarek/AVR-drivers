# ifndef TIMERR0_REGISTER_H
# define TIMERR0_REGISTER_H

# define TCCR0      *((volatile u8*)0x53)
# define OCR0       *((volatile u8*)0x5C)
# define TIMSK      *((volatile u8*)0x59)

# define WGM01      3
# define WGM00      6

# define OCIE0      1

# define CS00       0
# define CS01       1
# define CS02       2

# define COM00      4
# define COM01      5



# endif
