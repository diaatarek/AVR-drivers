# ifndef LCD_INTERFACE_H
# define LCD_INTERFACE_H


void LCD_VidSendCommand(u8 Copy_u8Command);
void LCD_VidSendData(u8 Copy_u8Data);
void LCD_VidInit(void);
void LCD_VidPrintInt(u32 Copy_u32num);
void LCD_VidGotXY(u8 Copy_u8XPos,u8 Copy_u8YPos);
void LCD_Clear(void);




# endif 
