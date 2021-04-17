/******************************************************************************/
/*                                INCLUDE FILES		                           */
/******************************************************************************/
//#ifndef _TASKING
//	#include "LH_ST10F276.h"
//	#include <intrins.h>
//#else
//	#ifdef _TESTRT
//		#include "IO_TestRT.h"
//	#else
//		#include "regf276e.h"
//	#endif
//#endif
//#include "../../inc/GENERAL/io_declare.h"
//#include "../../inc/GENERAL/typedef.h"
//#include "../../inc/GENERAL/enum.h"
//#include "../../inc/DATABASE/DB_Control.h"
//#include "../../inc/DATABASE/DB_Compute.h"
#include "../../inc/ventilation/Ventilation_Constants.h"
#include "../../inc/actuator/ACT_ValveCmd.h"


/******************************************************************************/
/*                            FUNCTION BODY                                   */
/******************************************************************************/

#define sfr unsigned int
sfr VALVE_CMD_2 = 0xFE32; //bhavya


void ACT_ValveCmd(UWORD16 Value)
{
  	UWORD16 High_Pressure_Exhalation_Detected = read_from_db(CONTROL_DB,HIGH_PRESSURE_EXHALATION_DETECTED_U16);

/*%C valve command monitoring in database */
	write_to_db(COMPUTE_DB,VALVE_COMMAND_U16, Value*10);

/*%C The adaptation of the value depends on:  */
/*%C Battery supply value */
/*%C or main supply value */

/*%C Valve command saturation to 2672 */
	if (Value > cVALVE_CMD_OFF)
	{
		Value = cVALVE_CMD_OFF;
	}
	
	if (High_Pressure_Exhalation_Detected == TRUE)
	{
		Value = cVALVE_CMD_OFF;
	}

/*%C Valve command update */
	VALVE_CMD_2 = Value;

}
