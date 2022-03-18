#include "STD_TYPES.h"
#include"BIT_MATH.h"
#include "TWI_interface.h"
# include "EEPROM_interface.h"




void EEPROM_VidWriteByte(u8 copy_u8Byte, u16 Address , u8 E_bit)
{
	/* START CONDITION*/
	TWI_MStartCondition();
	TWI_MSendSlvAddress(((0b10100000) | (Address>>8) | (E_bit<<2)) , MasterWrite)   ;     /* 0b1010ebb1----->0b1010EBB*/
	TWI_MSendData(Address);
	TWI_MSendSlvAddress(copy_u8Byte) ;
	TWI_MStopCondition();
}

u8 EEPROM_VidReadByte(u16 Address , u8 E_Bit)
{
	TWI_MStartCondition();
		TWI_MSendSlvAddress(((0b10100000) | (Address>>8) | (E_Bit<<2)) , MasterWrite)   ;     /* 0b1010ebb1----->0b1010EBB*/
		TWI_MSendData(Address);
		TWI_MRepStartCondition();
		TWI_MSendSlvAddress(((0b10100000) | (Address>>8) | (E_Bit<<2)) , MaterRead);
		u8 x=0;
		TWI_MReceiveData(&x);
		TWI_MStopCondition();
		return x;
}
