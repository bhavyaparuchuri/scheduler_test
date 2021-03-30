
#define FALSE 0
#define TRUE 1

#define P3_6 0
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
UWORD16 KEY_Touch_Detection();

/************************************/
/*from database*/
void DB_ControlWrite();
void DB_EventMngt ();
