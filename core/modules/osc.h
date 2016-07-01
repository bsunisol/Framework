/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for Oscillator



//Memory map of Oscillator Module
typedef struct _OSC_MemoryMap {
	//OSC Control Register
	unsigned int Oscillator16PCapLoadConfig		:1;
	unsigned int Oscillator8PCapLoadConfig		:1;
	unsigned int Oscillator4PCapLoadConfig		:1;
	unsigned int Oscillator2PCapLoadConfig		:1;
	unsigned int Oscillator16PCapLoadConfig		:1;
	unsigned int								:1;			//Reserved
	unsigned int ExternalReferenceStopEnable	:1;
	unsigned int ExternalReferenceEnable		:1;
} volatile *pOSC_MemoryMap;


#pragma pack(pop)

#define Oscillator	((pOSC_MemoryMap)0x40065000u)
