#include "types.h"
#include "utl.h"

#include "DIO_Config.h"
#include "DIO_Interface.h"

#include "Seven_Seg_Config.h"
#include "Seven_Seg_Interface.h"

#define F_CPU 8000000UL
#include <util/delay.h>


extern u8 Seven_Seg_Display_Num(u8 Number, u8 LCD_Number)
 {	
	Seven_Seg_Clear();

	switch (LCD_Number)
	{
		case 1:
		DIO_WritePin(Seven_Seg_COMMON_1, Com_ON);
		break;

		case 2:
		DIO_WritePin(Seven_Seg_COMMON_2, Com_ON);
		break;

		case 3:
		DIO_WritePin(Seven_Seg_COMMON_3, Com_ON);
		break;

		case 4:
		DIO_WritePin(Seven_Seg_COMMON_4, Com_ON);
		break;

		case 5:
		DIO_WritePin(Seven_Seg_COMMON_5, Com_ON);
		break;

		case 6:
		DIO_WritePin(Seven_Seg_COMMON_6, Com_ON);
		break;

		case 7:
		DIO_WritePin(Seven_Seg_COMMON_7, Com_ON);
		break;

		case 8:
		DIO_WritePin(Seven_Seg_COMMON_8, Com_ON);
		break;

		default:
		return ERROR;
		break;
	}

	if (Seven_Seg_Decoder==Yes)
	{

		switch (Number)
			{
				case 0:

				return OK;
				break;

				case 1:
				DIO_WritePin(Dec_D, Sig_ON);
				return OK;
				break;

				case 2:
				DIO_WritePin(Dec_C, Sig_ON);
				return OK;
				break;

				case 3:
				DIO_WritePin(Dec_C, Sig_ON);
				DIO_WritePin(Dec_D, Sig_ON);
				return OK;
				break;

				case 4:
				DIO_WritePin(Dec_B, Sig_ON);
				return OK;
				break;

				case 5:
				DIO_WritePin(Dec_B, Sig_ON);
				DIO_WritePin(Dec_D, Sig_ON);
				return OK;
				break;

				case 6:
				DIO_WritePin(Dec_B, Sig_ON);
				DIO_WritePin(Dec_C, Sig_ON);
				return OK;
				break;

				case 7:
				DIO_WritePin(Dec_B, Sig_ON);
				DIO_WritePin(Dec_C, Sig_ON);
				DIO_WritePin(Dec_D, Sig_ON);
				return OK;
				break;

				case 8:
				DIO_WritePin(Dec_A, Sig_ON);
				return OK;
				break;

				case 9:
				DIO_WritePin(Dec_A, Sig_ON);
				DIO_WritePin(Dec_D, Sig_ON);
				return OK;
				break;

				default:
				return ERROR;
				break;
			}
	}

	if (Seven_Seg_Decoder==No)
	{
		switch (Number)
			{
				case 0:
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_B, Sig_ON);
				DIO_WritePin(Seg_C, Sig_ON);
				DIO_WritePin(Seg_D, Sig_ON);
				DIO_WritePin(Seg_E, Sig_ON);
				DIO_WritePin(Seg_F, Sig_ON);
				return OK;
				break;

				case 1:
				DIO_WritePin(Seg_B, Sig_ON);
				DIO_WritePin(Seg_C, Sig_ON);
				return OK;
				break;

				case 2:
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_B, Sig_ON);
				DIO_WritePin(Seg_D, Sig_ON);
				DIO_WritePin(Seg_E, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				case 3:
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_B, Sig_ON);
				DIO_WritePin(Seg_C, Sig_ON);
				DIO_WritePin(Seg_D, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				case 4:
				DIO_WritePin(Seg_B, Sig_ON);
				DIO_WritePin(Seg_C, Sig_ON);
				DIO_WritePin(Seg_F, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				case 5:
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_C, Sig_ON);
				DIO_WritePin(Seg_D, Sig_ON);
				DIO_WritePin(Seg_F, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				case 6:
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_C, Sig_ON);
				DIO_WritePin(Seg_D, Sig_ON);
				DIO_WritePin(Seg_E, Sig_ON);
				DIO_WritePin(Seg_F, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				case 7:
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_B, Sig_ON);
				DIO_WritePin(Seg_C, Sig_ON);
				return OK;
				break;

				case 8:
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_B, Sig_ON);
				DIO_WritePin(Seg_C, Sig_ON);
				DIO_WritePin(Seg_D, Sig_ON);
				DIO_WritePin(Seg_E, Sig_ON);
				DIO_WritePin(Seg_F, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				case 9:
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_B, Sig_ON);
				DIO_WritePin(Seg_C, Sig_ON);
				DIO_WritePin(Seg_D, Sig_ON);
				DIO_WritePin(Seg_F, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				case 'A':
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_B, Sig_ON);
				DIO_WritePin(Seg_C, Sig_ON);
				DIO_WritePin(Seg_E, Sig_ON);
				DIO_WritePin(Seg_F, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				case 'B':
				DIO_WritePin(Seg_C, Sig_ON);
				DIO_WritePin(Seg_D, Sig_ON);
				DIO_WritePin(Seg_E, Sig_ON);
				DIO_WritePin(Seg_F, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				case 'C':
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_D, Sig_ON);
				DIO_WritePin(Seg_E, Sig_ON);
				DIO_WritePin(Seg_F, Sig_ON);
				return OK;
				break;

				case 'D':
				DIO_WritePin(Seg_B, Sig_ON);
				DIO_WritePin(Seg_C, Sig_ON);
				DIO_WritePin(Seg_D, Sig_ON);
				DIO_WritePin(Seg_E, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				case 'E':
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_D, Sig_ON);
				DIO_WritePin(Seg_E, Sig_ON);
				DIO_WritePin(Seg_F, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				case 'F':
				DIO_WritePin(Seg_A, Sig_ON);
				DIO_WritePin(Seg_E, Sig_ON);
				DIO_WritePin(Seg_F, Sig_ON);
				DIO_WritePin(Seg_G, Sig_ON);
				return OK;
				break;

				default:
				return ERROR;
				break;
			}
	}

}

extern u8 Seven_Seg_Clear()
{
		DIO_WritePin(Seg_A, Sig_OFF);
		DIO_WritePin(Seg_B, Sig_OFF);
		DIO_WritePin(Seg_C, Sig_OFF);
		DIO_WritePin(Seg_D, Sig_OFF);
		DIO_WritePin(Seg_E, Sig_OFF);
		DIO_WritePin(Seg_F, Sig_OFF);
		DIO_WritePin(Seg_G, Sig_OFF);
		DIO_WritePin(Dec_A, Sig_OFF);
		DIO_WritePin(Dec_B, Sig_OFF);
		DIO_WritePin(Dec_C, Sig_OFF);
		DIO_WritePin(Dec_D, Sig_OFF);

		DIO_WritePin(Seven_Seg_COMMON_1, Com_OFF);
		DIO_WritePin(Seven_Seg_COMMON_2, Com_OFF);
		DIO_WritePin(Seven_Seg_COMMON_3, Com_OFF);
		DIO_WritePin(Seven_Seg_COMMON_4, Com_OFF);
		DIO_WritePin(Seven_Seg_COMMON_5, Com_OFF);
		DIO_WritePin(Seven_Seg_COMMON_6, Com_OFF);
		DIO_WritePin(Seven_Seg_COMMON_7, Com_OFF);
		DIO_WritePin(Seven_Seg_COMMON_8, Com_OFF);

		return OK;
}








