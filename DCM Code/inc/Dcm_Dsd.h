/**********************************************************************************
***********************************************************************************
**														  						 **		
**	FILENAME	:	Dcm_Dsd.h                           					     **
**	                                                      						 **
**	VERSION		: 	1.0.0                                 						 **
**                                                        						 **
**	DATE		:	2021-5-16                            						 **
**                                                        						 **
**	PLATFORM	:	TIVA C      		                  						 **
**																				 **
**  VARIANT  	: 	NA                                                           **
**                                                        						 **
**	AUTHOR		:  	RampupTeam                          						 **
**                                                        						 **
**	VENDOR		: 	NA				                     						 **
**                                                        						 **
**	                                                      						 **
**	DESCRIPTION : Dcm Dsd Header File.											 **
**                                                                               **
**	SPECIFICATION(S) : AUTOSAR_SWS_DiagnosticCommunicationManager, AUTR 4.3.1    **
**                                                       						 **
**	MAY BE CHANGED BY USER : No                          						 **
**                                                       					     **
***********************************************************************************/

/***********************************************************************************/
/*				    			Include Headers			         				   */
/***********************************************************************************/

#define NUMBER_OF_UDS_SERVICES	   (0x02)

#define DCM_NUM_OF_SESSIONS		   (0x05)

#define DCM_DSD_NUM_OF_ST		   (0x00)

#define DCM_DSD_UDS_ON_CAN_STID    (0x00)

#define DIAGNOSTIC_SESSION_CONTROL (0x00)


#define DCM_DIAG_DEFUALT_SESSION   	       (0x01)

#define DCM_DIAG_PROGRAMMING_SESSION   	   (0x02)

#define DCM_DIAG_EXTENED_SESSION	   	   (0x03)

#define DCM_DIAG_SAFETY_SYSTEM_SESSION	   (0x04)

typedef struct 
{
	uint32	SessionP2Timer;
	
	uint32	SessionP2StarTimer;
	
	uint32 	SessionS3ServerTimer;
	
}Dcm_SessionTiming;
