# ifndef EXI_REGISTER_H
# define EXI_REGISTER_H

# define  MCUCR            *((volatile u8*)0x55)
# define  MCUCR_ISC00      0
# define  MCUCR_ISC01      1

# define  GICR             *((volatile u8*)0x5B)
# define  GICR_INT0        6


# endif
