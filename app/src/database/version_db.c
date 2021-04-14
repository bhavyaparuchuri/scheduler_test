#include "../../inc/database/version_db.h"
#include "../../inc/database/db_utils.h"

t_EEPROM_DB eeprom_version_db[end_of_db_version_table]=
{
    tSERIAL_NUMBER_1,                        
    tSERIAL_NUMBER_2,                        
    tSERIAL_NUMBER_3,                        
    tSERIAL_NUMBER_4,                        
    tSERIAL_NUMBER_5,                        
    tSERIAL_NUMBER_6 
};
t_DEFAULT_DB default_version_db = {
    eeprom_version_db,
    end_of_db_version_table
};

unsigned int version_db[end_of_db_version_table];

