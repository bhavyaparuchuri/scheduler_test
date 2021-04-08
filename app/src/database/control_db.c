#include "../../inc/database/control_db.h"
#include "../../inc/database/db_utils.h"

//unsigned int control_db[end_of_db_control_table];

/********************************************************************
 * created a eeprom_control_db in ram
 * need to copy data from eeprom during startup phase
 *******************************************************************/

t_EEPROM_DB eeprom_control_db[end_of_db_control_table]=
{
    tVENTIL_AUTHORIZATION,
    tCURRENT_MODE,
    tCHANGE_MODE,
    tVENTIL_STATE,
    tSIMV_CYCLES,
    tCALIB_PATIENT_PRESS_REQ,
    tCALIB_FLOW_INSP_REQ,
    tCALIB_FLOW_EXH_REQ,
    tCALIB_VALVE_PRESS_REQ,
    tCALIB_FAS_VALVE_REQ_U16,
    tINHIBIT_BUZZER_REQ,
    tINHIBITION_AUTHORIZATION,
    tALARM_CANCEL_REQ,
    tBUZZER_CDE,
    tCALIB_ADJUST_CMD,
    tMAINT_CONTROL_SET_POINT,
    tMAINT_CONTROL_TYPE,
    tSUPPLY_AC_DC_BAT,
    tDISPLAY_BATTERY,
    tCURRENT_PATIENT_COUNTER_HOUR,
    tCURRENT_PATIENT_COUNTER_MIN,
    tCURRENT_MACHINE_COUNTER_HOUR,
    tCURRENT_MACHINE_COUNTER_MIN,
    tCONTROL_BUZZER,
    tVALVE_DETECTED,
    tAC_SELECTED,
    tDC_SELECTED,
    tREMOTE_STATE,
    tPROXI_DETECTED,
    tALARM_DETECTED,
    tNEW_ALARM_HP_DETECTED,
    tStart_Limit_Setting,
    tLIMIT_LOW_PIP,
    tLIMIT_HIGH_PIP,
    tLIMIT_PEEP,
    tLIMIT_VOL_CONTROL,
    tLIMIT_TI_CONTROL,
    tLIMIT_CONTROL_R,
    tLIMIT_PI_U16,
    tLIMIT_LOW_VTI,
    tLIMIT_HIGH_VTI,
    tLIMIT_LOW_VTE,
    tLIMIT_HIGH_VTE,
    tLIMIT_P_SUPPORT,
    tLIMIT_TI_MIN,
    tLIMIT_TI_MAX,
    tLIMIT_SPO2_MINI,
    tLIMIT_SPO2_MAXI,
    tLIMIT_INSP_SENS,
    tLIMIT_SIGH,
    tLIMIT_TARGET_VT,
    tLIMIT_APNEA,
    tLIMIT_HIGH_FIO2,
    tLIMIT_LOW_FIO2,
    tLIMIT_SPO2,
    tLIMIT_BACKUP_R,
    tLIMIT_PMAX,
    tEnd_Limit_Setting,
    tUNCANCELL_CMD,
    tFAILURE_BUS,
    tKEYBOARD_ANOMALIE,
    tVALIDATION_BIP,
    tBIP_RUNNING,
    tMAINTENANCE_MODE,
    tCALIBRATION_MODE,
    tTEST_BUZ_CARD,
    tTEST_BUZ_SEC,
    tTEST_VOLUME,
    tCANCEL_ALARM_ASKED,
    tKEY_EVENT,
    tBACKLIGHT_OFF,
    tHIGH_PRESSURE_LED_REMINDER,
    tRECORD_SETTINGS_USB_U16,
    tAPPLY_SETTINGS_USB_U16,
    tERASE_KEY_USB_U16,
    tRECORD_TIME_TENDANCE_U16,
    tERROR_SPO2_SENSOR_DETECTED,
    tDETECTED_FIO2_SENSOR,
    tCALIBRATED_FIO2_SENSOR,
    tCALIB_ADJUST_VANNE_FIO2_CMD,
    tCALIB_FIO2_REQ,
    tCALIB_FLOW_O2_REQ,
    tMEMO_CMD_VANNE_FIO2_TO_CALIB,
    tCALIB_PRESS_O2_REQ,
    tFLOW_SAT_FLAG,
    tHIGH_PRESSURE_DETECTED,
    tHIGH_PRESSURE_EXHALATION_DETECTED,
    tHIGH_PRESSURE_DETECT_WINDOW,
    tFIO2_100_ACTIVE,
    tLOAD_USB_SETTINGS,
    tCOM_READY,
    tSTART_MONITORING,
    tSIMV_PSV_CYCLE_U16,
    #if defined(SUPPORTAIR_M2) || defined(LEGENDAIR_XL2)
    tBLOC_EXPI_DETECTED,
    #else
    {NONE,NONE,NONE,NONE},
    #endif
    tADJUSTMENT_IN_PROGRESS_U16,
    tVALVE_DETECT_IN_PROGRESS_U16,
    tEXHAL_FLOW_USE_U16,
    tFLAT_INT_U16,
    tFLAT_PROXI_U16,
    tVALVE_O2_CMD_U16,
    tCPAP_TRIG_I,
    tCPAP_TRIG_E,
    tCONTROLER_TYPE_U16,
    tVTI_DISPLAY_DELAY_U16,
    tVOLUNTARY_STOP_U16,
    tSIMV_CONTROLLED_INSP_U16,
    tEND_OF_OPERATION_U16,

};

t_DEFAULT_DB default_control_db = {eeprom_control_db,end_of_db_control_table};
//default_control_db.ptr_eeprom_db = eeprom_control_db;
//default_control_db.db_size = end_of_db_control_table;

/* 
t_DEFAULT_DB default_control_db;
ptr_dbtable[CONTROL_DB] = control_db;
default_control_db.ptr_eeprom_db = eeprom_control_db;
default_control_db.db_size = end_of_db_control_table;
ptr_default_db[CONTROL_DB] = &default_control_db;
*/
