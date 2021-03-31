#include "main.h"
#include "../inc/DB/DB_Control.h"
#include "../inc/DB/DB_Event.h"

/*HMI related*/
void CIRCUIT_CHECK_HMI_Start(void)
{

//Controller::GetInstance()->ManageKeyboardEvent(KEYBOARD_NAVIG_IT_GEN_EVENT_U16);

}

void SETUP_HMI_Start(void)
{

//Controller::GetInstance()->ManageKeyboardEvent(KEYBOARD_INHIB_IT_GEN_EVENT_ARRAY_U16);

}

void VENTILATION_HMI_Start(void)
{

//Controller::GetInstance()->ManageKeyboardEvent(KEYBOARD_IT_GEN_EVENT_U16);

}


/**********************************/
/*from System*/
UWORD16 KEY_Touch_Detection(e_SYS_KeyboardInput Touch)
{
	return 0;
}


/************************************/
/*from database*/
void DB_ControlWrite(e_DB_CONTROL Id,UWORD16 Value)
{
	if(Id < end_of_db_control_table)
	{
		DB_Control[Id] = Value;
	}
}

UWORD16 DB_ControlRead(e_DB_CONTROL Id)
{

/*%C Returns the control array element value function of Id                  	*/

	return (DB_Control[Id]);

}

void DB_EventMngt (UWORD16 EventNb)
{
	
}
