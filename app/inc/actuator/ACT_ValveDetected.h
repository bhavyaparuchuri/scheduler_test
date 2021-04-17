/******************************************************************************/

#ifndef ACT_VALVEDETECTED_H
#define ACT_VALVEDETECTED_H


/************************************************************************/
/*                    CONSTANT DECLARATION                     	*/
/************************************************************************/

#define cVALVE_DETECT_LEVEL  15U	


/************************************************************************/
/*                   EXTERNAL FUNCTION DECLARATION	                     */
/************************************************************************/
//extern UWORD16 TIM_ReadDecounterValue(e_TIM_TABLE_ID offset_table);

#include "../database/write_to_db.h"
#include "../database/read_from_db.h"
#include "../database/config_db.h"
#include "../database/compute_db.h"


typedef   signed int    SWORD16;
typedef   signed long   SWORD32;
typedef unsigned char   UBYTE;

extern unsigned int read_from_db(e_db_types db_type, unsigned int id);
extern int write_to_db(e_db_types db_type,unsigned int Id, unsigned int Value);
#endif
