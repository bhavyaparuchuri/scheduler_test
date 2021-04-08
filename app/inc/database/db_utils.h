#ifndef DB_UTILS_H_
#define DB_UTILS_H_

#include "control_db.h"
#include "config_db.h"
#include "compute_db.h"
#include "powersupply_db.h"

typedef enum {
	CONFIG_DB,
	CONTROL_DB,
	COMPUTE_DB,
	POWERSUPPLY_DB,
	end_of_db_types_table
}e_db_types;

typedef struct {
	unsigned int min;
	unsigned int max;
	unsigned int step;
	unsigned int defaultvalue;
} t_EEPROM_DB;

typedef struct {
	t_EEPROM_DB *ptr_eeprom_db;
	unsigned int db_size;
} t_DEFAULT_DB;

extern unsigned int config_db[end_of_db_config_table];
extern unsigned int control_db[end_of_db_control_table];
extern unsigned int compute_db[end_of_db_compute_table];
extern unsigned int powersupply_db[end_of_db_powersupply_table];
extern t_DEFAULT_DB default_control_db;
extern t_DEFAULT_DB default_config_db;
extern t_DEFAULT_DB default_compute_db;
extern t_DEFAULT_DB default_powersupply_db;

#endif // DB_UTILS_H_
