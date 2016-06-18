/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for System Integrated Module
#define RAM_8K									0001b
#define RAM_16K									0011b
#define OSC32K_SYSTEM_OSCILLATOR				00b
#define OSC32K_RTC_OSCILLATOR					10b
#define OSC32K_LPO_1KHZ							11b
#define FTM_FAULT_SOURCE_PIN					0b
#define FTM_FAULT_SOURCE_CMP_OUT				1b
#define FTM_CHANNEL_FTM1CH0_SIGNAL				00b
#define FTM_CHANNEL_CMP0_OUTPUT					01b
#define FTM_CHANNEL_CMP1_OUTPUT					10b
#define FTM_CHANNEL_USB_START_PULSE				11b
#define FTM_CLOCK_PIN0							0b
#define FTM_CLOCK_PIN1							1b
#define FTM_TRIGGER_SOURCE_HSCMP0				0b
#define FTM_TRIGGER_SOURCE_FTM1					1b
#define UART_TX_SOURCE_PIN						0b
#define UART_TX_SOURCE_PIN_FTM1					1b
#define UART_RX_SOURCE_RX_PIN					00b
#define UART_RX_SOURCE_CMP0						01b
#define UART_RX_SOURCE_CMP1						10b
#define ADC_TRIGGER_EXT_TRIGGER					0000b
#define ADC_TRIGGER_CMP0						0001b
#define ADC_TRIGGER_CMP1						0010b
#define ADC_TRIGGER_PIT0						0100b
#define ADC_TRIGGER_PIT1						0101b
#define ADC_TRIGGER_PIT2						0110b
#define ADC_TRIGGER_PIT3						0111b
#define ADC_TRIGGER_FTM0						1000b
#define ADC_TRIGGER_FTM1						1001b
#define ADC_TRIGGER_RTC_ALARM					1100b
#define ADC_TRIGGER_RTC_SEC						1101b
#define ADC_TRIGGER_LPT							1110b
#define PINCOUNT_ID_32							0010b
#define PINCOUNT_ID_48							0100b
#define PINCOUNT_ID_64							0101b
#define DEVICE_FAMILY_K10						000b
#define DEVICE_FAMILY_K20						001b
#define CLOCK_DEVIDE_1							0000b
#define CLOCK_DEVIDE_2							0001b
#define CLOCK_DEVIDE_3							0010b
#define CLOCK_DEVIDE_4							0011b
#define CLOCK_DEVIDE_5							0100b
#define CLOCK_DEVIDE_6							0101b
#define CLOCK_DEVIDE_7							0110b
#define CLOCK_DEVIDE_8							0111b
#define CLOCK_DEVIDE_9							1000b
#define CLOCK_DEVIDE_10							1001b
#define CLOCK_DEVIDE_11							1010b
#define CLOCK_DEVIDE_12							1011b
#define CLOCK_DEVIDE_13							1100b
#define CLOCK_DEVIDE_14							1101b
#define CLOCK_DEVIDE_15							1110b
#define CLOCK_DEVIDE_16							1111b
#define EEPROM_SIZE_2K							0011b
#define EEPROM_SIZE_1K							0100b
#define EEPROM_SIZE_512							0101b
#define EEPROM_SIZE_256							0110b
#define EEPROM_SIZE_128							0111b
#define EEPROM_SIZE_64							1000b
#define EEPROM_SIZE_32							1001b
#define EEPROM_SIZE_0							1111b
#define PROGRAM_FLASH_SIZE_32K					0011b
#define PROGRAM_FLASH_SIZE_64K					0101b
#define PROGRAM_FLASH_SIZE_128K					0111b
#define FLEXNVM_SIZE_0							0000b
#define FLEXNVM_SIZE_32K						0011b
#define PARTITION_CODE_32K_DATA1				0000b
#define PARTITION_CODE_24K_DATA					0001b
#define PARTITION_CODE_16K_DATA1				0010b
#define PARTITION_CODE_NO_DATA1					0011b
#define PARTITION_CODE_NO_DATA2					1000b
#define PARTITION_CODE_8K_DATA					1001b
#define PARTITION_CODE_16K_Data2				1010b
#define PARTITION_CODE_32K_DATA2				1011b
#define PARTITION_CODE_32K_DATA_RESERVED		1111b




//Memory map of System Integrated Module
typedef struct _SIM_MemoryMap {
	//System Options Register
	struct {
		//System Options Registers 1 (SIM_SOPT1)
		unsigned int							:12;
		unsigned int RamSize					:6;
		unsigned int Osc32kClockSelect			:2;
		unsigned int							:9;
		unsigned int USBVoltRegulatorStandby	:1;
		unsigned int USBVoltRegulatorStop		:1;
		unsigned int USBVoltRegulatorEnable		:1;

		//SOPT1 Configuration Register (SIM_SOPT1CFG)
		unsigned int							:24;
		unsigned int USBVoltWriteEnable			:1;
		unsigned int USBVoltStandbyWriteEnable	:1;
		unsigned int USBVoltStopWriteEnable		:1;
		unsigned int							:5;
		unsigned int							:32736;

		//System Options Register 2 (SIM_SOPT2)
		unsigned int							:4;
		unsigned int RTCClockOutSelect			:1;
		unsigned int ClockOutSelect				:2;
		unsigned int							:3;
		unsigned int PTD7DriveStrength			:1;
		unsigned int DebugTraceClockSelect		:1;
		unsigned int							:3;
		unsigned int PLLFLLClockSelect			:1;
		unsigned int							:1;
		unsigned int USBClockSourceSelect		:1;
		unsigned int							:13;

		unsigned int							:32;

		//System Options Register 4 (SIM_SOPT4)
		unsigned int FTM0Fault0Select			:1;
		unsigned int FTM0Fault1Select			:1;
		unsigned int							:2;
		unsigned int FTM1Fault0Select			:1;
		unsigned int							:13;
		unsigned int FTM1Ch0SourceSelect		:2;
		unsigned int							:4;
		unsigned int FTM0ClockPinSelect			:1;
		unsigned int FTM1ClockPinSelect			:1;
		unsigned int							:2;
		unsigned int FTM0Trigger0SourceSelect	:1;
		unsigned int							:2;

		//System Options Register 5 (SIM_SOPT5)
		unsigned int UART0TxSource				:1;
		unsigned int							:1;
		unsigned int UART0RxSource				:2;
		unsigned int UART1TxSource				:1;
		unsigned int							:1;
		unsigned int UART1RxSource				:2;
		unsigned int							:24;

		unsigned int							:32;

		//System Options Register 7 (SIM_SOPT7)
		unsigned int ADC0TriggerSelect			:4;
		unsigned int ADC0PretriggerSelect		:1;
		unsigned int							:2;
		unsigned int ADC0AlternateTriggerEnable	:1;
		unsigned int							:24;
		unsigned int							:64;
	} SystemOptions;

	//System Device Identification Register (SIM_SDID)
	struct {
		unsigned int PincountID					:4;
		unsigned int FamilyID					:3;
		unsigned int							:5;
		unsigned int DeviceRevisionNr			:4;
		unsigned int							:16;
		unsigned int							:96;
	} DeviceIdentification;

	//System Clock Gating Control
	struct {
		//System Clock Gating Control Register 4 (SIM_SCGC4)
		unsigned int							:1;
		unsigned int EWMEnable					:1;
		unsigned int CMTEnable					:1;
		unsigned int							:3;
		unsigned int I2C0Enable					:1;
		unsigned int							:3;
		unsigned int UART0Enable				:1;
		unsigned int UART1Enable				:1;
		unsigned int UART2Enable				:1;
		unsigned int							:5;
		unsigned int USBEnable					:1;
		unsigned int ComparatorEnable			:1;
		unsigned int VRefEnable					:1;
		unsigned int							:11;

		//System Clock Gating Control Register 5 (SIM_SCGC5)
		unsigned int LowPowerTimerAccess		:1;
		unsigned int							:4;
		unsigned int TSIEnable					:1;
		unsigned int							:3;
		unsigned int PortAEnable				:1;
		unsigned int PortBEnable				:1;
		unsigned int PortCEnable				:1;
		unsigned int PortDEnable				:1;
		unsigned int PortEEnable				:1;
		unsigned int							:18;

		//System Clock Gating Control Register 6 (SIM_SCGC6)
		unsigned int FlashEnable				:1;
		unsigned int DMAMuxEnable				:1;
		unsigned int							:10;
		unsigned int SPI0Enable					:1;
		unsigned int							:2;
		unsigned int I2SEnable					:1;
		unsigned int							:2;
		unsigned int CRCEnable					:1;
		unsigned int							:2;
		unsigned int USBDCDEnable				:1;
		unsigned int PDBEnable					:1;
		unsigned int PITEnable					:1;
		unsigned int FTM0Enable					:1;
		unsigned int FTM1Enable					:1;
		unsigned int							:1;
		unsigned int ADC0Enable					:1;
		unsigned int							:1;
		unsigned int RTCAccessEnable			:1;
		unsigned int							:2;

		//System Clock Gating Control Register 7 (SIM_SCGC7)
		unsigned int							:1;
		unsigned int DMAEnable					:1;
		unsigned int							:30;
	} ClockGateControls;

	//System Clock Divider
	struct {
		//System Clock Divider Register 1 (SIM_CLKDIV1)
		unsigned int							:16;		//Reserved
		unsigned int Clock4OutputDivider		:4;
		unsigned int							:4;			//Reserved
		unsigned int Clock2OutputDivider		:4;
		unsigned int Clock1OutputDivider		:4;

		//System Clock Divider Register 2 (SIM_CLKDIV2)
		unsigned int USBClockDividerFraction	:1;
		unsigned int USBClockDividerDevisor		:3;
		unsigned int							:28;		//Spacing for alignment
	} ClockDividers;

	//Flash Configuration Register
	struct {
		//Flash Configuration Register 1 (SIM_FCFG1)
		unsigned int FlashDisable				:1;
		unsigned int FalshDoze					:1;
		unsigned int							:6;			//Reserved
		unsigned int FlexNVMPartition			:4;
		unsigned int							:4;			//Reserved
		unsigned int EEPROMSize					:4;
		unsigned int							:4;			//Reserved
		unsigned int ProgramFlashSize			:4;
		unsigned int FlexNVMSize				:4;

		//Flash Configuration Register 2 (SIM_FCFG2)
		unsigned int							:16;		//Reserved
		unsigned int MaxAddressBlock1			:7;
		unsigned int ProgramFlash				:1;
		unsigned int MaxAddressBlock0			:7;
		unsigned int							:1;			//Reserved
	} FlashConfigurations;

	//Unique Identification Register Low to High
	struct {
		unsigned int UniqueIDHigh;
		unsigned int UniqueIDMidHigh;
		unsigned int UniqueIDMidLow;
		unsigned int UniqueIDLow;
	} UniqueIdentification;
} volatile *pSIM_MemoryMap;

#pragma pack(pop)

#define SysIntModule	((pSIM_MemoryMap)0x40047000u)
