#include "../../inc/database/write_to_db.h"
#include "../../inc/database/db_utils.h"
int read_from_db(e_db_types db_type, unsigned int id)
{
	   return ptr_dbtable[db_type][id];
}

