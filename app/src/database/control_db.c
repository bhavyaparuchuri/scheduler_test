#include "../../inc/database/control_db.h"

unsigned int control_db[end_of_db_control_table];

/********************************************************************
 * created a eeprom_control_db in ram
 * need to copy data from eeprom during startup phase
 *******************************************************************/

t_EEPROM_DB eeprom_control_db[end_of_db_control_table];


t_DEFAULT_DB default_control_db;
default_control_db.ptr_eeprom_db = eeprom_control_db;
default_control_db.db_size = end_of_db_control_table;

