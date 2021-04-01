#include <stdio.h>
#include "../inc/main.h"
#include "../inc/database/control_db.h"
#include "../inc/database/event_db.h"
#include "../inc/database/config_db.h"


int INHIB_DETECTED; // should be read from inhibit key press event

void SCHED_Setup_Main();
void SCHED_Ventilation_Main();

int main()
{
	// if  ( (INHIB_DETECTED == FALSE) 
	// 	&& (EEP_DB_Config[VENTIL_REQ_U16] == FALSE) 
	// 	&& (EEP_DB_Config[ADJUST_KEYLOCK_U16] == FALSE) )
	// {
	// 	DB_EventMngt(EVENT_MAINTENANCE_MENU_ACCESS);
	// 	SETUP_HMI_Start();
	// 	DB_ControlWrite(MAINTENANCE_MODE_U16, TRUE);
	// 	while (1)
	// 	{
	// 		SCHED_Setup_Main();
	// 	}
	// }
	// // if the NAVIG (page) key is pressed
	// else if ( (KEY_Touch_Detection(KEY_CODE_NAVIG) == TRUE)
	// 	&& (EEP_DB_Config[VENTIL_REQ_U16] == FALSE) )
	// {
	// 	DB_EventMngt(EVENT_CIRCUIT_CHECK_MENU_ACCESS);
	// 	CIRCUIT_CHECK_HMI_Start();
	// 	DB_ControlWrite(CIRCUIT_CHECK_MODE_U16, TRUE);
	// 	while (1)
	// 	{
	// 		SCHED_Setup_Main();
	// 	}
	// }

	// else
	// 	/*%C Else, a specific "ventilation" HMI function, and a specific "ventilation"*/
	// 	/*%C Scheduler are launched.	*/

	// {
	// 	VENTILATION_HMI_Start();
	// 	while (1)

	// 	{
	// 		SCHED_Ventilation_Main();
	// 	}
	// }
}
