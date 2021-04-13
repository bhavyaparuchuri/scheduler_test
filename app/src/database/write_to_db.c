#include "../../inc/database/write_to_db.h"
#include "../../inc/database/db_utils.h"
#include <stdio.h>

typedef unsigned int		UWORD16;
#define FALSE 0

#define TRUE 1


UWORD16 Result = FALSE;

int write_to_db(e_db_types db_type,
			unsigned int Id, 
			unsigned int Value)
{
	if(db_type == config_db || db_type == control_db)
	{
		Result = write_type1(db_type,Id,Value);
	}
	else if(db_type == compute_db || db_type == powersupply_db)
	{
		write_type1(db_type,Id,Value);
	}
			
	return Result;
}

static void write_type1(e_db_types db_type, unsigned int Id, unsigned int Value)
{
	if( db_type >= 0 && db_type < end_of_db_types_table)
	{

		if(Id < ptr_default_db[db_type]->db_size)
		{
			if (Value > ptr_default_db[db_type]->ptr_eeprom_db->max)
			{
				Value = ptr_default_db[db_type]->ptr_eeprom_db->max;
				Result = FALSE;
			}
			else if (Value < ptr_default_db[db_type]->ptr_eeprom_db->min)
			{
				Value = ptr_default_db[db_type]->ptr_eeprom_db->min;
				Result = FALSE;
			}
			ptr_dbtable1[db_type][Id] = Value;
			Result = TRUE;
		}
	}


static void write_type2(e_db_types db_type, unsigned int Id, unsigned int Value)
{
	if( db_type >= 0 && db_type < end_of_db_types_table)
	{
		if(Id < ptr_default_ext_db[db_type]->db_size)
		{
			if (ptr_default_ext_db[db_type]->issigned == 1)
			{
				if ((SWORD16)Value > (SWORD16)ptr_default_ext_db[db_type]->c_eeprom_db.maxi)
				{
					Value = ptr_default_ext_db[db_type]->c_eeprom_db.maxi;
					Result = FALSE;
				}
			else if ((SWORD16)Value < (SWORD16)ptr_default_ext_db[db_type]->c_eeprom_db.mini)
				{
					Value = ptr_default_ext_db[db_type]->c_eeprom_db.mini;
					Result = FALSE;
				}
		}
		else	  	
		{
			if (Value > ptr_default_ext_db[db_type]->c_eeprom_db.maxi)
			{
				Value = ptr_default_ext_db[db_type]->c_eeprom_db.maxi;
				Result = FALSE;
			}
			else if (Value < ptr_default_ext_db[db_type]->c_eeprom_db.mini)
			{
				Value = ptr_default_ext_db[db_type]->c_eeprom_db.maxi; 
				Result = FALSE;
			}
		}
		
		 ptr_dbtable2[db_type][Id] = (UWORD16)Value;	
		Result = TRUE;
	}
}
