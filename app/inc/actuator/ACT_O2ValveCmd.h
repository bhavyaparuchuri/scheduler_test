
#ifndef ACT_O2VALVECMD_H
#define ACT_O2VALVECMD_H


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

void ACT_BrakePower(UBYTE percentage);
extern unsigned int read_from_db(e_db_types db_type, unsigned int id);
extern int write_to_db(e_db_types db_type,unsigned int Id, unsigned int Value);

#endif
