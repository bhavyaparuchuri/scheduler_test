#include "../../inc/database/read_from_db.h"
#include <stdio.h>


unsigned int ret;

unsigned int read_type1(e_db_types db_type, unsigned int id)
{
	        return ptr_dbtable1[db_type][id];
}

unsigned int read_type2(e_db_types db_type, unsigned int id)
{
	        return ptr_dbtable2[db_type][id];
}

unsigned int read_from_db(e_db_types db_type, unsigned int id)
{
//	printf("ptr_dbtable[db_type] %p \n",ptr_dbtable[db_type]);
//	printf(" the value : %d \n",ptr_dbtable[db_type][id]);

	if(db_type == (e_db_types)config_db || db_type == (e_db_types)control_db)
        {
                 ret = read_type1(db_type,id);
        }
        else if(db_type == (e_db_types)compute_db || db_type == (e_db_types)powersupply_db)
        {
                 ret = read_type2(db_type,id);
        }
	        printf("%s Ret = %d\n",__func__,ret);

		return ret;
}
