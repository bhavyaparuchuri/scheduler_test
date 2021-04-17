#include "../../inc/database/write_to_db.h"
#include "../../inc/database/db_utils.h"
#include <stdio.h>

typedef unsigned int		UWORD16;
typedef signed int		SWORD16;
#define FALSE 0

#define TRUE 1


UWORD16 Result = FALSE;

UWORD16  write_type1(e_db_types db_type, unsigned int Id, unsigned int Value)
{
//	printf("%s : ptr_default_ext_db [db_type] = %d %d",__func__,ptr_default_ext_db[db_type],db_type);
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
	//	 printf("%s : ptr_dbtable2[db_type] = %d %d",__func__,ptr_dbtable2[db_type],db_type);
			Result = TRUE;
		}
		printf("%s Result1 = %d\n",__func__,Result);
		return Result;
	}

}
UWORD16 write_type2(e_db_ext_types db_type, unsigned int Id, unsigned int Value)
{
//	printf("%s : ptr_default_ext_db [db_type] = %ls %d",__func__,ptr_default_ext_db[db_type],db_type);
	if( db_type >= 0 && db_type < end_of_db_types_table)
	{
		if(Id < ptr_default_ext_db[db_type]->db_size)
		{
			if (ptr_default_ext_db[db_type]->ptr_eeprom_ext_db->issigned == 1)
			{
				if ((SWORD16)Value > (SWORD16)ptr_default_ext_db[db_type]->ptr_eeprom_ext_db->c_eeprom_db.max)
				{
					Value = ptr_default_ext_db[db_type]->ptr_eeprom_ext_db->c_eeprom_db.max;
					Result = FALSE;
				}
				else if ((SWORD16)Value < (SWORD16)ptr_default_ext_db[db_type]->ptr_eeprom_ext_db->c_eeprom_db.min)
				{
					Value = ptr_default_ext_db[db_type]->ptr_eeprom_ext_db->c_eeprom_db.min;
					Result = FALSE;
				}
			}
		}
		else	  	
		{
			if (Value > ptr_default_ext_db[db_type]->ptr_eeprom_ext_db->c_eeprom_db.max)
			{
				Value = ptr_default_ext_db[db_type]->ptr_eeprom_ext_db->c_eeprom_db.max;
				Result = FALSE;
			}
			else if (Value < ptr_default_ext_db[db_type]->ptr_eeprom_ext_db->c_eeprom_db.min)
			{
				Value = ptr_default_ext_db[db_type]->ptr_eeprom_ext_db->c_eeprom_db.max; 
				Result = FALSE;
			}
		}
		 ptr_dbtable2[db_type][Id] = (UWORD16)Value;	
	//	 printf("%s : ptr_dbtable2[db_type] = %ls %d",__func__,ptr_dbtable2[db_type],db_type);
		Result = TRUE;
	}
		 printf("%s Result2= %d\n",__func__,Result);
		return Result;
}

int write_to_db(unsigned int db_type,unsigned int Id, unsigned int Value)
{
	if(db_type == COMPUTE_DB || db_type == POWERSUPPLY_DB)
	{
		printf("%s db_type_from_writetype2 : %d\n",__func__,db_type);
		Result = write_type2(db_type,Id,Value);
	}
	else if(db_type == CONFIG_DB || db_type == CONTROL_DB || db_type == RTC_DB || db_type == USB_DB || db_type == VERSION_DB || db_type == TREND_DB)
	{
		printf("%s db_type_from_writetype1 : %d\n",__func__,db_type);
		Result = write_type1(db_type,Id,Value);
	}
	printf("%s Result3 = %d\n",__func__,Result);		
	return Result;
}
