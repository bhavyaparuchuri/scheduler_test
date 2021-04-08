#ifndef WRITE_TO_DB_H_
#define WRITE_TO_DB_H_
#include "db_utils.h"
#include<stdint.h>

extern t_DEFAULT_DB *ptr_default_db;
extern unsigned int *ptr_dbtable[end_of_db_types_table];
int write_to_db(e_db_types db_type, unsigned int id, unsigned int value);

#endif  // WRITE_TO_DB_H_
