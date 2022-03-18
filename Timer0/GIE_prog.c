# include "BIT_MATH.h"
# include "STD_TYPES.h"
# include "GIE_register.h"


void GIE_VidEnable()
{
	SET_BIT(SREG,7);
}
void GIE_VidDisable()
{
	CLR_BIT(SREG,7);
}
