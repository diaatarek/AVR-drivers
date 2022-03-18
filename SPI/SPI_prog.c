# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "DIO_interface.h"
# include "SPI_register.h"
# include "SPI_interface.h"

void SPI_VidMasterInt(void)
{
	/*select master mode*/
	SET_BIT(SPCR,MSTR);
	/*select clock rate*/
	CLR_BIT(SPCR,SPR0);
	CLR_BIT(SPCR,SPR1);
	/*enable SPI*/
	SET_BIT(SPCR,SPE);
}

void SPI_VidSlaveInt(void)
{
	/*select slave mode*/
	CLR_BIT(SPCR,MSTR);
	/*enable SPI*/
	SET_BIT(SPCR,SPE);
}

u8 SPI_u8transciever(u8 Copy_u8data)
{
	SPDR=Copy_u8data;
	while (GET_BIT(SPSR,SPIF)==0);
	return SPDR;
}

