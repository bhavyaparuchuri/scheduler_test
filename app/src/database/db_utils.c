#include "../../inc/database/db_utils.h"

unsigned int const *ptr_dbtable1[end_of_db_types_table] = {
  config_db,
  control_db,
  
};

unsigned int const *ptr_dbtable2[end_of_db_ext_types] = {
  compute_db,
  powersupply_db
};

t_DEFAULT_DB const *ptr_default_db[end_of_db_types_table] = {
  &default_config_db,
  &default_control_db
};

t_DEFAULT_EXT_DB const *ptr_default_ext_db[end_of_db_ext_types] = {
  &default_compute_db,
  &default_powersupply_db
};

