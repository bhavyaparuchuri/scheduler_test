#include "../../inc/database/config_db.h"

// create a config_db in ram
unsigned int config_db[end_of_db_config_table];

/********************************************************************
 * created a eeprom_config_db in ram 
 * need to copy data from eeprom during startup phase
 *******************************************************************/

t_EEPROM_DB eeprom_config_db[end_of_db_config_table];


t_DEFAULT_DB default_config_db;
default_config_db.ptr_eeprom_db = eeprom_config_db;
default_config_db.db_size = end_of_db_config_table;

