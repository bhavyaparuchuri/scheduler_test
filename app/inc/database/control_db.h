#ifndef CONTROL_DB_H_ 
#define CONTROL_DB_H_

//#include "db_utils.h"
typedef unsigned int    UWORD16;
typedef unsigned long   UWORD32;

typedef enum
{
	ORIGINAL = 0,
	COMPLIANT
} e_Alarm_Tone;

typedef enum 
{
	VOL = 0,
	PRES,
	PSVT,
	VSIMV,
	PSIMV,
	CPAP,
  	nb_of_mode
} e_MODE_TYPES;

typedef enum
{
	VEN_EXHALATION = 251,
	VEN_INSPIRATION_CONTROLED,
	VEN_INSPIRATION_TRIGGERED,
	VEN_VENTIL_DISABLE
} e_VentilState;

typedef enum 
{
	NONE = 0,
	AC,
	DC,
	BATTERY
} e_SupplyInfo;  

/* Calibration States */

typedef enum
{
	NO_CALIB = 0,
	SEGMENT_1,
	SEGMENT_2,
	SEGMENT_3,
	SEGMENT_4,
	SEGMENT_5,
	SEGMENT_6,
	SEGMENT_7,
	SEGMENT_8,
	TEST_LIMITES_REQUEST,
	TEST_LIMITES_OK,
	TEST_LIMITES_FALSE,
	AUTOCALIB_SEG_1,
	AUTOCALIB_SEG_2,
	AUTOCALIB_SEG_3,
	AUTOCALIB_SEG_4,
	AUTOCALIB_SEG_5,
	AUTOCALIB_SEG_6,
	AUTOCALIB_SEG_7,
	AUTOCALIB_SEG_8,
	END_AUTOCALIB
} e_CalibrationCommand;
/* Control States */

typedef enum 
{
	NO_CONTROL = 0,
	CONTROL_SPEED,
	CONTROL_PRESSURE,
	CONTROL_PRESSURE_VALVE,
	CONTROL_PRESSURE_MAINT,
	CONTROL_FLOW,
	CONTROL_FLOW_EXH,
	CONTROL_FLOW_O2,
	CONTROL_FLOW_O2_MANUEL,
	CONTROL_PRESSURE_O2
} e_VEN_ControllerType;

/* SIMV States */

typedef enum
{
	CAV_Cycle = 0,
	CV_Cycle,
	PSV_Cycle,
	CAP_Cycle,
	CP_Cycle
} e_VEN_SIMVCycle;

/******************************************************************************/
/*                     ENUM DECLARATION				                         	*/
/******************************************************************************/

/*DB_Control*/
#define tVENTIL_AUTHORIZATION                                           {NONE,NONE,NONE,FALSE}
#define tCURRENT_MODE                                                               {NONE,NONE,NONE,PRES}
#define tCHANGE_MODE                                                                        {NONE,NONE,NONE,FALSE}
#define tVENTIL_STATE                                                               {NONE,NONE,NONE,VEN_VENTIL_DISABLE}
#define tSIMV_CYCLES                                                                        {NONE,NONE,NONE,CAV_Cycle}
#define tCALIB_PATIENT_PRESS_REQ                                    {NONE,NONE,NONE,NO_CALIB}
#define tCALIB_FLOW_INSP_REQ                                                {NONE,NONE,NONE,NO_CALIB}
#define tCALIB_FLOW_EXH_REQ                                         {NONE,NONE,NONE,NO_CALIB}
#define tCALIB_VALVE_PRESS_REQ                                      {NONE,NONE,NONE,NO_CALIB}
#define tCALIB_FAS_VALVE_REQ_U16                            {NONE,NONE,NONE,NO_CALIB}
#define tINHIBIT_BUZZER_REQ                                         {NONE,NONE,NONE,FALSE}
#define tINHIBITION_AUTHORIZATION                           {NONE,NONE,NONE,FALSE}
#define tALARM_CANCEL_REQ                                                   {NONE,NONE,NONE,FALSE}
#define tBUZZER_CDE                                                                 {NONE,NONE,NONE,FALSE}
#define tCALIB_ADJUST_CMD                                                   {0,50000,10,0}
#define tMAINT_CONTROL_SET_POINT                                    {NONE,NONE,NONE,0}
#define tMAINT_CONTROL_TYPE                                         {NONE,NONE,NONE,NO_CONTROL}
#define tSUPPLY_AC_DC_BAT                                                   {NONE,NONE,NONE,AC}
#define tDISPLAY_BATTERY                                                    {NONE,NONE,NONE,FALSE}
#define tCURRENT_PATIENT_COUNTER_HOUR                       {NONE,NONE,NONE,0}
#define tCURRENT_PATIENT_COUNTER_MIN                        {NONE,NONE,NONE,0}
#define tCURRENT_MACHINE_COUNTER_HOUR                       {NONE,NONE,NONE,0}
#define tCURRENT_MACHINE_COUNTER_MIN                        {NONE,NONE,NONE,0}
#define tCONTROL_BUZZER                                                             {NONE,NONE,NONE,FALSE}
#define tVALVE_DETECTED                                                             {NONE,NONE,NONE,FALSE}
#define tAC_SELECTED                                                                        {NONE,NONE,NONE,FALSE}
#define tDC_SELECTED                                                                        {NONE,NONE,NONE,FALSE}
#define tREMOTE_STATE                                                               {NONE,NONE,NONE,FALSE}
#define tPROXI_DETECTED                                                             {NONE,NONE,NONE,FALSE}
#define tALARM_DETECTED                                                             {NONE,NONE,NONE,FALSE}
#define tNEW_ALARM_HP_DETECTED                                      {NONE,NONE,NONE,FALSE}
#define tStart_Limit_Setting                        {NONE,NONE,NONE,FALSE} // Marqueur
#define tLIMIT_LOW_PIP                                                         {NONE,NONE,NONE,FALSE}
#define tLIMIT_HIGH_PIP                                                   {NONE,NONE,NONE,FALSE}
#define tLIMIT_LOW_VM                                                          {NONE,NONE,NONE,FALSE}
#define tLIMIT_HIGH_VM                                                         {NONE,NONE,NONE,FALSE}
#define tLIMIT_PEEP                                                            {NONE,NONE,NONE,FALSE}
#define tLIMIT_VOL_CONTROL                                        {NONE,NONE,NONE,FALSE}
#define tLIMIT_TI_CONTROL                                              {NONE,NONE,NONE,FALSE}
#define tLIMIT_CONTROL_R                                               {NONE,NONE,NONE,FALSE}
#define tLIMIT_P_CONTROL                                               {NONE,NONE,NONE,FALSE}
#define tLIMIT_PI_U16                                                          {NONE,NONE,NONE,FALSE}
#define tLIMIT_LOW_VTI                                                 {NONE,NONE,NONE,FALSE}
#define tLIMIT_HIGH_VTI                                                {NONE,NONE,NONE,FALSE}
#define tLIMIT_LOW_VTE                                                 {NONE,NONE,NONE,FALSE}
#define tLIMIT_HIGH_VTE                                                {NONE,NONE,NONE,FALSE}
#define tLIMIT_P_SUPPORT                                               {NONE,NONE,NONE,FALSE}
#define tLIMIT_TI_MIN                                                  {NONE,NONE,NONE,FALSE}
#define tLIMIT_TI_MAX                                                  {NONE,NONE,NONE,FALSE}
#define tLIMIT_SPO2_MINI                                               {NONE,NONE,NONE,FALSE}
#define tLIMIT_SPO2_MAXI                                               {NONE,NONE,NONE,FALSE}
#define tLIMIT_TARGET_VT                                               {NONE,NONE,NONE,FALSE}
#define tLIMIT_APNEA                                                        {NONE,NONE,NONE,FALSE}
#define tLIMIT_HIGH_FIO2                                                    {NONE,NONE,NONE,FALSE}
#define tLIMIT_LOW_FIO2                                                     {NONE,NONE,NONE,FALSE}
#define tLIMIT_SPO2                                                         {NONE,NONE,NONE,FALSE}
#define tLIMIT_BACKUP_R                                                     {NONE,NONE,NONE,FALSE}
#define tLIMIT_INSP_SENS                                            {NONE,NONE,NONE,FALSE}
#define tLIMIT_SIGH                                                         {NONE,NONE,NONE,FALSE}
#define tLIMIT_PMAX                                                         {NONE,NONE,NONE,FALSE}
#define tEnd_Limit_Setting                   {NONE,NONE,NONE,FALSE} // Marqueur
#define tUNCANCELL_CMD                       {NONE,NONE,NONE,FALSE}
#define tFAILURE_BUS                         {NONE,NONE,NONE,FALSE}
#define tKEYBOARD_ANOMALIE                   {NONE,NONE,NONE,FALSE}
#define tVALIDATION_BIP                             {0,3,1,0}
#define tBIP_RUNNING                                        {NONE,NONE,NONE,FALSE}
#define tMAINTENANCE_MODE                          {NONE,NONE,NONE,FALSE}
#define tCALIBRATION_MODE                          {NONE,NONE,NONE,FALSE}
#define tTEST_BUZ_CARD                                                              {NONE,NONE,NONE,FALSE}
#define tTEST_BUZ_SEC                                                               {NONE,NONE,NONE,FALSE}
#define tTEST_VOLUME                                                                        {NONE,NONE,NONE,FALSE}
#define tCANCEL_ALARM_ASKED                                         {NONE,NONE,NONE,FALSE}
#define tKEY_EVENT                                                                  {NONE,NONE,NONE,FALSE}
#define tBACKLIGHT_OFF                                                              {NONE,NONE,NONE,FALSE}
#define tHIGH_PRESSURE_LED_REMINDER                         {NONE,NONE,NONE,FALSE}
#define tRECORD_SETTINGS_USB_U16                                    {FALSE,TRUE,1,TRUE}
#define tAPPLY_SETTINGS_USB_U16                                     {FALSE,TRUE,1,TRUE}
#define tERASE_KEY_USB_U16                                                  {FALSE,TRUE,1,TRUE}
#define tRECORD_TIME_TENDANCE_U16                           {1,48,1,1}
#define tERROR_SPO2_SENSOR_DETECTED                         {NONE,NONE,NONE,FALSE}
#define tDETECTED_FIO2_SENSOR                                               {NONE,NONE,NONE,FALSE}
#define tCALIBRATED_FIO2_SENSOR                                     {NONE,NONE,NONE,FALSE}
#define tCALIB_ADJUST_VANNE_FIO2_CMD                        {0,2670,10,10}
#define tCALIB_FIO2_REQ                                                             {NONE,NONE,NONE,FALSE}
#define tCALIB_FLOW_O2_REQ                                                  {NONE,NONE,NONE,FALSE}
#define tMEMO_CMD_VANNE_FIO2_TO_CALIB                       {NONE,NONE,NONE,FALSE}
#define tCALIB_PRESS_O2_REQ                                         {NONE,NONE,NONE,FALSE}
#define tFLOW_SAT_FLAG                                                              {NONE,NONE,NONE,FALSE}
#define tHIGH_PRESSURE_DETECTED                                     {NONE,NONE,NONE,FALSE}
#define tHIGH_PRESSURE_EXHALATION_DETECTED  {NONE,NONE,NONE,FALSE}
#define tHIGH_PRESSURE_DETECT_WINDOW            {NONE,NONE,NONE,FALSE}
#define tHIGH_PRESSURE_DETECTED_PRESSURE_MODE                               {NONE,NONE,NONE,FALSE}
#define tHIGH_PRESSURE_EXHALATION_DETECTED_PRESSURE_MODE {NONE,NONE,NONE,FALSE}
#define tFIO2_100_ACTIVE                                                    {NONE,NONE,NONE,FALSE}
#define tLOAD_USB_SETTINGS                                                  {NONE,NONE,NONE,FALSE}
#define tCOM_READY                                                                  {NONE,NONE,NONE,FALSE}
#define tSTART_MONITORING                                                   {NONE,NONE,NONE,FALSE}
#define tSIMV_PSV_CYCLE_U16                                         {NONE,NONE,NONE,FALSE}
#define tBLOC_EXPI_DETECTED                                         {NONE,NONE,NONE,FALSE}
#define tADJUSTMENT_IN_PROGRESS_U16                         {NONE,NONE,NONE,FALSE}
#define tVALVE_DETECT_IN_PROGRESS_U16                       {NONE,NONE,NONE,FALSE}
#define tEXHAL_FLOW_USE_U16                                         {NONE,NONE,NONE,FALSE}
#define tFLAT_INT_U16                           {NONE,NONE,NONE,FALSE}
#define tFLAT_PROXI_U16                         {NONE,NONE,NONE,FALSE}
#define tVALVE_O2_CMD_U16                                   {NONE,NONE,NONE,FALSE}
#define tCPAP_TRIG_I                                                        {NONE,NONE,NONE,FALSE}
#define tCPAP_TRIG_E                                                        {NONE,NONE,NONE,FALSE}
#define tCONTROLER_TYPE_U16                     {NONE,NONE,NONE,FALSE}
#define tVTI_DISPLAY_DELAY_U16                  {FALSE,TRUE,1,FALSE}
#define tVOLUNTARY_STOP_U16                                         {NONE,NONE,NONE,FALSE}
#define tSOUND_TYPE_SELECT_U16                                  {ORIGINAL,COMPLIANT,1,COMPLIANT}
#define tSIMV_CONTROLLED_INSP_U16                                           {NONE,NONE,NONE,FALSE}
#define tEND_OF_OPERATION_U16                                               {NONE,NONE,NONE,FALSE}




	/* Base CONTROL	  */
	typedef enum
	{
		VENTIL_AUTHORIZATION_U16 = 0,
		CURRENT_MODE_U16,
		CHANGE_MODE_U16,
		VENTIL_STATE_U16,
		SIMV_CYCLES_U16,
		CALIB_PATIENT_PRESS_REQ_U16,
		CALIB_FLOW_INSP_REQ_U16,
		CALIB_FLOW_EXH_REQ_U16,
		CALIB_VALVE_PRESS_REQ_U16,
		CALIB_FAS_VALVE_REQ_U16,
		INHIBITED_BUZZER_U16,
		INHIBITION_AUTHORIZATION_U16,
		CANCELLED_ALARM_U16,
		BUZZER_CMD_U16,
		CALIB_ADJUST_CMD_U16,
		SETUP_CONTROL_SET_POINT_U16,
		SETUP_CONTROL_TYPE_U16,
		SUPPLY_AC_DC_BAT_U16,
		DISPLAY_BATTERY_U16,
		CURRENT_PATIENT_COUNTER_HOUR_U16,
		CURRENT_PATIENT_COUNTER_MIN_U16,
		CURRENT_MACHINE_COUNTER_HOUR_U16,
		CURRENT_MACHINE_COUNTER_MIN_U16,
		CONTROL_BUZZER_U16,
		VALVE_DETECTED_U16,
		AC_SELECTED_U16,
		DC_SELECTED_U16,
		REMOTE_STATE_U16,
		PROXI_DETECTED_U16,
		ALARM_DETECTED_U16,
		NEW_ALARM_HP_DETECTED_U16,
		Start_Limit_Setting,
		LIMIT_LOW_PIP_U16,
		LIMIT_HIGH_PIP_U16,
		LIMIT_PEEP_U16,
		LIMIT_VOL_CONTROL_U16,
		LIMIT_TI_CONTROL_U16,
		LIMIT_CONTROL_R_U16,
		LIMIT_PI_U16,
		LIMIT_LOW_VTI_U16,
		LIMIT_HIGH_VTI_U16,
		LIMIT_LOW_VTE_U16,
		LIMIT_HIGH_VTE_U16,
		LIMIT_P_SUPPORT_U16,
		LIMIT_TI_MIN_U16,
		LIMIT_TI_MAX_U16,
		LIMIT_SPO2_MINI_U16,
		LIMIT_SPO2_MAXI_U16,
		LIMIT_INSP_SENS_U16,
		LIMIT_SIGH_U16,
		LIMIT_TARGET_VT_U16,
		LIMIT_APNEA_U16,
		LIMIT_HIGH_FIO2,
		LIMIT_LOW_FIO2,
		LIMIT_SPO2,
		LIMIT_BACKUP_R_U16,
		LIMIT_PMAX_U16,
		End_Limit_Setting,
		UNCANCEL_CMD_U16,
		SUPPLY_BUS_FAILURE_U16,
		KEYBOARD_ANOMALIE_U16,
		VALIDATION_BIP_U16,
		BIP_RUNNING_U16,
		MAINTENANCE_MODE_U16,
		CALIBRATION_MODE_U16,
		TEST_BUZ_CARD_U16,
		TEST_BUZ_SEC_U16,
		TEST_VOLUME_U16,
		CANCEL_ALARM_ASKED,
		KEY_EVENT_U16,
		BACKLIGHT_OFF_U16,
		HIGH_PRESSURE_LED_REMINDER_U16,
		RECORD_SETTINGS_USB_U16,
		APPLY_SETTINGS_USB_U16,
		ERASE_KEY_USB_U16,
		RECORD_TIME_TENDANCE_U16,
		ERROR_SPO2_SENSOR_DETECTED,
		DETECTED_FIO2_SENSOR,
		CALIBRATED_FIO2_SENSOR,
		CALIB_ADJUST_VANNE_FIO2_CMD,
		CALIB_FIO2_REQ_U16,
		CALIB_FLOW_O2_REQ_U16,
		MEMO_CMD_VANNE_FIO2_TO_CALIB,
		CALIB_PRESS_O2_REQ_U16,
		FLOW_SAT_FLAG_U16,
		HIGH_PRESSURE_DETECTED_U16,
		HIGH_PRESSURE_EXHALATION_DETECTED_U16,
		HIGH_PRESSURE_FILTER_WINDOW_U16,
		FIO2_100_ACTIVE,
		LOAD_USB_SETTINGS_U16,
		COM_READY_U16,
		START_MONITORING_U16,
		SIMV_PSV_CYCLE_U16,
		BLOC_EXPI_DETECTED_U16,
		ADJUSTMENT_IN_PROGRESS_U16,
		VALVE_DETECT_IN_PROGRESS_U16,
		EXHAL_FLOW_USE_U16,
		FLAT_INT_U16,  
		FLAT_PROXI_U16,
		VALVE_O2_CMD_U16,
		CPAP_TRIG_I_U16,
		CPAP_TRIG_E_U16,
		CONTROLER_TYPE_U16,
		VTI_DISPLAY_DELAY_U16,
		VOLUNTARY_STOP_U16,
		SIMV_CONTROLLED_INSP_U16,
		END_OF_OPERATION_U16,
		CIRCUIT_CHECK_MODE_U16,
		end_of_db_control_table,
		LIMIT_LOW_VM_U16,	// temp added by manoj
		LIMIT_HIGH_VM_U16,	// temp added by manoj
		HIGH_PRESSURE_DETECTED_PRESSURE_MODE_U16, //temp added by manoj
		HIGH_PRESSURE_EXHALATION_DETECTED_PRESSURE_MODE_U16
	} e_DB_CONTROL;



	/******************************************************************************/
	/*                     CONSTANT DECLARATION			                           */
	/******************************************************************************/
	/* Base Control array */

unsigned int control_db[end_of_db_control_table];

#endif  //  CONTROL_DB_H_
