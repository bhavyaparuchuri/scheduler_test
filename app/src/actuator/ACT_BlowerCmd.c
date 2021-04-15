/******************************************************************************/
/*%I Input Parameter :  Kp    				                    						*/
/*%I Input Parameter :  Ki    				                    						*/
/*%I Input Parameter :  Consigne 			                    						*/
/*%I Input Parameter :  TypeRegul			                    						*/
/*%IO Input/Output :    NONE	                                                */
/*%O Output Parameter : NONE																	*/
/******************************************************************************/



/******************************************************************************/
/*                                INCLUDE FILES		                           */
/******************************************************************************/
	
//#include "../../inc/GENERAL/io_declare.h"  // platform specific header
//#include "../../inc/GENERAL/typedef.h"
//#include "../../inc/GENERAL/enum.h"
//#include "../../inc/database/control_db.h"
//#include "../../inc/database/compute_db.h"
//#include "../../inc/DATABASE/DB_AlarmStatus.h"
#include "../../inc/actuator/ACT_BlowerCmd.h"
#include "../../inc/ventilation/Ventilation_Constants.h"
#define DECLARATION_VENTILATION_DATAS
//#include "../../inc/VENTILATION/Ventilation_Datas.h"
/******************************************************************************/
/*                            FUNCTION BODY                                   */
/******************************************************************************/
#define sfr unsigned int			// manoj

#define FALSE 0

#define TRUE 1

SWORD32 VEN_IntegralBlower = 0; //from Ventilation_datas.h //bhavya
sfr BLOWER_CMD_2 = 0xFE30;

void ACT_BlowerCmd(SWORD32 Kp,
                   SWORD32 Ki,
                   UWORD16 Consigne,
                   e_VEN_ControllerType TypeRegul)
{

	UWORD16 VentilAuthorization = read_from_db(CONTROL_DB,VENTIL_AUTHORIZATION_U16);
//	UWORD16 Alarm_Turbine_overheat = DB_AlarmStatusRead(ALARM_TURBINE_OVERHEAT_U16);
   	UWORD16 MeasureSpeedBlower = read_from_db(COMPUTE_DB,MEASURE_SPEED_BLOWER_U16);
   	SWORD16 FilterInternalPressure = (SWORD16)read_from_db(COMPUTE_DB,FILTER_INTERNAL_PRESSURE_S16);   
   	SWORD16 MeasurePatientPressure = (SWORD16)read_from_db(COMPUTE_DB,MEASURE_PATIENT_PRESSURE_S16);
   	SWORD16 MeasureQinsp = (SWORD16)read_from_db(COMPUTE_DB, MEASURE_QINSP_S16);   
   	SWORD16 MeasureValvePressure = 	(SWORD16)read_from_db(COMPUTE_DB, MEASURE_VALVE_PRESSURE_S16);
   	SWORD16 MeasureQexh = (SWORD16)read_from_db(COMPUTE_DB, MEASURE_QEXH_S16);
   	UWORD16 High_Pressure_Exhalation_Detected = (SWORD16)read_from_db(CONTROL_DB, HIGH_PRESSURE_EXHALATION_DETECTED_U16);
	SWORD32 BlowerCommand = 0;
	SWORD32 Prop = 0;
	SWORD32 Error = 0;


#ifndef TESTING
MeasureSpeedBlower = 2025;
MeasurePatientPressure = 2977;
MeasureValvePressure = 2999;
MeasureQinsp = 2001;
#endif


/*%C If control type is speed */
	if (TypeRegul == CONTROL_SPEED)
	{
/*%C  Compute of delta for speed control */
		Error =(SWORD32)Consigne - (SWORD32)MeasureSpeedBlower;
	}
/*%C If control type is pressure */
	else if (TypeRegul == CONTROL_PRESSURE)
	{
/*%C  Compute of delta for pressure control */
		Error = (SWORD32)Consigne - (SWORD32)MeasurePatientPressure;
	}
/*%C If control type is valve pressure */
	else if (TypeRegul == CONTROL_PRESSURE_VALVE)
	{
/*%C  Compute of delta for valve pressure control */
		Error = (SWORD32)Consigne - (SWORD32)MeasureValvePressure;
	}
/*%C If control type is flow */
	else if (TypeRegul == CONTROL_FLOW)
	{
/*%C  Compute of delta for flow control */
		Error = (SWORD32)Consigne - (SWORD32)MeasureQinsp;
	}
/*%C If control type is exhalation flow */
	else if (TypeRegul == CONTROL_FLOW_EXH)
	{
/*%C  Compute of delta for exhalation flow control */
		Error = (SWORD32)Consigne - (SWORD32)MeasureQexh;
	}
/*%C If control type is pressure in maintenance mode */
	else if (TypeRegul == CONTROL_PRESSURE_MAINT)
	{
/*%C  Compute of delta for maintenance pressure control */
		Error = (SWORD32)Consigne - (SWORD32)FilterInternalPressure;
	}

/*%C Proportional computing, divided by 1000  */
/*%C for increasing Kp adjust sensibility */
	Prop = (Kp * Error) / 1000;
/*%C Integral computing, divided by 1000  */
/*%C for increasing Ki adjust sensibility */
	VEN_IntegralBlower = VEN_IntegralBlower + (Ki * Error) / 1000;
/*%C Integral blower saturation */
	VEN_IntegralBlower = saturation(VEN_IntegralBlower,cVEN_INTEGRAL_MIN,cVEN_INTEGRAL_MAX);

/*%C Proportionnal + integral computing */
	BlowerCommand = (Prop + VEN_IntegralBlower) / 10;

/*%C On Ventilation modes */
/*%C When pressure is under 1cmH2o, with control flow selected*/
/*%C speed blower command is adjusted around	3000 rpm */
	if ( (VentilAuthorization == TRUE)
	  && (MeasurePatientPressure <= 10) 
	  && (BlowerCommand >= cVEN_INTEGRAL_MAX/10 - 2600) 
	  && (TypeRegul != CONTROL_FLOW) )
	{
		BlowerCommand = cVEN_INTEGRAL_MAX/10 - 2600;
	}

/*%C Speed blower command limitation [0, 3000] */
   BlowerCommand = saturation(BlowerCommand, 0, cVEN_INTEGRAL_MAX / 10); 

	BlowerCommand = cVEN_INTEGRAL_MAX / 10 - BlowerCommand;


		
/*%C If a turbine overheat is detected, or a high pressure
     occurs during exhalation the blower is stopped */
	if ( (High_Pressure_Exhalation_Detected == TRUE) )
	//  || (Alarm_Turbine_overheat >= ALARM_TRUE) ) //bhavya
	{
  		Consigne = 0;
	}

/*%C Complete stop of blower when set up equals 0 */
	if (Consigne == 0)
	{
		BlowerCommand = cBLOWER_CMD_OFF;
		VEN_IntegralBlower = 0;
	} 
	 	
/*%C Protection: brake command */
	if (BlowerCommand != cBLOWER_CMD_OFF)
	{ 
//		ACT_BrakePower(0); //bhavya
	}
	write_to_db(COMPUTE_DB,BLOWER_COMMAND_U16, (UWORD16)BlowerCommand);							  	
	BLOWER_CMD_2 = (UWORD16) BlowerCommand;

}

