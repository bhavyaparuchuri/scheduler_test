#ifndef READ_FROM_DB_H_
#define READ_FROM_DB_H_
#include "db_utils.h"
extern unsigned int *ptr_dbtable[end_of_db_types_table];
unsigned int read_from_db(e_db_types db_type, unsigned int id);

#endif // READ_FROM_DB_
