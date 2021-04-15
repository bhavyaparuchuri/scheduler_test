/******************************************************************************/
/*                                INCLUDE FILES		                          	*/
/******************************************************************************/
//#include "../../inc/GENERAL/typedef.h"

typedef   signed long  	SWORD32;

/******************************************************************************/
/*                                FUNCTION BODY		                          	*/
/******************************************************************************/
SWORD32 saturation(SWORD32 Value,
                   SWORD32 Min,
                   SWORD32 Max) 
{

/* Function result declaration */
   SWORD32 Function_Result = 0;
      
   if (Value > Max)
	{
	   Function_Result = Max;   
	}
   else if (Value < Min)
	{
	   Function_Result = Min;   
	}
   else
	{
	   Function_Result = Value;
	}

   return(Function_Result);
}
