/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for PORT Module
#define PORT_MUX_PIN_DISABLED					000b
#define PORT_MUX_GPIO							001b
#define PORT_MUX_ALTERNATIVE_1					001b
#define PORT_MUX_ALTERNATIVE_2					010b
#define PORT_MUX_ALTERNATIVE_3					011b
#define PORT_MUX_ALTERNATIVE_4					100b
#define PORT_MUX_ALTERNATIVE_5					101b
#define PORT_MUX_ALTERNATIVE_6					110b
#define PORT_MUX_ALTERNATIVE_7					111b
#define PORT_IRQ_DISABLED						0000b
#define PORT_IRQ_DMA_ON_RISING					0001b
#define PORT_IRQ_DMA_ON_FALLING					0010b
#define PORT_IRQ_DMA_ON_EITHER					0011b
#define PORT_IRQ_LOGIC_ZERO						1000b
#define PORT_IRQ_ON_RISING						1001b
#define PORT_IRQ_ON_FALLING						1010b
#define PORT_IRQ_ON_EITHER						1011b
#define PORT_IRQ_LOGIC_ONE						1100b

//Memory map of Port Module
typedef struct _PORT_MemoryMap {
	//Port A Control
	struct {
		//Pin Control
		struct {
			unsigned int PullSelect					:1;
			unsigned int PullEnable					:1;
			unsigned int SlewRateEnable				:1;
			unsigned int							:1;			//Reserved
			unsigned int PassiveFilterEnable		:1;
			unsigned int OpenDrainEnable			:1;
			unsigned int DriveStrengthEnable		:1;
			unsigned int							:1;			//Reserved
			unsigned int PinMuxControl				:3;
			unsigned int							:4;			//Reserved
			unsigned int Lock						:1;
			unsigned int InterruptConfiguration		:4;
			unsigned int							:4;			//Reserved
			unsigned int InterruptStatusFlag		:1;
		} PinControl[32];

		//Control Register
		struct {
			unsigned int GlobalPinWriteDataLow		:16;
			unsigned int GlobalPinWriteEnableLow	:16;
			unsigned int GlobalPinWriteDataHigh		:16;
			unsigned int GlobalPinWriteEnableHigh	:16;
			unsigned int							:192;		//Spacing for alignment
		} GlobalPinControl;

		//Interrupt Status Flag
		struct {
			unsigned int Pin1						:1;
			unsigned int Pin2						:1;
			unsigned int Pin3						:1;
			unsigned int Pin4						:1;
			unsigned int Pin5						:1;
			unsigned int Pin6						:1;
			unsigned int Pin7						:1;
			unsigned int Pin8						:1;
			unsigned int Pin9						:1;
			unsigned int Pin10						:1;
			unsigned int Pin11						:1;
			unsigned int Pin12						:1;
			unsigned int Pin13						:1;
			unsigned int Pin14						:1;
			unsigned int Pin15						:1;
			unsigned int Pin16						:1;
			unsigned int Pin17						:1;
			unsigned int Pin18						:1;
			unsigned int Pin19						:1;
			unsigned int Pin20						:1;
			unsigned int Pin21						:1;
			unsigned int Pin22						:1;
			unsigned int Pin23						:1;
			unsigned int Pin24						:1;
			unsigned int Pin25						:1;
			unsigned int Pin26						:1;
			unsigned int Pin27						:1;
			unsigned int Pin28						:1;
			unsigned int Pin29						:1;
			unsigned int Pin30						:1;
			unsigned int Pin31						:1;
			unsigned int Pin32						:1;
			unsigned int							:224;		//Spacing for alignment
		} InterruptStatus;

		//Digital Filter
		struct {
			//Digital Filter Enable
			unsigned int Pin1						:1;
			unsigned int Pin2						:1;
			unsigned int Pin3						:1;
			unsigned int Pin4						:1;
			unsigned int Pin5						:1;
			unsigned int Pin6						:1;
			unsigned int Pin7						:1;
			unsigned int Pin8						:1;
			unsigned int Pin9						:1;
			unsigned int Pin10						:1;
			unsigned int Pin11						:1;
			unsigned int Pin12						:1;
			unsigned int Pin13						:1;
			unsigned int Pin14						:1;
			unsigned int Pin15						:1;
			unsigned int Pin16						:1;
			unsigned int Pin17						:1;
			unsigned int Pin18						:1;
			unsigned int Pin19						:1;
			unsigned int Pin20						:1;
			unsigned int Pin21						:1;
			unsigned int Pin22						:1;
			unsigned int Pin23						:1;
			unsigned int Pin24						:1;
			unsigned int Pin25						:1;
			unsigned int Pin26						:1;
			unsigned int Pin27						:1;
			unsigned int Pin28						:1;
			unsigned int Pin29						:1;
			unsigned int Pin30						:1;
			unsigned int Pin31						:1;
			unsigned int Pin32						:1;

			//Digital Filter Configuration
			unsigned int ClockSource				:1;
			unsigned int							:31;		//Reserved
		
			//Digital Filter Length
			unsigned int FilterLength				:1;
			unsigned int							:31;		//Reserved
			unsigned int							:31488		//Spacing for alignment
		} DigitalFilter;
	} PortA;

	//Port B Control
	struct {
		//Pin Control
		struct {
			unsigned int PullSelect					:1;
			unsigned int PullEnable					:1;
			unsigned int SlewRateEnable				:1;
			unsigned int							:1;			//Reserved
			unsigned int PassiveFilterEnable		:1;
			unsigned int OpenDrainEnable			:1;
			unsigned int DriveStrengthEnable		:1;
			unsigned int							:1;			//Reserved
			unsigned int PinMuxControl				:3;
			unsigned int							:4;			//Reserved
			unsigned int Lock						:1;
			unsigned int InterruptConfiguration		:4;
			unsigned int							:4;			//Reserved
			unsigned int InterruptStatusFlag		:1;
		} PinControl[32];

		//Control Register
		struct {
			unsigned int GlobalPinWriteDataLow		:16;
			unsigned int GlobalPinWriteEnableLow	:16;
			unsigned int GlobalPinWriteDataHigh		:16;
			unsigned int GlobalPinWriteEnableHigh	:16;
			unsigned int							:192;		//Spacing for alignment
		} GlobalPinControl;

		//Interrupt Status Flag
		struct {
			unsigned int Pin1						:1;
			unsigned int Pin2						:1;
			unsigned int Pin3						:1;
			unsigned int Pin4						:1;
			unsigned int Pin5						:1;
			unsigned int Pin6						:1;
			unsigned int Pin7						:1;
			unsigned int Pin8						:1;
			unsigned int Pin9						:1;
			unsigned int Pin10						:1;
			unsigned int Pin11						:1;
			unsigned int Pin12						:1;
			unsigned int Pin13						:1;
			unsigned int Pin14						:1;
			unsigned int Pin15						:1;
			unsigned int Pin16						:1;
			unsigned int Pin17						:1;
			unsigned int Pin18						:1;
			unsigned int Pin19						:1;
			unsigned int Pin20						:1;
			unsigned int Pin21						:1;
			unsigned int Pin22						:1;
			unsigned int Pin23						:1;
			unsigned int Pin24						:1;
			unsigned int Pin25						:1;
			unsigned int Pin26						:1;
			unsigned int Pin27						:1;
			unsigned int Pin28						:1;
			unsigned int Pin29						:1;
			unsigned int Pin30						:1;
			unsigned int Pin31						:1;
			unsigned int Pin32						:1;
			unsigned int							:224;		//Spacing for alignment
		} InterruptStatus;

		//Digital Filter
		struct {
			//Digital Filter Enable
			unsigned int Pin1						:1;
			unsigned int Pin2						:1;
			unsigned int Pin3						:1;
			unsigned int Pin4						:1;
			unsigned int Pin5						:1;
			unsigned int Pin6						:1;
			unsigned int Pin7						:1;
			unsigned int Pin8						:1;
			unsigned int Pin9						:1;
			unsigned int Pin10						:1;
			unsigned int Pin11						:1;
			unsigned int Pin12						:1;
			unsigned int Pin13						:1;
			unsigned int Pin14						:1;
			unsigned int Pin15						:1;
			unsigned int Pin16						:1;
			unsigned int Pin17						:1;
			unsigned int Pin18						:1;
			unsigned int Pin19						:1;
			unsigned int Pin20						:1;
			unsigned int Pin21						:1;
			unsigned int Pin22						:1;
			unsigned int Pin23						:1;
			unsigned int Pin24						:1;
			unsigned int Pin25						:1;
			unsigned int Pin26						:1;
			unsigned int Pin27						:1;
			unsigned int Pin28						:1;
			unsigned int Pin29						:1;
			unsigned int Pin30						:1;
			unsigned int Pin31						:1;
			unsigned int Pin32						:1;

			//Digital Filter Configuration
			unsigned int ClockSource				:1;
			unsigned int							:31;		//Reserved
			
			//Digital Filter Length
			unsigned int FilterLength				:1;
			unsigned int							:31;		//Reserved
			unsigned int							:31488		//Spacing for alignment
		} DigitalFilter;
	} PortB;

	//Port C Control
	struct {
		//Pin Control
		struct {
			unsigned int PullSelect					:1;
			unsigned int PullEnable					:1;
			unsigned int SlewRateEnable				:1;
			unsigned int							:1;			//Reserved
			unsigned int PassiveFilterEnable		:1;
			unsigned int OpenDrainEnable			:1;
			unsigned int DriveStrengthEnable		:1;
			unsigned int							:1;			//Reserved
			unsigned int PinMuxControl				:3;
			unsigned int							:4;			//Reserved
			unsigned int Lock						:1;
			unsigned int InterruptConfiguration		:4;
			unsigned int							:4;			//Reserved
			unsigned int InterruptStatusFlag		:1;
		} PinControl[32];

		//Control Register
		struct {
			unsigned int GlobalPinWriteDataLow		:16;
			unsigned int GlobalPinWriteEnableLow	:16;
			unsigned int GlobalPinWriteDataHigh		:16;
			unsigned int GlobalPinWriteEnableHigh	:16;
			unsigned int							:192;		//Spacing for alignment
		} GlobalPinControl;

		//Interrupt Status Flag
		struct {
			unsigned int Pin1						:1;
			unsigned int Pin2						:1;
			unsigned int Pin3						:1;
			unsigned int Pin4						:1;
			unsigned int Pin5						:1;
			unsigned int Pin6						:1;
			unsigned int Pin7						:1;
			unsigned int Pin8						:1;
			unsigned int Pin9						:1;
			unsigned int Pin10						:1;
			unsigned int Pin11						:1;
			unsigned int Pin12						:1;
			unsigned int Pin13						:1;
			unsigned int Pin14						:1;
			unsigned int Pin15						:1;
			unsigned int Pin16						:1;
			unsigned int Pin17						:1;
			unsigned int Pin18						:1;
			unsigned int Pin19						:1;
			unsigned int Pin20						:1;
			unsigned int Pin21						:1;
			unsigned int Pin22						:1;
			unsigned int Pin23						:1;
			unsigned int Pin24						:1;
			unsigned int Pin25						:1;
			unsigned int Pin26						:1;
			unsigned int Pin27						:1;
			unsigned int Pin28						:1;
			unsigned int Pin29						:1;
			unsigned int Pin30						:1;
			unsigned int Pin31						:1;
			unsigned int Pin32						:1;
			unsigned int							:224;		//Spacing for alignment
		} InterruptStatus;

		//Digital Filter
		struct {
			//Digital Filter Enable
			unsigned int Pin1						:1;
			unsigned int Pin2						:1;
			unsigned int Pin3						:1;
			unsigned int Pin4						:1;
			unsigned int Pin5						:1;
			unsigned int Pin6						:1;
			unsigned int Pin7						:1;
			unsigned int Pin8						:1;
			unsigned int Pin9						:1;
			unsigned int Pin10						:1;
			unsigned int Pin11						:1;
			unsigned int Pin12						:1;
			unsigned int Pin13						:1;
			unsigned int Pin14						:1;
			unsigned int Pin15						:1;
			unsigned int Pin16						:1;
			unsigned int Pin17						:1;
			unsigned int Pin18						:1;
			unsigned int Pin19						:1;
			unsigned int Pin20						:1;
			unsigned int Pin21						:1;
			unsigned int Pin22						:1;
			unsigned int Pin23						:1;
			unsigned int Pin24						:1;
			unsigned int Pin25						:1;
			unsigned int Pin26						:1;
			unsigned int Pin27						:1;
			unsigned int Pin28						:1;
			unsigned int Pin29						:1;
			unsigned int Pin30						:1;
			unsigned int Pin31						:1;
			unsigned int Pin32						:1;

			//Digital Filter Configuration
			unsigned int ClockSource				:1;
			unsigned int							:31;		//Reserved
			
			//Digital Filter Length
			unsigned int FilterLength				:1;
			unsigned int							:31;		//Reserved
			unsigned int							:31488		//Spacing for alignment
		} DigitalFilter;
	} PortC;

	//Port D Control
	struct {
		//Pin Control
		struct {
			unsigned int PullSelect					:1;
			unsigned int PullEnable					:1;
			unsigned int SlewRateEnable				:1;
			unsigned int							:1;			//Reserved
			unsigned int PassiveFilterEnable		:1;
			unsigned int OpenDrainEnable			:1;
			unsigned int DriveStrengthEnable		:1;
			unsigned int							:1;			//Reserved
			unsigned int PinMuxControl				:3;
			unsigned int							:4;			//Reserved
			unsigned int Lock						:1;
			unsigned int InterruptConfiguration		:4;
			unsigned int							:4;			//Reserved
			unsigned int InterruptStatusFlag		:1;
		} PinControl[32];

		//Control Register
		struct {
			unsigned int GlobalPinWriteDataLow		:16;
			unsigned int GlobalPinWriteEnableLow	:16;
			unsigned int GlobalPinWriteDataHigh		:16;
			unsigned int GlobalPinWriteEnableHigh	:16;
			unsigned int							:192;		//Spacing for alignment
		} GlobalPinControl;

		//Interrupt Status Flag
		struct {
			unsigned int Pin1						:1;
			unsigned int Pin2						:1;
			unsigned int Pin3						:1;
			unsigned int Pin4						:1;
			unsigned int Pin5						:1;
			unsigned int Pin6						:1;
			unsigned int Pin7						:1;
			unsigned int Pin8						:1;
			unsigned int Pin9						:1;
			unsigned int Pin10						:1;
			unsigned int Pin11						:1;
			unsigned int Pin12						:1;
			unsigned int Pin13						:1;
			unsigned int Pin14						:1;
			unsigned int Pin15						:1;
			unsigned int Pin16						:1;
			unsigned int Pin17						:1;
			unsigned int Pin18						:1;
			unsigned int Pin19						:1;
			unsigned int Pin20						:1;
			unsigned int Pin21						:1;
			unsigned int Pin22						:1;
			unsigned int Pin23						:1;
			unsigned int Pin24						:1;
			unsigned int Pin25						:1;
			unsigned int Pin26						:1;
			unsigned int Pin27						:1;
			unsigned int Pin28						:1;
			unsigned int Pin29						:1;
			unsigned int Pin30						:1;
			unsigned int Pin31						:1;
			unsigned int Pin32						:1;
			unsigned int							:224;		//Spacing for alignment
		} InterruptStatus;

		//Digital Filter
		struct {
			//Digital Filter Enable
			unsigned int Pin1						:1;
			unsigned int Pin2						:1;
			unsigned int Pin3						:1;
			unsigned int Pin4						:1;
			unsigned int Pin5						:1;
			unsigned int Pin6						:1;
			unsigned int Pin7						:1;
			unsigned int Pin8						:1;
			unsigned int Pin9						:1;
			unsigned int Pin10						:1;
			unsigned int Pin11						:1;
			unsigned int Pin12						:1;
			unsigned int Pin13						:1;
			unsigned int Pin14						:1;
			unsigned int Pin15						:1;
			unsigned int Pin16						:1;
			unsigned int Pin17						:1;
			unsigned int Pin18						:1;
			unsigned int Pin19						:1;
			unsigned int Pin20						:1;
			unsigned int Pin21						:1;
			unsigned int Pin22						:1;
			unsigned int Pin23						:1;
			unsigned int Pin24						:1;
			unsigned int Pin25						:1;
			unsigned int Pin26						:1;
			unsigned int Pin27						:1;
			unsigned int Pin28						:1;
			unsigned int Pin29						:1;
			unsigned int Pin30						:1;
			unsigned int Pin31						:1;
			unsigned int Pin32						:1;

			//Digital Filter Configuration
			unsigned int ClockSource				:1;
			unsigned int							:31;		//Reserved
			
			//Digital Filter Length
			unsigned int FilterLength				:1;
			unsigned int							:31;		//Reserved
			unsigned int							:31488		//Spacing for alignment
		} DigitalFilter;
	} PortD;

	//Port E Control
	struct {
		//Pin Control
		struct {
			unsigned int PullSelect					:1;
			unsigned int PullEnable					:1;
			unsigned int SlewRateEnable				:1;
			unsigned int							:1;			//Reserved
			unsigned int PassiveFilterEnable		:1;
			unsigned int OpenDrainEnable			:1;
			unsigned int DriveStrengthEnable		:1;
			unsigned int							:1;			//Reserved
			unsigned int PinMuxControl				:3;
			unsigned int							:4;			//Reserved
			unsigned int Lock						:1;
			unsigned int InterruptConfiguration		:4;
			unsigned int							:4;			//Reserved
			unsigned int InterruptStatusFlag		:1;
		} PinControl[32];

		//Control Register
		struct {
			unsigned int GlobalPinWriteDataLow		:16;
			unsigned int GlobalPinWriteEnableLow	:16;
			unsigned int GlobalPinWriteDataHigh		:16;
			unsigned int GlobalPinWriteEnableHigh	:16;
			unsigned int							:192;		//Spacing for alignment
		} GlobalPinControl;

		//Interrupt Status Flag
		struct {
			unsigned int Pin1						:1;
			unsigned int Pin2						:1;
			unsigned int Pin3						:1;
			unsigned int Pin4						:1;
			unsigned int Pin5						:1;
			unsigned int Pin6						:1;
			unsigned int Pin7						:1;
			unsigned int Pin8						:1;
			unsigned int Pin9						:1;
			unsigned int Pin10						:1;
			unsigned int Pin11						:1;
			unsigned int Pin12						:1;
			unsigned int Pin13						:1;
			unsigned int Pin14						:1;
			unsigned int Pin15						:1;
			unsigned int Pin16						:1;
			unsigned int Pin17						:1;
			unsigned int Pin18						:1;
			unsigned int Pin19						:1;
			unsigned int Pin20						:1;
			unsigned int Pin21						:1;
			unsigned int Pin22						:1;
			unsigned int Pin23						:1;
			unsigned int Pin24						:1;
			unsigned int Pin25						:1;
			unsigned int Pin26						:1;
			unsigned int Pin27						:1;
			unsigned int Pin28						:1;
			unsigned int Pin29						:1;
			unsigned int Pin30						:1;
			unsigned int Pin31						:1;
			unsigned int Pin32						:1;
			unsigned int							:224;		//Spacing for alignment
		} InterruptStatus;

		//Digital Filter
		struct {
			//Digital Filter Enable
			unsigned int Pin1						:1;
			unsigned int Pin2						:1;
			unsigned int Pin3						:1;
			unsigned int Pin4						:1;
			unsigned int Pin5						:1;
			unsigned int Pin6						:1;
			unsigned int Pin7						:1;
			unsigned int Pin8						:1;
			unsigned int Pin9						:1;
			unsigned int Pin10						:1;
			unsigned int Pin11						:1;
			unsigned int Pin12						:1;
			unsigned int Pin13						:1;
			unsigned int Pin14						:1;
			unsigned int Pin15						:1;
			unsigned int Pin16						:1;
			unsigned int Pin17						:1;
			unsigned int Pin18						:1;
			unsigned int Pin19						:1;
			unsigned int Pin20						:1;
			unsigned int Pin21						:1;
			unsigned int Pin22						:1;
			unsigned int Pin23						:1;
			unsigned int Pin24						:1;
			unsigned int Pin25						:1;
			unsigned int Pin26						:1;
			unsigned int Pin27						:1;
			unsigned int Pin28						:1;
			unsigned int Pin29						:1;
			unsigned int Pin30						:1;
			unsigned int Pin31						:1;
			unsigned int Pin32						:1;

			//Digital Filter Configuration
			unsigned int ClockSource				:1;
			unsigned int							:31;		//Reserved
			
			//Digital Filter Length
			unsigned int FilterLength				:1;
			unsigned int							:31;		//Reserved
		} DigitalFilter;
	} PortE;
} volatile *pPORT_MemoryMap;

#pragma pack(pop)

#define PORTControl	((pPORT_MemoryMap)0x40049000u)
