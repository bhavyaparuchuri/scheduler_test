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
	end_of_db_types_tables
}e_db_types;
/*
unsigned int *ptr_dbtable[end_of_db_types_tables];
ptr_dbtable[CONFIG_DB] = config_db;
ptr_dbtable[CONTROL_DB] = control_db;
ptr_dbtable[EVENTDB] = event_db;
*/
#endif // DB_UTILS_H_
