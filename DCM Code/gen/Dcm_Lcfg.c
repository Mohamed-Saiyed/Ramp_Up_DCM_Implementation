
const Dcm_DspSessionRowType DspSessionRow[DCM_NUM_OF_SESSIONS]
{
	0,
	{	
		DCM_NO_BOOT,
		DCM_DIAG_DEFUALT_SESSION,
		0.050,
		5000.0
	},
	{
		DCM_SYS_BOOT,
		DCM_DIAG_PROGRAMMING_SESSION,
		0.050,
		5000.0
	}
};

const Dcm_DsdServiceType ServicesConfig[NUMBER_OF_UDS_SERVICES]
{
	{
		TRUE,
		0,
		0x10,
		TRUE,
		0,
		SERVICE_SECURITY_LEVEL0,
		&DspSessionRow[DCM_DIAG_DEFUALT_SESSION],
		0,
		
	},
	{
		TRUE,
		0,
		0x3E,
		FALSE,
		0,
		SERVICE_SECURITY_LEVEL0,
		&DspSessionRow[DCM_DIAG_DEFUALT_SESSION],
		0,		
	}
};



const Dcm_DsdServiceTableType ServiceTable[DCM_DSD_NUM_OF_ST]
{
	DCM_DSD_UDS_ON_CAN_STID,
	&ServicesConfig
};

const Dcm_DsdType DSD
{
	TRUE,
	TRUE,
	&ServiceTable
};