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
#include "../../inc/actuator/ACT_BrakePower.h"
#include "../../inc/ventilation/Ventilation_Constants.h"

/******************************************************************************/
/*                            FUNCTION BODY                                   */
/******************************************************************************/
#define sfr unsigned int			// manoj

sfr BLOWER_CMD_1 = 0xFE30;    //from io_declare.h
int BRAKE_BLOWER_2 = 0;		//from io_declare.h


void ACT_BrakePower(UWORD16 percentage)
{
/*%C if the percentage is equal to 0, then												*/
	if (percentage == 0)
	{
/*%C  Timer 0 Stop																				*/
//		T0R = 0;			// platform specific code manoj
//		CCM0 &= 0xFF0F;		// platform specific code manoj
		BRAKE_BLOWER_2 = 1;
	}
/*%C else if the percentage is equal to 100, then										*/
	else if (percentage == 100)
	{
/*%C  Blower Stop */
		BLOWER_CMD_1 = cBLOWER_CMD_OFF;
/*%C  Timer 0 Stop																				*/
//		T0R = 0;			// platform specific code manoj
//		CCM0 &= 0xFF0F;		// platform specific code manoj
 		BRAKE_BLOWER_2 = 0;
	}
/*%C else, for a value include between 0 => 100% 										*/
	else
	{
/*%C  Blower Stop */
		BLOWER_CMD_1 = cBLOWER_CMD_OFF;
//		CCM0 &= 0xFF7F;			// platform specific code manoj
//		CCM0 |= 0x0070;			platform specific code manoj
//		CC1 = (UWORD16)(BRAKE_PERIOD + ((NB_TIMER0_VALUE*percentage)/100)); //platform specific code manoj
/*%C 	Starting of Timer 0 */
//  		T0R = 1;			// platform specific code manoj
  	}
}
