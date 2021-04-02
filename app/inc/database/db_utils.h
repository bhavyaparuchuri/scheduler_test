#ifndef DB_UTILS_H_
#define DB_UTILS_H_

#include "control_db.h"
#include "config_db.h"
#include "event_db.h"

typedef enum {
	CONFIG_DB,
	CONTROL_DB,
	EVENT_DB,
	MEASURMENT_DB,
	end_of_db_types_table
}e_db_types;

unsigned int  *ptr_table[end_of_db_types_table];

#endif // DB_UTILS_H_
