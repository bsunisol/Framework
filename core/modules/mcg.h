/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for Multipurpose Clock Generator
#define CLOCK_DIVIDER_1_32					000b
#define CLOCK_DIVIDER_2_64					001b
#define CLOCK_DIVIDER_4_128					010b
#define CLOCK_DIVIDER_8_256					011b
#define CLOCK_DIVIDER_16_512				100b
#define CLOCK_DIVIDER_32_1024				101b
#define CLOCK_DIVIDER_64_1280				110b
#define CLOCK_DIVIDER_128_1536				111b
#define CLOCK_SOURCE_ENC0_FLL_PLL			00b
#define CLOKC_SOURCE_ENC1_INT_REF_CLK		01b
#define CLOCK_SOURCE_ENC2_EXT_REF_CLK		10b
#define CLOCK_FREQ_RANGE_ENC0_LOW			00b
#define CLOCK_FREQ_RANGE_ENC1_HIGH			01b
#define CLOCK_FREQ_RANGE_ENC2_VERY_HIGH		10b
#define CLOCK_DCO_FREQ_ENC0_LOW				00b
#define CLOCK_DCO_FREQ_ENC1_MID				01b
#define CLOCK_DCO_FREQ_ENC2_MID_HIGH		10b
#define CLOCK_DCO_FREQ_ENC3_HIGH			11b
#define CLOCK_PLL_DIVIDE_FACTOR_1			00000b
#define CLOCK_PLL_DIVIDE_FACTOR_2			00001b
#define CLOCK_PLL_DIVIDE_FACTOR_3			00010b
#define CLOCK_PLL_DIVIDE_FACTOR_4			00011b
#define CLOCK_PLL_DIVIDE_FACTOR_5			00100b
#define CLOCK_PLL_DIVIDE_FACTOR_6			00101b
#define CLOCK_PLL_DIVIDE_FACTOR_7			00110b
#define CLOCK_PLL_DIVIDE_FACTOR_8			00111b
#define CLOCK_PLL_DIVIDE_FACTOR_9			01000b
#define CLOCK_PLL_DIVIDE_FACTOR_10			01001b
#define CLOCK_PLL_DIVIDE_FACTOR_11			01010b
#define CLOCK_PLL_DIVIDE_FACTOR_12			01011b
#define CLOCK_PLL_DIVIDE_FACTOR_13			01100b
#define CLOCK_PLL_DIVIDE_FACTOR_14			01101b
#define CLOCK_PLL_DIVIDE_FACTOR_15			01110b
#define CLOCK_PLL_DIVIDE_FACTOR_16			01111b
#define CLOCK_PLL_DIVIDE_FACTOR_17			10000b
#define CLOCK_PLL_DIVIDE_FACTOR_18			10001b
#define CLOCK_PLL_DIVIDE_FACTOR_19			10010b
#define CLOCK_PLL_DIVIDE_FACTOR_20			10011b
#define CLOCK_PLL_DIVIDE_FACTOR_21			10100b
#define CLOCK_PLL_DIVIDE_FACTOR_22			10101b
#define CLOCK_PLL_DIVIDE_FACTOR_23			10110b
#define CLOCK_PLL_DIVIDE_FACTOR_24			10111b
#define CLOCK_PLL_DIVIDE_FACTOR_25			11000b
#define CLOCK_VCO_MULTIPLY_FACTOR_24		00000b
#define CLOCK_VCO_MULTIPLY_FACTOR_25		00001b
#define CLOCK_VCO_MULTIPLY_FACTOR_26		00010b
#define CLOCK_VCO_MULTIPLY_FACTOR_27		00011b
#define CLOCK_VCO_MULTIPLY_FACTOR_28		00100b
#define CLOCK_VCO_MULTIPLY_FACTOR_29		00101b
#define CLOCK_VCO_MULTIPLY_FACTOR_30		00110b
#define CLOCK_VCO_MULTIPLY_FACTOR_31		00111b
#define CLOCK_VCO_MULTIPLY_FACTOR_32		01000b
#define CLOCK_VCO_MULTIPLY_FACTOR_33		01001b
#define CLOCK_VCO_MULTIPLY_FACTOR_34		01010b
#define CLOCK_VCO_MULTIPLY_FACTOR_35		01011b
#define CLOCK_VCO_MULTIPLY_FACTOR_36		01100b
#define CLOCK_VCO_MULTIPLY_FACTOR_37		01101b
#define CLOCK_VCO_MULTIPLY_FACTOR_38		01110b
#define CLOCK_VCO_MULTIPLY_FACTOR_39		01111b
#define CLOCK_VCO_MULTIPLY_FACTOR_40		10000b
#define CLOCK_VCO_MULTIPLY_FACTOR_41		10001b
#define CLOCK_VCO_MULTIPLY_FACTOR_42		10010b
#define CLOCK_VCO_MULTIPLY_FACTOR_43		10011b
#define CLOCK_VCO_MULTIPLY_FACTOR_44		10100b
#define CLOCK_VCO_MULTIPLY_FACTOR_45		10101b
#define CLOCK_VCO_MULTIPLY_FACTOR_46		10110b
#define CLOCK_VCO_MULTIPLY_FACTOR_47		10111b
#define CLOCK_VCO_MULTIPLY_FACTOR_48		11000b
#define CLOCK_VCO_MULTIPLY_FACTOR_49		11001b
#define CLOCK_VCO_MULTIPLY_FACTOR_50		11010b
#define CLOCK_VCO_MULTIPLY_FACTOR_51		11011b
#define CLOCK_VCO_MULTIPLY_FACTOR_52		11100b
#define CLOCK_VCO_MULTIPLY_FACTOR_53		11101b
#define CLOCK_VCO_MULTIPLY_FACTOR_54		11110b
#define CLOCK_VCO_MULTIPLY_FACTOR_55		11111b
#define CLOCK_MODE_STATUS_ENC0_FLL			00b
#define CLOCK_MODE_STATUS_ENC1_INT_REF		01b
#define CLOCK_MODE_STATUS_ENC2_EXT_REF		10b
#define CLOCK_MODE_STATUS_ENC3_PFF			11b
#define CLOCK_FAST_DIVIDE_FACTOR_1			000b
#define CLOCK_FAST_DIVIDE_FACTOR_2			001b
#define CLOCK_FAST_DIVIDE_FACTOR_4			010b
#define CLOCK_FAST_DIVIDE_FACTOR_8			011b
#define CLOCK_FAST_DIVIDE_FACTOR_16			100b
#define CLOCK_FAST_DIVIDE_FACTOR_32			101b
#define CLOCK_FAST_DIVIDE_FACTOR_64			110b
#define CLOCK_FAST_DIVIDE_FACTOR_128		111b
#define CLOCK_AUTO_TRIM_32KHZ				0b
#define CLOCK_ATUO_TRIM_4MHZ				1b





//Memory map of Multipurpose Clock Generator Module
typedef struct _MCG_MemoryMap {
	//MCG Control 1 Register
	unsigned int InternalReferenceStopEnable	:1;
	unsigned int InternalReferenceClockEnable	:1;
	unsigned int InternalReferenceSelect		:1;
	unsigned int FLLExternalReferenceDivider	:3;
	unsigned int ClockSourceSelect				:2;
	//MCG Control 2 Register
	unsigned int InternalReferenceClockSelect	:1;
	unsigned int LowPowerSelect					:1;
	unsigned int ExternalReferenceSelect		:1;
	unsigned int HighGainOscillatorSelect		:1;
	unsigned int FrequencyRangeSelect			:2;
	unsigned int LossofClockResetEnable			:1;
	//MCG Control 3 Register
	unsigned int SlowInternalRefClockTrimSetting:8;
	//MCG Control 4 Register
	unsigned int SlowInternalRefClockFineTrim	:1;
	unsigned int FastInternalRefClockTrimSetting:4;
	unsigned int DCORangeSelect					:2;
	unsigned int DCOMaxFrequencyReference		:1;
	//MCG Control 5 Register
	unsigned int PLLExternalReferenceDivider	:5;
	unsigned int PLLStopEnable					:1;
	unsigned int PLLClockEnable					:1;
	unsigned int								:1;			//Reserved
	//MCG Control 6 Register
	unsigned int VCO0Divider					:5;
	unsigned int ClockMonitorEnable				:1;
	unsigned int PLLSelect						:1;
	unsigned int LossOfLockInterrruptEnable		:1;
	//MCG Status Register
	unsigned int InternalReferenceClockStatus	:1;
	unsigned int OSCInitialization				:1;
	unsigned int ClockModeStatus				:2;
	unsigned int InternalReferenceStatus		:1;
	unsigned int PLLSelectStatus				:1;
	unsigned int LockStatus						:1;
	unsigned int LossOfLockStatus				:1;
	//MCG Status and Control Register
	unsigned int OSC0LossOfClockStatus			:1;
	unsigned int FastClockInternalRefDivider	:3;
	unsigned int FLLFilterPreserveEnable		:1;
	unsigned int AutomaticTrimMachineFailFlag	:1;
	unsigned int AutomaticTrimMachineSelect		:1;
	unsigned int AutomaticTrimMachineEnable		:1;
	//MCG Auto Trim Compare Value Registers
	unsigned int ATMCompareValueHigh			:8;
	unsigned int ATMCompareValueHighLow			:8
	//MCG Control 7 Register
	unsigned int MCGOSCClockSelect				:1;
	unsigned int								:7;			//Reserved
	//MCG Control 8 Register
	unsigned int RTCLossofClockStatus			:1;
	unsigned int								:4;			//Reserved
	unsigned int ClockMonitorEnable1			:1;
	unsigned int LossOfLockRequest				:1;
	unsigned int LossOfClockResetEnable			:1;
} volatile *pMCG_MemoryMap;


#pragma pack(pop)

#define MultipurposeClockGenerator	((pMCG_MemoryMap)0x40064000u)
