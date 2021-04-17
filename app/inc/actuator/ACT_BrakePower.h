#ifndef ACT_BRAKEPOWER_H
#define ACT_BRAKEPOWER_H

/************************************************************************/
/*                         ENUM DECLARATION    	                			*/
/************************************************************************/


/************************************************************************/
/*                       STRUCTURE DECLARATION     	               	*/
/************************************************************************/


/************************************************************************/
/*                   EXTERNAL CONSTANT DECLARATION                     	*/
/************************************************************************/
/************************************************************************/
/*                   EXTERNAL VARIABLE DECLARATION                    	*/
/************************************************************************/


/************************************************************************/
/*                   EXTERNAL FUNCTION DECLARATION	                     */
/************************************************************************/
#include "../database/write_to_db.h"
#include "../database/read_from_db.h"
#include "../database/config_db.h"
#include "../database/compute_db.h"


typedef   signed int    SWORD16;
typedef   signed long   SWORD32;
typedef unsigned char   UBYTE;
unsigned int read_from_db(e_db_types db_type, unsigned int id);
int write_to_db(e_db_types db_type,unsigned int Id, unsigned int Value);

//extern void TIM_StartDecounter(e_TIM_TABLE_ID offset_table,UWORD16 value);	
//extern UWORD16 TIM_ReadDecounterValue(e_TIM_TABLE_ID offset_table);

#endif
