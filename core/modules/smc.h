/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for System Control Module
#define STOP_MODE_NORMAL						000b
#define STOP_MODE_VERY_LOW_POWER				010b
#define STOP_MODE_VLPS							010b
#define STOP_MODE_LOW_LEAKAGE					011b
#define STOP_MODE_LLS							011b
#define STOP_MODE_VERY_LOW_LEAKAGE				100b
#define STOP_MODE_VLLSx							100b
#define RUN_MODE_NORMAL							00b
#define RUN_MODE_RUN							00b
#define RUN_MODE_VERY_LOW_POWER					10b
#define RUN_MODE_VLPR							10b
#define VLLS_MODE_0								000b
#define VLLS_MODE_1								001b
#define VLLS_MODE_2								010b
#define VLSS_MODE_3								011b
#define POWER_MODE_RUN							0000001b
#define POWER_MODE_STOP							0000010b
#define POWER_MODE_VLPR							0000100b
#define POWER_MODE_VLPW							0001000b
#define POWER_MODE_VLPS							0010000b
#define POWER_MODE_LLS							0100000b
#define POWER_MODE_VLLS							1000000b



//Memory map of System Integrated Module
typedef struct _SMC_MemoryMap {
	//System Control Register
	unsigned int								:1;			//Reserved
	unsigned int AllowVeryLowLeakageStopMode	:1;
	unsigned int								:1;			//Reserved
	unsigned int AllowLowLeakageStopMode		:1;
	unsigned int								:1;			//Reserved
	unsigned int AllowVeryLowPowerMode			:1;
	unsigned int								:2;			//Reserved
	unsigned int StopModeControl				:3;
	unsigned int StopAborted					:1;
	unsigned int								:1;			//Reserved
	unsigned int RunModeControl					:3;
	unsigned int VLLSModeControl				:3;
	unsigned int								:2;			//Reserved
	unsigned int PORPowerOption					:1;
	unsigned int								:2;			//Reserved
	unsigned int PowerModeStatus				:7;
	unsigned int								:1;			//Reserved
} volatile *pSMC_MemoryMap;

#pragma pack(pop)

#define SystemControlModule	((pSMC_MemoryMap)0x4007e000u)
