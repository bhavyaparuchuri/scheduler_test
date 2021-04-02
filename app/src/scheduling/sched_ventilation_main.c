#include "../../inc/main.h"

UWORD16 MAIN_TopTimer5ms_2 = FALSE;

void SCHED_Ventilation_entry();

void SCHED_Ventilation_Main(void)
{
   if (MAIN_TopTimer5ms_2 == TRUE) 
   {
	  	SCHED_Ventilation_entry();
	  	MAIN_TopTimer5ms_2 = FALSE;
   }
}

void SCHED_Ventilation_entry()
{

}

