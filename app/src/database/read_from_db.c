#include "../../inc/database/read_from_db.h"
#include <stdio.h>
unsigned int read_from_db(e_db_types db_type, unsigned int id)
{
	printf("ptr_dbtable[db_type] %p \n",ptr_dbtable[db_type]);
	printf(" the value : %d \n",ptr_dbtable[db_type][id]);
	return ptr_dbtable[db_type][id];
}

