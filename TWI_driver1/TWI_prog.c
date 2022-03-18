# include "STD_TYPES.h"
# include "BIT_MATH.h"
# include "TWI_register.h"
# include "TWI_private.h"
# include "TWI_interface.h"



void TWI_VidInitMaster(u8 MasterAddress)
{
	/* set bit rate 400khz */

	TWBR = 2;
	/* set master address*/
	if (MasterAddress){
		TWAR = MasterAddress << 1 ;
	}
	/* Enable I2C*/
	SET_BIT(TWCR , TWCR_TWEN) ;

	}
void TWI_VidInitSlave(u8 SlvAddress)
{
	/* set Slv address*/

		TWAR = SlvAddress << 1 ;

	/* Enable I2C*/
	SET_BIT(TWCR , TWCR_TWEN) ;


	}

TWI_ErrorState TWI_MStartCondition(void)
{
	TWI_ErrorState Error =StartConditionErrorExist;

SET_BIT(TWCR , TWCR_TWSTA);

/** Clear flag by writing 1*/
SET_BIT(TWCR , TWCR_TWINT);
while (GET_BIT( TWCR , TWCR_TWINT) ==0);


  if((TWSR&0b11111100)==START_ACK)
  {
	  Error = NoErrorExist;
  }

  return Error ;
}


TWI_ErrorState TWI_MRepStartCondition(void)
{
	TWI_ErrorState Error =RepStartConditionErrorExist;

	SET_BIT(TWCR , TWCR_TWSTA);

	/** Clear flag by writing 1*/
	SET_BIT(TWCR , TWCR_TWINT);
	while (GET_BIT( TWCR , TWCR_TWINT) ==0);


	  if((TWSR&0b11111100)==REP_START_ACK)
	  {
		  Error = NoErrorExist;
	  }

	  return Error ;
}
void TWI_MStopCondition(void)
{

		SET_BIT(TWCR , TWCR_TWSTO);

		/** Clear flag by writing 1*/
		SET_BIT(TWCR , TWCR_TWINT);
		while (GET_BIT( TWCR , TWCR_TWINT) ==0);

}

TWI_ErrorState TWI_MSendSlvAddress(u8 copy_u8SSlvAddress , TWI_MasterOperation Copy_u8MOperation)
{
	TWI_ErrorState Error =MasterSendSlvAddressRWerror ;
	if (Copy_u8MOperation == MasterWrite)
	{
		TWDR=((copy_u8SSlvAddress<<1) && 0b11111110 );
	}
	else if (MaterRead)
	{
		TWDR=((copy_u8SSlvAddress<<1) |1 );
	}
	SET_BIT(TWCR , TWCR_TWINT);
	while (GET_BIT( TWCR , TWCR_TWINT) ==0);


		  if(((TWSR&0b11111100)==SLAVE_R_NACK) || ((TWSR&0b11111100)==SLAVE_W_NACK))
		  {
			  Error = NoErrorExist;
		  }

		  return Error ;
}
TWI_ErrorState TWI_MSendData(u8 copy_u8Data)
{
	TWI_ErrorState Error =MasterSendDataError ;
		TWDR=copy_u8Data
		SET_BIT(TWCR , TWCR_TWINT);
		while (GET_BIT( TWCR , TWCR_TWINT) ==0);


			  if(((TWSR&0b11111100)==SLAVE_DATA_REC_NACK) || ((TWSR&0b11111100)==SLAVE_DATA_REC_ACK))
			  {
				  Error = NoErrorExist;
			  }

			  return Error ;
}
TWI_ErrorState TWI_MReceiveData(u8 *pu8DataReceiver)
{
	TWI_ErrorState Error =MasterReceiveDataError ;
			SET_BIT(TWCR , TWCR_TWINT);
			while (GET_BIT( TWCR , TWCR_TWINT) ==0);
*pu8DataReceiver = TWDR ;

				  if(((TWSR&0b11111100)==MASTER_R_DATA_ACK) || ((TWSR&0b11111100)==MASTER_R_DATA_NACK))
				  {
					  Error = NoErrorExist;
				  }

				  return Error ;
}
