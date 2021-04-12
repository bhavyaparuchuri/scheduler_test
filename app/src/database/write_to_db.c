#include "../../inc/database/write_to_db.h"
#include "../../inc/database/db_utils.h"
#include <stdio.h>
int write_to_db(e_db_types db_type,
			unsigned int Id, 
			unsigned int Value)
{
	if( db_type >= 0 && 
		db_type < end_of_db_types_table)
	{
		
		
			
		}
		else
			return -1;
	}
	else
		return -1;
}

static void write_type1(e_db_types db_type, unsigned int Id, unsigned int Value)
{
	if(Id < ptr_default_db[db_type]->db_size)
	{
		if (Value > ptr_default_db[db_type]->ptr_eeprom_db->max)
		{
			Value = ptr_default_db[db_type]->ptr_eeprom_db->max;
		}
		else if (Value < ptr_default_db[db_type]->ptr_eeprom_db->min)
		{
			Value = ptr_default_db[db_type]->ptr_eeprom_db->min;
		}
		ptr_dbtable[db_type][Id] = Value;
	}
}


static void write_type2(e_db_types db_type, unsigned int Id, unsigned int Value)
{
	if(Id < ptr_default_ext_db[db_type]->db_size)
	{
		if (ptr_default_ext_db[db_type]->issigned == 1)
		{
			if ((SWORD16)Value > (SWORD16)ptr_default_ext_db[db_type]->c_eeprom_db.maxi)
			{
				Value = ptr_default_ext_db[db_type]->c_eeprom_db.maxi;
			}
			else if ((SWORD16)Value < (SWORD16)ptr_default_ext_db[db_type]->c_eeprom_db.mini)
			{
				Value = ptr_default_ext_db[db_type]->c_eeprom_db.mini;
			}
		}
		else	  	
		{
			if (Value > ptr_default_ext_db[db_type]->c_eeprom_db.maxi)
			{
				Value = ptr_default_ext_db[db_type]->c_eeprom_db.maxi;
			}
			else if (Value < ptr_default_ext_db[db_type]->c_eeprom_db.mini)
			{
				Value = ptr_default_ext_db[db_type]->c_eeprom_db.maxi; 
			}
		}
		
		DB_Compute[Id] = (UWORD16)Value;	
}

