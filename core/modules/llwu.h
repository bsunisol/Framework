/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for Low Leakage Wakeup Module
#define WAKEUP_PIN_DISABLED						00b
#define WAKEUP_PIN_ON_RISING					01b
#define WAKEUP_PIN_ON_FALLING					10b
#define WAKEUP_PIN_ON_CHANGE					11b
#define FILTER_PIN0								0000b
#define FILTER_PIN1								0001b
#define FILTER_PIN2								0010b
#define FILTER_PIN3								0011b
#define FILTER_PIN4								0100b
#define FILTER_PIN5								0101b
#define FILTER_PIN6								0110b
#define FILTER_PIN7								0111b
#define FILTER_PIN8								1000b
#define FILTER_PIN9								1001b
#define FILTER_PIN10							1010b
#define FILTER_PIN11							1011b
#define FILTER_PIN12							1100b
#define FILTER_PIN13							1101b
#define FILTER_PIN14							1110b
#define FILTER_PIN15							1111b
#define FILTER_ON_EXTERNAL_DISABELD				00b
#define FILTER_ON_EXTERNAL_ON_RISING			01b
#define FILTER_ON_EXTERNAL_ON_FALLING			10b
#define FILTER_ON_EXTERNAL_ON_CHANGE			11b



//Memory map of Low Leakage Wakeup Module
typedef struct _LLWU_MemoryMap {
	//Low Leakage Wakeup Register
	unsigned int WakeupPin0						:2;
	unsigned int WakeupPin1						:2;
	unsigned int WakeupPin2						:2;
	unsigned int WakeupPin3						:2;
	unsigned int WakeupPin4						:2;
	unsigned int WakeupPin5						:2;
	unsigned int WakeupPin6						:2;
	unsigned int WakeupPin7						:2;
	unsigned int WakeupPin8						:2;
	unsigned int WakeupPin9						:2;
	unsigned int WakeupPin10					:2;
	unsigned int WakeupPin11					:2;
	unsigned int WakeupPin12					:2;
	unsigned int WakeupPin13					:2;
	unsigned int WakeupPin14					:2;
	unsigned int WakeupPin15					:2;
	unsigned int WakeupModule0					:1;
	unsigned int WakeupModule1					:1;
	unsigned int WakeupModule2					:1;
	unsigned int WakeupModule3					:1;
	unsigned int WakeupModule4					:1;
	unsigned int WakeupModule5					:1;
	unsigned int WakeupModule6					:1;
	unsigned int WakeupModule7					:1;
	unsigned int WakeupFlagPin0					:1;
	unsigned int WakeupFlagPin1					:1;
	unsigned int WakeupFlagPin2					:1;
	unsigned int WakeupFlagPin3					:1;
	unsigned int WakeupFlagPin4					:1;
	unsigned int WakeupFlagPin5					:1;
	unsigned int WakeupFlagPin6					:1;
	unsigned int WakeupFlagPin7					:1;
	unsigned int WakeupFlagPin8					:1;
	unsigned int WakeupFlagPin9					:1;
	unsigned int WakeupFlagPin10				:1;
	unsigned int WakeupFlagPin11				:1;
	unsigned int WakeupFlagPin12				:1;
	unsigned int WakeupFlagPin13				:1;
	unsigned int WakeupFlagPin14				:1;
	unsigned int WakeupFlagPin15				:1;
	unsigned int WakeupFlagModule0				:1;
	unsigned int WakeupFlagModule1				:1;
	unsigned int WakeupFlagModule2				:1;
	unsigned int WakeupFlagModule3				:1;
	unsigned int WakeupFlagModule4				:1;
	unsigned int WakeupFlagModule5				:1;
	unsigned int WakeupFlagModule6				:1;
	unsigned int WakeupFlagModule7				:1;
	unsigned int FilterPinSelect1				:4;
	unsigned int								:1;
	unsigned int DigitalFilterOnExternalPin1	:2;
	unsigned int FilterDetectFlag1				:1;
	unsigned int FilterPinSelect2				:4;
	unsigned int								:1;
	unsigned int DigitalFilterOnExternalPin2	:2;
	unsigned int FilterDetectFlag2				:1;
	unsigned int DigitalFilterOnResetPin		:1;
	unsigned int LowLeakageModeReset			:1;
	unsigned int								:6;
} volatile *pLLWU_MemoryMap;

#pragma pack(pop)

#define LowLeakageWakupModule	((pLLWU_MemoryMap)0x4007c000u)
