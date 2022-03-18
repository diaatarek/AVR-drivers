# ifndef SPI_REGISTER_H
# define SPI_REGISTER_H



# define SPCR   *((volatile u8*)0x2D)
# define SPSR   *((volatile u8*)0x2E)
# define SPDR   *((volatile u8*)0x2F)

# define SPE	6
# define DORD	5
# define MSTR	4
# define SPR0	0
# define SPR1	1

# define SPIF	7





# endif