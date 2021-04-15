#ifndef MEASUREMENT_DB_H_ 
#define MEASUREMENT_DB_H_

#define sPATIENT_PRESSURE_CAN 		 {0,0,0,0}
#define sPATIENT_PRESSURE_PROXI 	 {0,0,0,0}
#define sVALVE_PRESSURE_CAN		 {0,0,0,0} 
#define sQI_CAN				 {0,0,0,0} 	
#define sQE_CAN 			 {0,0,0,0} 
#define sINFO_SUPPLY_CAN		 {0,0,0,0} 
#define sABS_PRESSURE_CAN		 {0,0,0,0} 
#define sO2_PRESSURE_CAN		 {0,0,0,0} 
#define sQO2_CAN		         {0,0,0,0}


/* Measurement base */
typedef enum {
	PATIENT_PRESSURE_CAN_U16=0,
	PATIENT_PRESSURE_PROXI_CAN_U16,
	VALVE_PRESSURE_CAN_U16,
	QI_CAN_U16,
	QE_CAN_U16,
	INFO_SUPPLY_CAN_U16,
	ABS_PRESSURE_CAN_U16,
	O2_PRESSURE_CAN_U16,
	QO2_CAN_U16,
	end_of_db_measurement_table
} e_DB_MEASUREMENT;

#endif
