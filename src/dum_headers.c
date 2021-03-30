#include "main.h"

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
UWORD16 KEY_Touch_Detection()
{
	return 0;
}


/************************************/
/*from database*/
void DB_ControlWrite()
{

}

void DB_EventMngt ()
{

}
