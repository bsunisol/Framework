/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for Power Management Module
#define LOW_VOLTAGE_DETECT_LOW_TRIP_POINT		00b
#define LOW_VOLTAGE_DETECT_HIGH_TRIP_POINT		01b
#define LOW_VOLTAGE_WARNING_LOW_TRIP_POINT		00b
#define LOW_VOLTAGE_WARNING_MID1_TRIP_POINT		01b
#define LOW_VOLTAGE_WARNING_MID2_TRIP_POINT		10b
#define LOW_VOLTAGE_WARNING_HIGH_TRIP_POINT		11b


//Memory map of Power Management Module
typedef struct _PMC_MemoryMap {
	//Power Management Control Register
	unsigned int LowVoltageDetectVoltage		:2;
	unsigned int								:2;
	unsigned int LowVoltageDetectReset			:1;
	unsigned int LowVoltageDetectInterrupt		:1;
	unsigned int LowVoltageDetectAcknowledge	:1;
	unsigned int LowVoltageDetectFlag			:1;
	unsigned int LowVoltageWarningVoltage		:2;
	unsigned int								:3;
	unsigned int LowVoltageWarningInterrupt		:1;
	unsigned int LowVoltageWariningAcknowledge	:1;
	unsigned int LowVoltageWarningFlag			:1;
	unsigned int BandGapBuffer					:1;
	unsigned int								:1;
	unsigned int ReguatorInRunStatus			:1;
	unsigned int AcknowledgeIsolation			:1;
	unsigned int BandGapInVLPxOperation			:1;
	unsigned int								:3;
} volatile *pPMC_MemoryMap;

#pragma pack(pop)

#define PowerManagementController	((pPMC_MemoryMap)0x4007d000u)
