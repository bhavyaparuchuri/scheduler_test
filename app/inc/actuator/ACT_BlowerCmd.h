/******************************************************************************/
/*%I Input Parameter : NONE                                                   */
/*%IO Input/Output : NONE                                                     */
/*%O Output Parameter : NONE                                                  */
/******************************************************************************/

#ifndef ACT_BLOWERCMD_H
#define ACT_BLOWERCMD_H


/************************************************************************/
/*                   EXTERNAL FUNCTION DECLARATION	                     */
/************************************************************************/
/* Access to the control read value */

//#include "../GENERAL/typedef.h"
//#include "../GENERAL/enum.h"
#include "../database/write_to_db.h"
#include "../database/read_from_db.h"
#include "../database/config_db.h"
#include "../database/compute_db.h"


typedef   signed int    SWORD16;
typedef   signed long   SWORD32;
typedef unsigned char  	UBYTE;

void ACT_BlowerCmd(SWORD32 Kp,
                   SWORD32 Ki,
                   UWORD16 Consigne,
                   e_VEN_ControllerType TypeRegul);
unsigned int read_from_db(e_db_types db_type, unsigned int id);
int write_to_db(e_db_types db_type,unsigned int Id, unsigned int Value);

//extern UWORD16 DB_AlarmStatusRead(e_DB_ALARMS Id);
extern void ACT_BrakePower(UBYTE percentage);
extern SWORD32 saturation(SWORD32 Value, SWORD32 Min,SWORD32 Max); 
#endif
