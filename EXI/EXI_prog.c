# include "BIT_MATH.h"
# include "STD_TYPES.h"
# include "EXI_register.h"

void EXI0_VidInt()
{
	/*Enable sensing element*/
	CLR_BIT(MCUCR,MCUCR_ISC00);
	SET_BIT(MCUCR,MCUCR_ISC01);
	
	/*Enable interupt*/
	SET_BIT(GICR, GICR_INT0);
}
