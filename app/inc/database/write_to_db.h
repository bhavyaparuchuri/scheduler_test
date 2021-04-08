#ifndef WRITE_TO_DB_H_
#define WRITE_TO_DB_H_
#include "../../inc/database/db_utils.h"

#include<stdint.h>

int write_to_db(e_db_types db_type, unsigned int id, unsigned int value);

#endif  // WRITE_TO_DB_H_
