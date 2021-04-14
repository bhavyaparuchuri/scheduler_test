#include "../../inc/database/usb_db.h"
#include "../../inc/database/db_utils.h"

t_EEPROM_DB eeprom_usb_db[end_of_db_usb_table]=
{
        tADJUST_USB_ERASE_KEY,
        tADJUST_USB_TRANSFER_APPLY,
        tADJUST_USB_CONTINUOUS_RECORDING,
        tADJUST_USB_MONITOR_TRANSFER,
        tADJUST_USB_MONITOR_TRANSFER_SELECT,
        tADJUST_USB_TREND_TRANSFER,
        tADJUST_USB_TREND_TRANSFER_SELECT,
        tADJUST_USB_EVENTS_TRANSFER,
        {NONE, NONE, NONE, NONE},
        {NONE, NONE, NONE, NONE},
        {NONE, NONE, NONE, NONE},
        {NONE, NONE, NONE, NONE},
        {NONE, NONE, NONE, NONE}
};

t_DEFAULT_DB default_usb_db = {
    eeprom_usb_db,
    end_of_db_usb_table
};

// create a config_db in ram
unsigned int usb_db[end_of_db_usb_table];

