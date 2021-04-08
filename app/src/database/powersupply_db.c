#include "../../inc/database/powersupply_db.h"
#include "../../inc/database/db_utils.h"

//const t_TEST_EEPROM_DB_SATURATE cDB_Saturate_POWERSUPPLY[end_of_db_powersupply_table]=
t_EEPROM_DB eeprom_powersupply_db[end_of_db_powersupply_table]=
{
    sV_BAT_U16,
    sTEMP_BAT_S16,
    sBAT_CYCLES_U16,   /* Identifier; Nb cycles */
    sBAT_STATE_U16,       /* Default...*/
    sPOWER_TYPE_U16,
    sJAUGE_MINUTE_U16,
    sJAUGE_HOUR_DISPLAY_U16,
    sJAUGE_MINUTE_DISPLAY_U16,
    sJAUGE_AVALAIBLE_U16,
    sPER_CENT_BAT_U16,
    sNO_PRESENCE_BAT_U16,
    sBAT_KO_U16,
    sCHARGE_KO_U16,
    sUNKNOWN_BATTERY_U16,
    sAMBIENT_TEMP_S16,
    sBATTERY_END_U16,
    sBATTERY_LOW_U16,
    sFIRST_DATE_DAY_U16,
    sFIRST_DATE_MONTH_U16,
    sFIRST_DATE_YEAR_U16,
    sCOOLING_FAN_FAILURE_FLAG_U16,
    sAMBIENT_TEMP_OUTOFBOUNDS_U16,
    sFAILURE_24V_FLAG_U16,
    sBAT_TEMP_OUTOFBOUNDS_U16,
    sSUPPLY_MEASURE_FAILURE_U16,
    sPOWER_SUPPLY_VERSION_NUMBER_0,
    sPOWER_SUPPLY_VERSION_NUMBER_1,
    sPOWER_SUPPLY_VERSION_NUMBER_2,
    sSUPPLIER_U16,
    sCAPACITY_U16,
    sCAPACITY_THEORICAL_U16,
    sFIRST_DATE_HOUR_U16,
    sFIRST_DATE_MINUTE_U16,
    sFIRST_DATE_SECOND_U16,
    sAGING_U16,
};

t_DEFAULT_DB default_powersupply_db = {
    eeprom_powersupply_db,
    end_of_db_powersupply_table
};


