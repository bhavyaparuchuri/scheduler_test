#include "../../inc/database/db_utils.h"

unsigned int *ptr_dbtable[end_of_db_types_table] = {
  config_db,
  control_db,
  compute_db,
  powersupply_db
};

t_DEFAULT_DB *ptr_default_db[end_of_db_types_table] = {
&default_config_db,
&default_control_db, 
&default_compute_db,
&default_powersupply_db
};
