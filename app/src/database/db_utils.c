#include "../../inc/database/db_utils.h"

// ptr_default_db[CONFIG_DB] = & default_config_db;
// ptr_default_db[CONTROL_DB] = & default_control_db;

// ptr_dbtable[CONFIG_DB] = config_db[0];
// ptr_dbtable[CONTROL_DB] = control_db[];
unsigned int *ptr_dbtable[end_of_db_types_table] = {
  config_db,
  control_db  
};

t_DEFAULT_DB *ptr_default_db[end_of_db_types_table] = {
&default_config_db,
&default_control_db 
    
};