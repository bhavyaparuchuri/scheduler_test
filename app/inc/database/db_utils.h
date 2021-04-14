#ifndef DB_UTILS_H_
#define DB_UTILS_H_

#include "control_db.h"
#include "config_db.h"
#include "compute_db.h"
#include "powersupply_db.h"
#include "rtc_db.h"
#include "usb_db.h"
#include "version_db.h"
#include "trend_db.h"

typedef enum {
	CONFIG_DB,
	CONTROL_DB,
	RTC_DB,
	USB_DB,
	VERSION_DB,
	TREND_DB,
	end_of_db_types_table
} e_db_types;

typedef enum {
	COMPUTE_DB,
	POWERSUPPLY_DB,
	end_of_db_ext_types
} e_db_ext_types;

typedef struct {
	unsigned int min;
	unsigned int max;
	unsigned int step;
	unsigned int defaultvalue;
} t_EEPROM_DB;

typedef struct {
	/* data */
	t_EEPROM_DB c_eeprom_db;
	unsigned int issigned;
} t_DEFAULT_EXTND_DB;


typedef struct {
	t_EEPROM_DB *ptr_eeprom_db;
	unsigned int db_size;
} t_DEFAULT_DB;

typedef struct {
	/* data */
	t_DEFAULT_EXTND_DB *ptr_eeprom_ext_db;
	unsigned int db_size;
} t_DEFAULT_EXT_DB;

extern unsigned int config_db[end_of_db_config_table];
extern unsigned int control_db[end_of_db_control_table];
extern unsigned int compute_db[end_of_db_compute_table];
extern unsigned int powersupply_db[end_of_db_powersupply_table];
extern unsigned int rtc_db[end_of_db_rtc_table];
extern unsigned int usb_db[end_of_db_usb_table];
extern unsigned int version_db[end_of_db_version_table];
extern unsigned int trend_db[end_of_db_trend_table];
extern t_DEFAULT_DB default_control_db;
extern t_DEFAULT_DB default_config_db;
extern t_DEFAULT_DB default_rtc_db;
extern t_DEFAULT_DB default_usb_db;
extern t_DEFAULT_DB default_version_db;
extern t_DEFAULT_DB default_trend_db;
extern t_DEFAULT_EXT_DB default_compute_db;
extern t_DEFAULT_EXT_DB default_powersupply_db;

#endif // DB_UTILS_H_
