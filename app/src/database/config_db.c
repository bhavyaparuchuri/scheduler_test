#include "../../inc/database/config_db.h"
#include "../../inc/database/db_utils.h"

// create a config_db in ram
//unsigned int config_db[end_of_db_config_table];

/********************************************************************
 * created a eeprom_config_db in ram 
 * need to copy data from eeprom during startup phase
 *******************************************************************/

t_EEPROM_DB eeprom_config_db[end_of_db_config_table]=
{
    tADJUST_LANGUAGE,                   
    tADJUST_MODE,                           
    tADJUST_KEYLOCK,
    tVENTIL_REQ,                            
    tOFFSET_INSP_FLOW_1,                        
    tOFFSET_INSP_FLOW_2,                    
    tOFFSET_INSP_FLOW_3,                    
    tOFFSET_INSP_FLOW_4,                    
    tOFFSET_INSP_FLOW_5,                        
    tOFFSET_INSP_FLOW_6,                        
    tOFFSET_INSP_FLOW_7,                
    tOFFSET_INSP_FLOW_8,                        
    tOFFSET_EXH_FLOW_1,                         
    tOFFSET_EXH_FLOW_2,                     
    tOFFSET_EXH_FLOW_3,
    tOFFSET_EXH_FLOW_4,                     
    tOFFSET_EXH_FLOW_5,                     
    tOFFSET_EXH_FLOW_6,                     
    tOFFSET_EXH_FLOW_7,                 
    tOFFSET_EXH_FLOW_8,             
    tOFFSET_O2_FLOW_1,
    tOFFSET_O2_FLOW_2,
    tOFFSET_O2_FLOW_3,
    tOFFSET_O2_FLOW_4,
    tOFFSET_O2_FLOW_5,
    tOFFSET_O2_FLOW_6,
    tOFFSET_O2_FLOW_7,
    tOFFSET_PATIENT_PRESS1,
    tOFFSET_PATIENT_PRESS2,
    tOFFSET_PATIENT_PROX_PRESS1,
    tOFFSET_PATIENT_PROX_PRESS2,
    tOFFSET_PRESS_O2,
    tI_VALVE_REF_U16,
    tOFFSET_FAS_VALVE_1_U16,
    tOFFSET_FAS_VALVE_2_U16,
    tOFFSET_FAS_VALVE_3_U16,
    tOFFSET_FAS_VALVE_4_U16,
    tOFFSET_FAS_VALVE_5_U16,    
    tOFFSET_FAS_VALVE_6_U16,    
    tOFFSET_FAS_VALVE_7_U16,    
    tOFFSET_FAS_VALVE_8_U16,    
    tOFFSET_FAS_VALVE_9_U16,    
    tOFFSET_VALVE_PRESS,
    tOFFSET_VALVE_PRESS2,                                               
    tOFFSET_FIO2,
    tADJUST_BRIGHTNESS,                      
    tADJUST_BACKLIGHT,                       
    tSAVED_PATIENT_COUNTER_HOUR, //N				 
    tSAVED_PATIENT_COUNTER_MIN,              
    tSAVED_MACHINE_COUNTER_HOUR,                 
    tSAVED_MACHINE_COUNTER_MIN,
    tRETRIEVAL_EVENT_ADRESS_MSB,                     
    tRETRIEVAL_EVENT_ADRESS_LSB,
    tFLASH_MONIT_WRITE_BLOCK,
    tFLASH_MONIT_WRITE_PAGE,
    tFLASH_MONIT_WRITE_COLUMN,
    tFLASH_TREND_WRITE_BLOCK,
    tFLASH_TREND_WRITE_PAGE,
    tFLASH_TREND_WRITE_COLUMN,
    tFLASH_FIRST_PARTITION_FULL,
    tFLASH_SECOND_PARTITION_FULL,
    tSPEED_COM, 
    tRAZ_COUNTER_PAT_DATE,                   
    tRAZ_COUNTER_PAT_MONTH,                  
    tRAZ_COUNTER_PAT_YEAR,                   
    tRAZ_COUNTER_PAT_HOUR,
    tRAZ_COUNTER_PAT_MIN,                        
    tBAD_ERASE,
    tSOUND_LEVEL_SELECT,
    tPREVIOUS_SOUND_LEVEL_SELECT,
    tCURVE_DISPLAY_TYPE_MODE,
    tCURVE_MAX_PRESSURE,
    tCURVE_MAX_FLOW,
    tCURVE_MAX_VT,
    tCURVE_MAX_TIME,
    tCURVE_DRAW_MODE,
    tADJUST_CYCLING_MODE,                       
    tADJUST_KEY_TONE,
//    tWAVEFORME_DISPLAY, //manoj
    tADJUST_BAROMETRIC_CORRECTOR,
    tADJUST_FIO2,
    tADJUST_FIO2_SELECT,
    #if defined(SUPPORTAIR_M2)
    tADJUST_LOW_FIO2_M2,
    tADJUST_HIGH_FIO2_M2,
    #endif

    #if defined (LEGENDAIR_XL2)
    tADJUST_LOW_FIO2_XL2,
    tADJUST_HIGH_FIO2_XL2,
    #endif

    #if defined (LEGENDAIR_S2)
    {NONE,NONE,NONE,NONE},  
    {NONE,NONE,NONE,NONE},
    #endif
        tADJUST_LOW_SPO2,
        tADJUST_HIGH_SPO2,
        tSPO2_LOW_SELECT,
        tSPO2_HIGH_SELECT,
        tADJUST_LOW_FIO2_SELECT,
        tADJUST_HIGH_FIO2_SELECT,
        tPRESSURE_UNIT,        
        tTRIGGER_E_POSITIVE,
        tAPNEA_ALARM_ACTIVATION,
        tFLASH_MEM_MANUFACTURER,
        tFLASH_MEM_DEVICE,
        tFLASH_MEMORY_FIVE_ADDRESS_CYCLES,
        tPARAM_COMPATIBILITY,
        tIHM_LOCKED_FRAME_ID,
        tPEDIACTRIC_CIRCUIT,
        tPREVIOUS_MODE, 
        tPRESSURE_SUPPORT_RELATIVE,
        tPRESSURE_SUPPORT_CHANGED_U16,
     tVOLUNTARY_STOP_ALARM_ACTIVATION,
     tSOUND_TYPE_SELECT_U16
};
//ptr_dbtable[CONFIG_DB] = config_db;

t_DEFAULT_DB default_config_db = { eeprom_config_db,end_of_db_config_table};
//default_config_db.ptr_eeprom_db = eeprom_config_db;
//default_config_db.db_size = end_of_db_config_table;

/*
t_DEFAULT_DB default_config_db;
default_config_db.ptr_eeprom_db = eeprom_config_db;
default_config_db.db_size = end_of_db_config_table;
ptr_default_db[CONFIG_DB] = &default_config_db;
*/
