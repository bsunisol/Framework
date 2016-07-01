/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for Watch Dog
#define WATCHDOG_SERVICE_SEQ_1					0xB4
#define WATCHDOG_SERVICE_SEQ_2					0x2C
#define WATCHDOG_REFRESH_SEQ_1					0xA602
#define WATCHDOG_REFRESH_SEQ_2					0xB480
#define WATCHDOG_UNLOCK_SEQ_1					0xC520
#define WATCHDOG_UNLOCK_SEQ_2					0xD928


//Memory map of External Watchdog Monitor Module
typedef struct _EWM_MemoryMap {
	//Control Register
	unsigned int EWMEnable						:1;
	unsigned int EWMInAssertion					:1;
	unsigned int InputEnable					:1;
	unsigned int InterruptEnable				:1;
	unsigned int								:4;			//Reserved
	//Service Register
	unsigned int Service						:8;
	//Compare Registers
	unsigned int CompareRegisterLow				:8;
	unsigned int CompareRegisterHigh			:8;
} volatile *pEWM_MemoryMap;

//Memory map of Watchdog Timer Module
typedef struct _WDG_MemoryMap {
	//Watchdog Status and Control Register High
	unsigned int EnableWatchdog					:1;
	unsigned int ClockSource					:1;
	unsigned int IRQResetEnable					:1;
	unsigned int WindowingMode					:1;
	unsigned int AllowUpdate					:1;
	unsigned int WatchdogInDebugMode			:1;
	unsigned int WatchdogInStopMode				:1;
	unsigned int WatchdogInWaitMode				:1;
	unsigned int								:2;				//Reserved
	unsigned int TestMode						:1;
	unsigned int SelectTest						:1;
	unsigned int TestByteSelect					:2;
	unsigned int DisableTestModePermanent		:1;
	unsigned int								:1;				//Reserved
	//Watchdog Status and Control Register Low
	unsigned int								:15;			//Spacing for alignment
	unsigned int InterruptFlag					:1;
	//Watchdog Time-out Value Registers
	unsigned int TimeOutValueHigh				:16;
	unsigned int TimeOutValueLow				:16;
	//Watchdog Window Registers
	unsigned int WindowModeRegisterHigh			:16;
	unsigned int WindowMOdeRegisterLow			:16;
	//Watchdog Refresh Register
	unsigned int Refresh						:16;
	//Watchdog Unlock Register
	unsigned int Unlock							:16;
	//Watchdog Timer Output Registers
	unsigned int TimerOutputHigh				:16;
	unsigned int TimerOutputLow					:16;
	//Watchdog Reset Count Register
	unsigned int ResetCounter					:16;
	//Watchdog Prescaler Register
	unsigned int								:8;				//Reserved
	unsigned int Prescalar						:3;
	unsigned int								:5;				//Reserved
} volatile *pWDG_MemoryMap;


#pragma pack(pop)

#define ExternalWatchdogMonitor	((pEWM_MemoryMap)0x40061000u)
#define WatchdogTimer			((pWDG_MemoryMap)0x40052000u)
