/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for System Integrated Module
#define RAM_8K						0001b
#define RAM_16k						0011b
#define OSC32K_SYSTEM_OSCILLATOR	00b
#define OSC32K_RTC_OSCILLATOR		10b
#define OSC32K_LPO_1KHZ				11b
#define FTM_FAULT_SOURCE_PIN		0b
#define FTM_FAULT_SOURCE_CMP_OUT	1b
#define FTM_CHANNEL_FTM1CH0_SIGNAL	00b
#define FTM_CHANNEL_CMP0_OUTPUT		01b
#define FTM_CHANNEL_CMP1_OUTPUT		10b
#define FTM_CHANNEL_USB_START_PULSE	11b
#define FTM_CLOCK_PIN0				0b
#define FTM_CLOCK_PIN1				1b
#define FTM_TRIGGER_SOURCE_HSCMP0	0b
#define FTM_TRIGGER_SOURCE_FTM1		1b
#define UART_TX_SOURCE_PIN			0b
#define UART_TX_SOURCE_PIN_FTM1		1b
#define UART_RX_SOURCE_RX_PIN		00b
#define UART_RX_SOURCE_CMP0			01b
#define UART_RX_SOURCE_CMP1			10b
#define ADC_TRIGGER_EXT_TRIGGER		0000b
#define ADC_TRIGGER_CMP0			0001b
#define ADC_TRIGGER_CMP1			0010b
#define ADC_TRIGGER_PIT0			0100b
#define ADC_TRIGGER_PIT1			0101b
#define ADC_TRIGGER_PIT2			0110b
#define ADC_TRIGGER_PIT3			0111b
#define ADC_TRIGGER_FTM0			1000b
#define ADC_TRIGGER_FTM1			1001b
#define ADC_TRIGGER_RTC_ALARM		1100b
#define ADC_TRIGGER_RTC_SEC			1101b
#define ADC_TRIGGER_LPT				1110b
#define PINCOUNT_ID_32				0010b
#define PINCOUNT_ID_48				0100b
#define PINCOUNT_ID_64				0101b
#define DEVICE_FAMILY_K10			000b
#define DEVICE_FAMILY_K20			001b




//Memory map of System Integrated Module
typedef struct _SysIntMod {
	//System Options Register 1 (SIM_SOPT1)
	struct {
		unsigned int							:12;
		unsigned int RamSize					:6;
		unsigned int Osc32kClockSelect			:2;
		unsigned int							:9;
		unsigned int USBVoltRegulatorStandby	:1;
		unsigned int USBVoltRegulatorStop		:1;
		unsigned int USBVoltRegulatorEnable		:1;
	} Opt1;

	//SOPT1 Configuration Register (SIM_SOPT1CFG)
	struct {
		unsigned int							:24;
		unsigned int USBVoltWriteEnable			:1;
		unsigned int USBVoltStandbyWriteEnable	:1;
		unsigned int USBVoltStopWriteEnable		:1;
		unsigned int							:5;
	} Opt1Cfg;

	//System Options Register 2 (SIM_SOPT2)
	struct {
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
	} Opt2;

	//System Options Register 4 (SIM_SOPT4)
	struct {
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
	} Opt4;

	//System Options Register 5 (SIM_SOPT5)
	struct {
		unsigned int UART0TxSource				:1;
		unsigned int							:1;
		unsigned int UART0RxSource				:2;
		unsigned int UART1TxSource				:1;
		unsigned int							:1;
		unsigned int UART1RxSource				:2;
		unsigned int							:24;
	} Opt5;

	//System Options Register 7 (SIM_SOPT7)
	struct {
		unsigned int ADC0TriggerSelect			:4;
		unsigned int ADC0PretriggerSelect		:1;
		unsigned int							:2;
		unsigned int ADC0AlternateTriggerEnable	:1;
		unsigned int							:24;
	} Opt7;

	//System Device Identification Register (SIM_SDID)
	struct {
		unsigned int PincountID					:4;
		unsigned int FamilyID					:3;
		unsigned int							:5;
		unsigned int DeviceRevisionNr			:4;
		unsigned int							:16;
	} DevID;

	//System Clock Gating Control Register 4 (SIM_SCGC4)
	struct {
	} ClkGatCnt4;

	//System Clock Gating Control Register 5 (SIM_SCGC5)
	struct {
	} ClkGatCnt5;

	//System Clock Gating Control Register 6 (SIM_SCGC6)
	struct {
	} ClkGatCnt6;

	//System Clock Gating Control Register 7 (SIM_SCGC7)
	struct {
	} ClkGatCnt7;

	//System Clock Divider Register 1 (SIM_CLKDIV1)
	struct {
	} ClkDiv1;

	//System Clock Divider Register 2 (SIM_CLKDIV2)
	struct {
	} ClkDiv2;

	//Flash Configuration Register 1 (SIM_FCFG1)
	struct {
	} FlashCfg1;

	//Flash Configuration Register 2 (SIM_FCFG2)
	struct {
	} FlashCfg2;

	//Unique Identification Register High (SIM_UIDH)
	struct {
	} UniIDHigh;

	//Unique Identification Register Mid-High (SIM_UIDMH)
	struct {
	} UniIDMidHigh;

	//Unique Identification Register Mid-Low (SIM_UIDML)
	struct {
	} UniIDMidLow;

	//Unique Identification Register Low (SIM_UIDL)
	struct {
	} UniIDLow;
};

#pragma pack(pop)
