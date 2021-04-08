#include "../../inc/database/write_to_db.h"
#include "../../inc/database/db_utils.h"
#include <stdio.h>
int write_to_db(e_db_types db_type, unsigned int Id, unsigned int Value)
{
	if(db_type >= 0 && db_type < end_of_db_types_table)
	{
		//printf("%p",ptr_default_db[db_type]);
		//printf("%p",ptr_dbtable[db_type]);
		if(Id < ptr_default_db[db_type].db_size)
		{
			if (Value > ptr_default_db[db_type].ptr_eeprom_db->max) Value = ptr_default_db[db_type].ptr_eeprom_db->max;
			else if (Value < ptr_default_db[db_type].ptr_eeprom_db->min) Value = ptr_default_db[db_type].ptr_eeprom_db->min; 
			ptr_dbtable[db_type][Id] = Value;
		return 1;
		}
		else
			return -1;
	}
	else
		return -1;
}
