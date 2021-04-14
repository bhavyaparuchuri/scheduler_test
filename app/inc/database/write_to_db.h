#ifndef WRITE_TO_DB_H_
#define WRITE_TO_DB_H_
#include "../../inc/database/db_utils.h"

#include<stdint.h>

extern t_DEFAULT_DB *ptr_default_db[end_of_db_types_table];
extern unsigned int *ptr_dbtable1[end_of_db_types_table];
extern unsigned int *ptr_dbtable2[end_of_db_ext_types];
extern t_DEFAULT_EXT_DB const *ptr_default_ext_db[end_of_db_ext_types];

int write_to_db(e_db_types db_type, unsigned int id, unsigned int value);

#endif  // WRITE_TO_DB_H_
