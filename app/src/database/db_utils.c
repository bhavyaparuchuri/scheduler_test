#include "../../inc/database/db_utils.h"
unsigned int* ptr_dbtable[end_of_db_types_table];
ptr_dbtable[CONFIG_DB] = config_db;
ptr_dbtable[CONTROL_DB] = control_db;
