#include "../../inc/database/measurement_db.h"
#include "../../inc/database/db_utils.h"

t_EEPROM_DB eeprom_measurement_db[end_of_db_measurement_table]=
{
	sPATIENT_PRESSURE_CAN,
        sPATIENT_PRESSURE_PROXI,
        sVALVE_PRESSURE_CAN,
        sQI_CAN,
        sQE_CAN,
        sINFO_SUPPLY_CAN,
        sABS_PRESSURE_CAN,
        sO2_PRESSURE_CAN,
        sQO2_CAN
};

t_DEFAULT_DB default_measurement_db = {
    eeprom_measurement_db,
    end_of_db_measurement_table
};

unsigned int measurement_db[end_of_db_measurement_table];

