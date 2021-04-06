#ifndef MAIN_H_
#define MAIN_H_
#include "database/control_db.h"
#include "database/event_db.h"
#define FALSE 0
#define TRUE 1

typedef enum
{
	KEY_NO_KEYBOARD = 0,
	KEY_CODE_MONIT_AND_DOWN,
	KEY_CODE_MONIT_AND_UP,
	KEY_CODE_UP_AND_DOWN,
	Mark_Begin_Simple_Touch,
	KEY_CODE_UP,
	KEY_CODE_DOWN,
	KEY_CODE_VALID,
	KEY_CODE_MONIT,
	KEY_CODE_STARTSTOPVENTIL,
	KEY_CODE_100_O2,
	KEY_CODE_NAVIG,
	Number_of_key
} e_SYS_KeyboardInput;

typedef unsigned int	UWORD16;
typedef unsigned long  	UWORD32;

/*Scheduler realted*/
void SCHED_Setup_Main();
void SCHED_Ventilation_Main();
/**********************************/

/*HMI related*/
void CIRCUIT_CHECK_HMI_Start(void);
void SETUP_HMI_Start(void);
void VENTILATION_HMI_Start(void);

/**********************************/
/*from System*/
UWORD16 KEY_Touch_Detection(e_SYS_KeyboardInput Touch);
/************************************/

#endif  // MAIN_H_
