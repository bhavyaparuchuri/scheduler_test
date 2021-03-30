#include <stdio.h>
#include "main.h"


int INHIB_DETECTED;

UWORD16 EEP_DB_Config[];

void SCHED_Setup_Main();
void SCHED_Ventilation_Main();

int main()
{
	if  ( (INHIB_DETECTED == FALSE)
			&& (EEP_DB_Config[4] == FALSE) 
			&& (EEP_DB_Config[4] == FALSE) )
	{
		DB_EventMngt();
		SETUP_HMI_Start();
		DB_ControlWrite();
		while (1)
		{
			SCHED_Setup_Main();
		}
	}

	// if the NAVIG (page) key is pressed
	else if ( (KEY_Touch_Detection() == TRUE)
			&& (EEP_DB_Config[4] == FALSE) )
	{
		DB_EventMngt();
		CIRCUIT_CHECK_HMI_Start();
		DB_ControlWrite();
		while (1)
		{
			SCHED_Setup_Main();
		}
	}

	else
		/*%C Else, a specific "ventilation" HMI function, and a specific "ventilation"*/
		/*%C Scheduler are launched.	*/
	{

		VENTILATION_HMI_Start();
		while (1)
		{

			SCHED_Ventilation_Main();
		}
	}

	return 0;
}
