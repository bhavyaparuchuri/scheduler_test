#include "../../inc/database/db_utils.h"
#include "../../inc/database/control_db.h"
#include "../../inc/database/config_db.h"
ptr_default_db[CONFIG_DB] = config_db;
ptr_default_db[CONTROL_DB] = control_db;
ptr_dbtable[CONFIG_DB] = config_db;
ptr_dbtable[CONTROL_DB] = control_db;
