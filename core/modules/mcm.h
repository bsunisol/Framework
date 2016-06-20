/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for Miscellaneous Control Module
/* NO LABELS */


//Memory map of Miscellaneous Control Module
typedef struct _MCM_MemoryMap {
	//Miscellaneous Control Module Register
	unsigned int BusSlaveConnectionAXBSPort0	:1;
	unsigned int BusSlaveConnectionAXBSPort2	:1;
	unsigned int BusSlaveConnectionAXBSPort3	:1;
	unsigned int BusSlaveConnectionAXBSPort4	:1;
	unsigned int BusSlaveConnectionAXBSPort5	:1;
	unsigned int BusSlaveConnectionAXBSPort6	:1;
	unsigned int BusSlaveConnectionAXBSPort7	:1;
	unsigned int								:8;
	unsigned int BusMasterConnectionAXBSPort0	:1;
	unsigned int BusMasterConnectionAXBSPort2	:1;
	unsigned int BusMasterConnectionAXBSPort3	:1;
	unsigned int BusMasterConnectionAXBSPort4	:1;
	unsigned int BusMasterConnectionAXBSPort5	:1;
	unsigned int BusMasterConnectionAXBSPort6	:1;
	unsigned int BusMasterConnectionAXBSPort7	:1;
	unsigned int								:8;
	unsigned int								:9;
	unsigned int ArbitrationSelect				:1;
	unsigned int								:22;
} volatile *pMCM_MemoryMap;

#pragma pack(pop)

#define MiscellaneousControlModule	((pMCM_MemoryMap)0xe0080008u)
