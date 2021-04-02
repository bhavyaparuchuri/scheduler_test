#include "../../inc/main.h"

UWORD16 MAIN_TopTimer5ms_1 = FALSE;

void SCHED_Setup_entry();

void SCHED_Setup_Main(void)
{
  if (MAIN_TopTimer5ms_1 == TRUE) 
   {
   	SCHED_Setup_entry();

	  	MAIN_TopTimer5ms_1 = FALSE;
   }
}

void SCHED_Setup_entry()
{

}
