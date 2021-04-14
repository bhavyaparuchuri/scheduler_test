#include "../../inc/database/rtc_db.h"
#include "../../inc/database/db_utils.h"
t_EEPROM_DB eeprom_rtc_db[end_of_db_rtc_table]=
{
	{NONE, NONE, NONE, NONE},
        {NONE, NONE, NONE, NONE},
        {NONE, NONE, NONE, NONE},
        {NONE, NONE, NONE, NONE},
        {NONE, NONE, NONE, NONE},
        {NONE, NONE, NONE, NONE},
        tADJUST_RTC_REQ,
        tADJUST_RTC_SECOND,
        tADJUST_RTC_MINUTE,
        tADJUST_RTC_HOUR,
        tADJUST_RTC_DAY,
        tADJUST_RTC_MONTH,
        tADJUST_RTC_YEAR

};
t_DEFAULT_DB default_rtc_db = {
    eeprom_rtc_db,
    end_of_db_rtc_table
};

unsigned int rtc_db[end_of_db_rtc_table];

