# ifndef TWI_INTERFACE_H
# define TWI_INTERFACE_H

typedef enum {
	Error_Exist                   ,
	NoErrorExist                   ,
	StartConditionErrorExist       ,
	RepStartConditionErrorExist    ,
	MasterSendSlvAddressRWerror     ,
	MasterSendDataError            ,
	MasterReceiveDataError
}TWI_ErrorState;

typedef enum {
	MasterWrite ,
	MaterRead
}TWI_MasterOperation ;

void TWI_VidInitMaster(u8 MasterAddress);
void TWI_VidInitSlave(u8 SlvAddress);

TWI_ErrorState TWI_MStartCondition(void);
TWI_ErrorState TWI_MRepStartCondition(void);
void TWI_MStopCondition(void);

TWI_ErrorState TWI_MSendSlvAddress(u8 copy_u8SSlvAddress , TWI_MasterOperation Copy_MasterOperation);
TWI_ErrorState TWI_MSendData(u8 copy_u8Data);
TWI_ErrorState TWI_MReceiveData(u8 *pu8DataReceiver);


# endif
