/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for Reset Control Module
#define RESET_PIN_FILTER_DISABLED				00b
#define RESET_PIN_FILTER_BUS_CLOCK				01b
#define RESET_PIN_FILTER_LPO					10b
#define RESET_PIN_FILTER_DISABLED_RESERVED		11b
#define RESET_PIN_FILTER_WIDTH_1				00000b
#define RESET_PIN_FILTER_WIDTH_2				00001b
#define RESET_PIN_FILTER_WIDTH_3				00010b
#define RESET_PIN_FILTER_WIDTH_4				00011b
#define RESET_PIN_FILTER_WIDTH_5				00100b
#define RESET_PIN_FILTER_WIDTH_6				00101b
#define RESET_PIN_FILTER_WIDTH_7				00110b
#define RESET_PIN_FILTER_WIDTH_8				00111b
#define RESET_PIN_FILTER_WIDTH_9				01000b
#define RESET_PIN_FILTER_WIDTH_10				01001b
#define RESET_PIN_FILTER_WIDTH_11				01010b
#define RESET_PIN_FILTER_WIDTH_12				01011b
#define RESET_PIN_FILTER_WIDTH_13				01100b
#define RESET_PIN_FILTER_WIDTH_14				01101b
#define RESET_PIN_FILTER_WIDTH_15				01110b
#define RESET_PIN_FILTER_WIDTH_16				01111b
#define RESET_PIN_FILTER_WIDTH_17				10000b
#define RESET_PIN_FILTER_WIDTH_18				10001b
#define RESET_PIN_FILTER_WIDTH_19				10010b
#define RESET_PIN_FILTER_WIDTH_20				10011b
#define RESET_PIN_FILTER_WIDTH_21				10100b
#define RESET_PIN_FILTER_WIDTH_22				10101b
#define RESET_PIN_FILTER_WIDTH_23				10110b
#define	RESET_PIN_FILTER_WIDTH_24				10111b
#define RESET_PIN_FILTER_WIDTH_25				11000b
#define RESET_PIN_FILTER_WIDTH_26				11001b
#define RESET_PIN_FILTER_WIDTH_27				11010b
#define RESET_PIN_FILTER_WIDTH_28				11011b
#define RESET_PIN_FILTER_WIDTH_29				11100b
#define RESET_PIN_FILTER_WIDTH_30				11101b
#define RESET_PIN_FILTER_WIDTH_31				11110b
#define RESET_PIN_FILTER_WIDTH_32				11111b


//Memory map of Reset Control Module
typedef struct _RCM_MemoryMap {
	//System Options Register
	struct {
		unsigned int LowLeakageWakeupReset		:1;
		unsigned int LowVoltageDetect			:1;
		unsigned int LossOFClock				:1;
		unsigned int LossOfLock					:1;
		unsigned int							:1;			//Reserved
		unsigned int Watchdog					:1;
		unsigned int ExternalResetPin			:1;
		unsigned int PowerOnReset				:1;
		unsigned int JTAG						:1;
		unsigned int CoreLockup					:1;
		unsigned int Software					:1;
		unsigned int MDMAP						:1;
		unsigned int EzPort						:1;
		unsigned int StopModeAcknowledgedError	:1;
		unsigned int							:2;			//Reserved
		unsigned int							:16;		//Spacing for alignment
	} SystemResetStatus;

	//Reset Pin Filter Control Register
	struct {
		unsigned int RunAndWaitMode				:2;
		unsigned int StopMode					:1;
		unsigned int							:5;			//Reserved
		//Reset Pin Filter Width Control Register
		unsigned int Width						:5;
		unsigned int							:3;			//Reserved
		unsigned int							:8;			//Spacing for alignment
	} ResetPinFilter;

	//Mode Register
	struct {
		unsigned int							:1;			//Reserved
		unsigned int EZPMSBPinState				:1;
		unsigned int							:6;			//Reserved
	} Mode;
} volatile *pRCM_MemoryMap;

#pragma pack(pop)

#define ResetControlModule	((pRCM_MemoryMap)0x4007F000u)
