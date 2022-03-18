# ifndef WDT_REGISTER_H
# define WDT_REGISTER_H

# define WDTCR      *((volatile u8*)0x41)

# define WDE         3
/*
# define WDP0        0
# define WDP1        1
# define WDP2        2
*/

# define WDTOE       4

# endif
