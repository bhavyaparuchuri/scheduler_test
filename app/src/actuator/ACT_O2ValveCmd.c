
/******************************************************************************/
/*                                INCLUDE FILES		                          */
/******************************************************************************/
//#ifndef _TASKING
//	#include "LH_ST10F276.h"
//	#include <intrins.h>
//#else
//	#ifdef _TESTRT
//		#include "IO_TestRT.h"
//	#else
//		#include "regf276e.h"
//	#endif
//#endif
//#include "../GENERAL/io_declare.h"
//#include "../../inc/GENERAL/typedef.h"
//#include "../../inc/GENERAL/enum.h"
//#include "../../inc/DATABASE/DB_Compute.h"
//#include "../../inc/DATABASE/DB_Config.h"
//#include "../../inc/DATABASE/DB_Control.h"
#include "../../inc/ventilation/Ventilation_Constants.h"
//#include "../../inc/VENTILATION/Ventilation_Datas.h"
#include "../../inc/actuator/ACT_O2ValveCmd.h"

/******************************************************************************/
/*                            FUNCTION BODY                                   */
/******************************************************************************/
#define sfr unsigned int
sfr   VANNE_O2_CMD_2  = 0xFE34;

SWORD32 VEN_IntegralValveO2 = 0; //from ventilation_datas.h
void ACT_O2ValveCmd(SWORD32 Kp,SWORD32 Ki,SWORD32 Consigne)
{
SWORD32 Error=0,Prop;
UWORD16 ValveCommand;
SWORD16 QO2 = (SWORD16)read_from_db(COMPUTE_DB,MEASURE_QO2_S16);   

UWORD16 AdjustO2 = read_from_db(CONFIG_DB,ADJUST_FIO2);
UWORD16 Fio2_100Active = read_from_db(CONTROL_DB,FIO2_100_ACTIVE);
UWORD16 MaintenanceMode = read_from_db(CONTROL_DB,MAINTENANCE_MODE_U16);

UWORD16 O2AdjustMin = 0;

	// Read O2 Adjust min value 
//	DB_IhmAccessParaDataBase(&O2AdjustMin, ADJUST_FIO2, CONFIG, MIN);//bhavya
	
   // calcul de l'erreur 
   Error = Consigne - (SWORD32)QO2;

   // Calcul du terme proportionnel1 divis� par 1000 pour augmenter pr�cision du r�glage de Kp1
   Prop = (Kp * Error)/1000;
   // Calcul du terme integral divis� par 1000 pour augmenter pr�cision du r�glage de Ki
   VEN_IntegralValveO2 = VEN_IntegralValveO2 + (Ki * Error)/1000;
   // Limitation de l'int�grale maxi
   if (VEN_IntegralValveO2 > cVEN_INTEGRAL_VALVEO2_MAX) VEN_IntegralValveO2 = cVEN_INTEGRAL_VALVEO2_MAX;
      // Limitation de l'int�grale mini
   if (VEN_IntegralValveO2 < cVEN_INTEGRAL_VALVEO2_MIN) VEN_IntegralValveO2 = cVEN_INTEGRAL_VALVEO2_MIN;

	// Calcul du terme proportionnel + integral + d�riv� 
	ValveCommand = (UWORD16)((Prop + VEN_IntegralValveO2) / 10);

   // Limitation de la commande valve
   if (ValveCommand > cVEN_INTEGRAL_VALVEO2_MAX/10)  ValveCommand = cVEN_INTEGRAL_VALVEO2_MAX/10;
   if (ValveCommand <= 0) ValveCommand = 0;
            
   if ((AdjustO2 > O2AdjustMin) || (Fio2_100Active == TRUE) || (MaintenanceMode == TRUE))
  	  // Chargement de la valeur de la commande de valve (O2 ou Ballonnet)
     VANNE_O2_CMD_2 = cVALVEO2_CMD_OFF - ValveCommand;
   else
	  // Fermeture complete de la vanne
	  VANNE_O2_CMD_2 = cVALVEO2_CMD_OFF;

	// Sauvegarde de la valeur pour le r�glage manuel de la calibration du QO2
	write_to_db(CONTROL_DB,MEMO_CMD_VANNE_FIO2_TO_CALIB, ValveCommand);
	
}

