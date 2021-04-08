#ifndef CONFIG_DB_H_
#define CONFIG_DB_H_
// #include "db_utils.h"


/******************************************************************************/
/*                     ENUM DECLARATION				                         	*/
/******************************************************************************/
/* Config base */
/* Do not modify the enum order; if you add any configuration settings you must*/
/*   change the software version of the program otherwise you get EEPROM POST */
/*   errors                                                                   */
/*                                                                            */
/******************************************************************************/

//#define NONE 0xAAAA

#define FALSE 0

#define TRUE 1


#define MICRON			0x2C
#define MT29F2G08AAB	0xDA
#define MT29F2G16AAB	0xCA
#define MT29F4G08BAB	0xDC
#define MT29F4G16BAB	0xCC
#define MT29F8G08FAB	0xDC

typedef enum
{
	ERASE_OK = 0,
	BAD_TOTAL_ERASE
} e_BadEraseState;



#define tADJUST_LANGUAGE                                                        {0,18,1,3}
#define tADJUST_MODE                                                                    {0,5,1,1}
#define tADJUST_KEYLOCK                                                         {FALSE,TRUE,1,FALSE}
#define tVENTIL_REQ                                                                     {FALSE,TRUE,1,FALSE}
/******************************************************************/
/* LES VALEURS D'OFFSETS SONT DIFFERENTES ENTRE CAPTEUR QI et QE :*/
/* MECANIQUE DIFFERENTES                                                                                                                */
/*******************************************************************/
#define tOFFSET_INSP_FLOW_1                                             {160,250, NONE,215}                             
#define tOFFSET_INSP_FLOW_2                                             {175,280, NONE,229}                             
#define tOFFSET_INSP_FLOW_3                                             {215,315, NONE,268}                             
#define tOFFSET_INSP_FLOW_4                                             {200,500, NONE,315}                             
#define tOFFSET_INSP_FLOW_5                                             {370,550, NONE,459}                             
#define tOFFSET_INSP_FLOW_6                                             {465,700, NONE,581}                             
#define tOFFSET_INSP_FLOW_7                                             {560,850, NONE,706}                             
#define tOFFSET_INSP_FLOW_8                                             {650,1022,NONE,880}                     
#define tOFFSET_EXH_FLOW_1							{160,250, NONE,210}				
#define tOFFSET_EXH_FLOW_2                                                      {185,265, NONE,227}                             
#define tOFFSET_EXH_FLOW_3                                                      {215,315, NONE,275}                     
#define tOFFSET_EXH_FLOW_4                                                      {200,600, NONE,325}                     
#define tOFFSET_EXH_FLOW_5                                                      {410,620, NONE,513}                     
#define tOFFSET_EXH_FLOW_6                                                      {520,780, NONE,657}                             
#define tOFFSET_EXH_FLOW_7                                                      {600,1010,NONE,818}                             
#define tOFFSET_EXH_FLOW_8                                                      {700,1022,NONE,970}                             
#define tOFFSET_O2_FLOW_1                                                       {185,230,NONE,207}                              
#define tOFFSET_O2_FLOW_2                                                       {325,400,NONE,360}                              
#define tOFFSET_O2_FLOW_3                                                       {401,800,NONE,630}                      
#define tOFFSET_O2_FLOW_4                                                       {750,950,NONE,830}                      
#define tOFFSET_O2_FLOW_5                                                       {800,1022,NONE,960}                             
#define tOFFSET_O2_FLOW_6                                                       {0,1022,NONE,512}       // Inutilis�    
#define tOFFSET_O2_FLOW_7                                                       {0,1022,NONE,512}       // Inutilis�    
#define tOFFSET_PATIENT_PRESS1                                  {165,200,NONE,176}
#define tOFFSET_PATIENT_PRESS2                                  {425,520,NONE,468}                              
#define tOFFSET_PATIENT_PROX_PRESS1                             {165,200,NONE,176}
#define tOFFSET_PATIENT_PROX_PRESS2                             {425,520,NONE,468}                              
#define tOFFSET_PRESS_O2                                                        {50,150,NONE,104}                               
#define tI_VALVE_REF_U16                                                        {3500,5500,NONE,4500}
#define tOFFSET_FAS_VALVE_1_U16                                 {3900,4100,NONE,4000}
#define tOFFSET_FAS_VALVE_2_U16                                 {0,50,NONE,0}
#define tOFFSET_FAS_VALVE_3_U16                                 {1010,1650,NONE,1332}
#define tOFFSET_FAS_VALVE_4_U16                                 {950,1510,NONE,1233}
#define tOFFSET_FAS_VALVE_5_U16                                 {890,1430,NONE,1158}
#define tOFFSET_FAS_VALVE_6_U16                                 {830,1350,NONE,1095}
#define tOFFSET_FAS_VALVE_7_U16                                 {780,1300,NONE,1037}
#define tOFFSET_FAS_VALVE_8_U16                                 {710,1240,NONE,977}
#define tOFFSET_FAS_VALVE_9_U16                                 {630,1180,NONE,908}
#define tOFFSET_VALVE_PRESS                                             {165,200,NONE,176}
#define tOFFSET_VALVE_PRESS2                                    {425,520,NONE,468}                              
#define tOFFSET_FIO2                                                    {125,225,NONE,172}
#define tADJUST_BRIGHTNESS                                                      {25,38,1,32}                                            
#define tADJUST_BACKLIGHT                                                       {FALSE,TRUE,1,FALSE}
#define tRETRIEVAL_EVENT_ADRESS_LSB                             {0x0,0xFFFF,NONE,0x0}
#define tRETRIEVAL_EVENT_ADRESS_MSB                             {0x0,0x7,NONE,0x0}
#define tSPEED_COM                                                                      {9600,38400,9600,38400}
#define tSAVED_PATIENT_COUNTER_HOUR                             {0,65535,1,0}
#define tSAVED_PATIENT_COUNTER_MIN                              {0,59,1,0}
#define tSAVED_MACHINE_COUNTER_HOUR                             {0,65535,1,0}
#define tSAVED_MACHINE_COUNTER_MIN                              {0,59,1,0}
#define tRAZ_COUNTER_PAT_DATE                                           {1,31,1,1}
#define tRAZ_COUNTER_PAT_MONTH                                  {1,12,1,1}
#define tRAZ_COUNTER_PAT_YEAR                                           {3,99,1,3}
#define tRAZ_COUNTER_PAT_HOUR                                           {0,65535,1,0}
#define tRAZ_COUNTER_PAT_MIN                                            {0,59,1,0}
#define tBAD_ERASE                                                                      {ERASE_OK,BAD_TOTAL_ERASE,1,ERASE_OK}
#define tSOUND_LEVEL_SELECT                                             {20,100,2,60}
#define tPREVIOUS_SOUND_LEVEL_SELECT                    {20,100,2,60}
#define tCURVE_DISPLAY_TYPE_MODE                        {FALSE,TRUE,1,FALSE}
#define tCURVE_MAX_PRESSURE                                    {0,100,5,0}
#define tCURVE_MAX_FLOW                                                             {0,200,5,0}
#define tCURVE_MAX_VT                                                               {0,3000,100,0}
#define tCURVE_MAX_TIME                                                             {0,60,1,0}
#define tCURVE_DRAW_MODE                                                    {FALSE,TRUE,1,FALSE}
#define tADJUST_CYCLING_MODE                                                {0,1,1,1}
#define tADJUST_KEY_TONE                                                    {0,3,1,2}
#ifdef SUPPORTAIR_M2
#define tWAVEFORME_DISPLAY                                                      {FALSE,TRUE,1,TRUE}
#elif       defined (LEGENDAIR_XL2) || defined (LEGENDAIR_S2)
#define tWAVEFORME_DISPLAY                                                      {FALSE,TRUE,1,FALSE}
#endif
#define tADJUST_BAROMETRIC_CORRECTOR                        {FALSE,TRUE,1,TRUE}
#define tADJUST_FIO2                                                                        {21,100,5,21}
#define tADJUST_FIO2_SELECT                                         {FALSE,TRUE,1,TRUE}
#define tADJUST_LOW_FIO2_XL2                                                {18,90,1,18}
#define tADJUST_LOW_FIO2_M2                                         {1,90,1,6}
#define tADJUST_LOW_FIO2_SELECT                                     {FALSE,TRUE,1,FALSE}
#define tADJUST_HIGH_FIO2_XL2                                               {30,100,1,100}
#define tADJUST_HIGH_FIO2_M2                                                {30,115,1,36}
#define tADJUST_HIGH_FIO2_SELECT                                    {FALSE,TRUE,1,FALSE}
#define tADJUST_LOW_SPO2                                                    {80,98,1,95}
#define tADJUST_HIGH_SPO2                                                   {90,100,1,98}
#define tSPO2_LOW_SELECT                                                    {FALSE,TRUE,1,FALSE}
#define tSPO2_HIGH_SELECT                                                   {FALSE,TRUE,1,FALSE}
#define tPRESSURE_UNIT                                                              {0,2,1,0}
#define tTRIGGER_E_POSITIVE                                         {0,1,1,0}
#define tVOLUNTARY_STOP_ALARM_ACTIVATION            {FALSE,TRUE,1,TRUE}
#define tAPNEA_ALARM_ACTIVATION                                     {FALSE,TRUE,1,TRUE}
#define tFLASH_MEM_MANUFACTURER					{0,255,1,MICRON}
#define tFLASH_MEM_DEVICE						{0,255,1,MT29F2G08AAB}
#define tFLASH_MEMORY_FIVE_ADDRESS_CYCLES		{FALSE,TRUE,1,FALSE}
#define tFLASH_MONIT_WRITE_BLOCK						{0,65535,1,1}
#define tFLASH_MONIT_WRITE_PAGE						{0,65535,1,0}
#define tFLASH_MONIT_WRITE_COLUMN						{0,65535,1,0}
#define tFLASH_TREND_WRITE_BLOCK						{0,65535,1,342}
#define tFLASH_TREND_WRITE_PAGE						{0,65535,1,0}
#define tFLASH_TREND_WRITE_COLUMN						{0,65535,1,0}
#define tFLASH_FIRST_PARTITION_FULL				{FALSE,TRUE,1,FALSE}
#define tFLASH_SECOND_PARTITION_FULL			{FALSE,TRUE,1,FALSE}
#define tPARAM_COMPATIBILITY                 {0,4,1,0}
#define tIHM_LOCKED_FRAME_ID				 {4, 6, 2, 4} /* FRAME_VENTILATION == 4, FRAME_ALARM == 6, see IHM_IhmType.hpp */
#define tPEDIACTRIC_CIRCUIT                     {0, 1, 1, 0}
#define tPRESSURE_SUPPORT_RELATIVE		{0, 1, 1, 0}  /* 0 = Absolut ,1 = Relative */
#define tPRESSURE_SUPPORT_CHANGED_U16  {FALSE,TRUE,1,FALSE}
#define tPREVIOUS_MODE						{NONE,NONE,NONE,FALSE}




typedef enum {
	ADJUST_LANGUAGE_U16=0,
	ADJUST_MODE_U16,
	ADJUST_KEYLOCK_U16,
	VENTIL_REQ_U16,
	OFFSET_INSP_FLOW_1_U16,
	OFFSET_INSP_FLOW_2_U16,
	OFFSET_INSP_FLOW_3_U16,
	OFFSET_INSP_FLOW_4_U16,
	OFFSET_INSP_FLOW_5_U16,
	OFFSET_INSP_FLOW_6_U16,
	OFFSET_INSP_FLOW_7_U16,
	OFFSET_INSP_FLOW_8_U16,
	OFFSET_EXH_FLOW_1_U16,
	OFFSET_EXH_FLOW_2_U16,
	OFFSET_EXH_FLOW_3_U16,
	OFFSET_EXH_FLOW_4_U16,
	OFFSET_EXH_FLOW_5_U16,
	OFFSET_EXH_FLOW_6_U16,
	OFFSET_EXH_FLOW_7_U16,
	OFFSET_EXH_FLOW_8_U16,
	OFFSET_O2_FLOW_1,
	OFFSET_O2_FLOW_2,
	OFFSET_O2_FLOW_3,
	OFFSET_O2_FLOW_4,
	OFFSET_O2_FLOW_5,
	OFFSET_O2_FLOW_6,
	OFFSET_O2_FLOW_7,
	OFFSET_PATIENT_PRESS_1_U16,
	OFFSET_PATIENT_PRESS_2_U16,
	OFFSET_PATIENT_PROX_PRESS_1_U16,
	OFFSET_PATIENT_PROX_PRESS_2_U16,
	OFFSET_PRESS_O2,
	I_VALVE_REF_U16,
	OFFSET_FAS_VALVE_1_U16,
	OFFSET_FAS_VALVE_2_U16,
	OFFSET_FAS_VALVE_3_U16,
	OFFSET_FAS_VALVE_4_U16,
	OFFSET_FAS_VALVE_5_U16,
	OFFSET_FAS_VALVE_6_U16,
	OFFSET_FAS_VALVE_7_U16,
	OFFSET_FAS_VALVE_8_U16,
	OFFSET_FAS_VALVE_9_U16,
	OFFSET_VALVE_PRESS_U16,
	OFFSET_VALVE_PRESS_2_U16,
	OFFSET_FIO2,
	ADJUST_BRIGHTNESS_U16,
	ADJUST_BACKLIGHT_U16,
	/* Do not modify the enum order; due to trap record */
	SAVED_PATIENT_COUNTER_HOUR_U16,  
	/* Do not modify the enum order; due to trap record */
	SAVED_PATIENT_COUNTER_MIN_U16,
	/* Do not modify the enum order; due to trap record */
	SAVED_MACHINE_COUNTER_HOUR_U16,
	/* Do not modify the enum order; due to trap record */
	SAVED_MACHINE_COUNTER_MIN_U16,
	/* Do not modify the enum order; due to trap record */
	RETRIEVAL_EVENT_ADRESS_MSB_U16,
	/* Do not modify the enum order; due to trap record */
	RETRIEVAL_EVENT_ADRESS_LSB_U16,
	/* Do not modify the enum order; due to trap record */
	FLASH_MONIT_WRITE_BLOCK_U16,
	/* Do not modify the enum order; due to trap record */
	FLASH_MONIT_WRITE_PAGE_U16,
	/* Do not modify the enum order; due to trap record */
	FLASH_MONIT_WRITE_COLUMN_U16,
	/* Do not modify the enum order; due to trap record */
	FLASH_TREND_WRITE_BLOCK_U16,
	/* Do not modify the enum order; due to trap record */
	FLASH_TREND_WRITE_PAGE_U16,
	/* Do not modify the enum order; due to trap record */
	FLASH_TREND_WRITE_COLUMN_U16,
	/* Do not modify the enum order; due to trap record */
	FLASH_FIRST_PARTITION_FULL_U16,
	/* Do not modify the enum order; due to trap record */
	FLASH_SECOND_PARTITION_FULL_U16,

	SPEED_COM_U16,
	RAZ_COUNTER_PAT_DATE_U16,
	RAZ_COUNTER_PAT_MONTH_U16,
	RAZ_COUNTER_PAT_YEAR_U16,
	RAZ_COUNTER_PAT_HOUR_U16,
	RAZ_COUNTER_PAT_MIN_U16,	 
	BAD_ERASE_U16,  	/* record of flash interrupt*/
	SOUND_LEVEL_SELECT_U16,
	PREVIOUS_SOUND_LEVEL_SELECT_U16,
	CURVE_DISPLAY_TYPE_MODE_U16,
	CURVE_MAX_PRESSURE_U16,
	CURVE_MAX_FLOW_U16,
	CURVE_MAX_VT_U16,
	CURVE_MAX_TIME_U16,
	CURVE_DRAW_MODE_U16,
	ADJUST_CYCLING_MODE_U16,
	ADJUST_KEY_TONE_U16,
	ADJUST_WAVEFORM_DISPLAY_U16,
	ADJUST_BAROMETRIC_CORRECTOR_U16,
	ADJUST_FIO2,
	ADJUST_FIO2_SELECT,
	ADJUST_LOW_FIO2,
	ADJUST_HIGH_FIO2,
	ADJUST_LOW_SPO2,
	ADJUST_HIGH_SPO2,
	SPO2_LOW_SELECT,
	SPO2_HIGH_SELECT,
	FIO2_LOW_SELECT,
	FIO2_HIGH_SELECT,
	PRESSURE_UNIT_U16,
	TRIGG_E_POSITIVE,
	APNEA_ALARM_ACTIVATION,
	FLASH_MEMORY_MANUFACTURER,
	FLASH_MEMORY_DEVICE,
	FLASH_MEMORY_FIVE_ADDRESS_CYCLES,
	PARAM_COMPATIBILITY,
	IHM_LOCKED_FRAME_ID,
	ADJUST_PEDIATRIC_CIRCUIT_U16,
	PREVIOUS_MODE_U16,
	PRESSURE_SUPPORT_RELATIVE_U16,
	PRESSURE_SUPPORT_CHANGED_U16,
	VOLUNTARY_STOP_ALARM_ACTIVATION,	
	SOUND_TYPE_SELECT_U16,
	end_of_db_config_table
} e_DB_CONFIG;

// extern t_DEFAULT_DB default_config_db;
// extern unsigned int config_db[end_of_db_config_table];
#endif // CONFIG_DB_H_ 
