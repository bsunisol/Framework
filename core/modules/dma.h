/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for Direct Memory Access Module
#define DMA_SOURCE_DISABELD						0
#define DMA_SOURCE_UART0_RECEIVE				2
#define DMA_SOURCE_UART0_TRANSMIT				3
#define DMA_SOURCE_UART1_RECEIVE				4
#define DMA_SOURCE_UART1_TRANSMIT				5
#define DMA_SOURCE_UART2_RECEIVE				6
#define DMA_SOURCE_UART2_TRANSMIT				7
#define DMA_SOURCE_I2S_RECEIVE					14
#define DMA_SOURCE_I2S_TRANSMIT					15
#define DMA_SOURCE_SPI_RECEIVE					16
#define DMA_SOURCE_SPI_TRANSMIT					17
#define DMA_SOURCE_I2C							22
#define DMA_SOURCE_FTM0_CH0						24
#define DMA_SOURCE_FTM0_CH1						25
#define DMA_SOURCE_FTM0_CH2						26
#define DMA_SOURCE_FTM0_CH3						27
#define DMA_SOURCE_FTM0_CH4						28
#define DMA_SOURCE_FTM0_CH5						29
#define DMA_SOURCE_FTM0_CH6						30
#define DMA_SOURCE_FTM0_CH7						31
#define DMA_SOURCE_FTM1_CH0						32
#define DMA_SOURCE_FTM1_CH1						33
#define DMA_SOURCE_ADC							40
#define DMA_SOURCE_CMP0							42
#define DMA_SOURCE_CMP1							43
#define DMA_SOURCE_CMT							47
#define DMA_SOURCE_PDB							48
#define DMA_SOURCE_PORTA						49
#define DMA_SOURCE_PORTB						50
#define DMA_SOURCE_PORTC						51
#define DMA_SOURCE_PORTD						52
#define DMA_SOURCE_PORTE						53
#define DMA_SIZE_8BIT							000b
#define DMA_SIZE_16BIT							001b
#define DMA_SIZE_32BIT							010b
#define DMA_SIZE_16BYTE							100b
#define DMA_SIZE_32BYTE							101b
#define DMA_BANDWITH_NO_STALLS					00b
#define DMA_BANDWITH_4_STALLS					10b
#define DMA_BANDWITH_8_STALLS					11b





//Memory map of Direct Memory Access Multiplexer Module
typedef struct _DMAMUX_MemoryMap {
	//Direct Memory Access Multiplexer Register
	struct {
		unsigned int Source						:6;
		unsigned int Trigger					:1;
		unsigned int ChannelEnable				:1;
	} ChannelConfigurationRegister[16];
} volatile *pDMAMUX_MemoryMap;

//Memory map of Direct Memory Access Module
typedef struct _DMA_MemoryMap {
	//Control Register
	struct {
		unsigned int							:1;
		unsigned int DebugMode					:1;
		unsigned int RoundRobinChnlArbitration	:1;
		unsigned int							:1;
		unsigned int HaltOnError				:1;
		unsigned int HaltOperation				:1;
		unsigned int ContinuousLinkMode			:1;
		unsigned int MinorLoopMapping			:1;
		unsigned int							:8;
		unsigned int ErrorCancelTransfer		:1;
		unsigned int CancelTransfer				:1;
		unsigned int							:14;
	} Control;

	//Error Status Register
	struct {
		unsigned int DestinationBusError		:1;
		unsigned int SourceBusError				:1;
		unsigned int ScatterGatherConfigError	:1;
		unsigned int NBYTESCITERConfigError		:1;
		unsigned int DestinationOffsetError		:1;
		unsigned int DestinationAddressError	:1;
		unsigned int ErrorCancelledChnlNumber	:2;
		unsigned int							:4;
		unsigned int ChannelPriorityError		:1;
		unsigned int							:1;
		unsigned int TransferCancelled			:1;
		unsigned int							:14;
		unsigned int LogicOrErrorBits			:1;
	} ErrorStatus;

	//Enable Request Register
	struct {
		unsigned int Channel0					:1;
		unsigned int Channel1					:1;
		unsigned int Channel2					:1;
		unsigned int Channel3					:1;
		unsigned int							:28;
	} Request;

	//Enable Error Interrupt Register
	struct {
		unsigned int Channel0					:1;
		unsigned int Channel1					:1;
		unsigned int Channel2					:1;
		unsigned int Channel3					:1;
		unsigned int							:28;
	} ErrorInterrupt;

	//Clear Enable Error Interrupt Register
	struct {
		unsigned int ClearInterruptOnNr			:2;
		unsigned int							:4;
		unsigned int ClearAll					:1;
		unsigned int IgnoreRegister				:1;
	} ClearErrorInterrupt;

	//Set Enable Error Interrupt Register
	struct {
		unsigned int SetInterrtupOnNr			:2;
		unsigned int							:4;
		unsigned int SetAll						:1;
		unsigned int IgnoreRegister				:1;
	} SetErrorInterrupt;

	//Clear Enable Request Register
	struct {
		unsigned int ClearRequestOnNr			:2;
		unsigned int							:4;
		unsigned int ClearAll					:1;
		unsigned int IgnoreRegister				:1;
	} ClearRequest;

	//Set Enable Request Register
	struct {
		unsigned int SetRequestOnNr				:2;
		unsigned int							:4;
		unsigned int SetAll						:1;
		unsigned int IgnoreRegister				:1;
	} SetReqeust;

	//Clear DONE Status Bit Register
	struct {
		unsigned int ClearDONEStatusBitOnNr		:2;
		unsigned int							:4;
		unsigned int ClearAll					:1;
		unsigned int IgnoreRegister				:1;
	} ClearDONEStatus;

	//Set Start Bit Register
	struct {
		unsigned int SetStartBitOnNr			:2;
		unsigned int							:4;
		unsigned int SetAll						:1;
		unsigned int IgnoreRegister				:1;
	} SetStartBit;

	//Clear Error Register
	struct {
		unsigned int ClearErrorOnNr				:2;
		unsigned int							:4;
		unsigned int ClearAll					:1;
		unsigned int IgnoreRegister				:1;
	} ClearError;

	//Clear Interrupt Request Register
	struct {
		unsigned int ClearInterruptOnNr			:2;
		unsigned int							:4;
		unsigned int ClearAll					:1;
		unsigned int IgnoreRegister				:1;
	} ClearInterrupt;

	//Interrupt Request Register
	struct {
		unsigned int Request0					:1;
		unsigned int Request1					:1;
		unsigned int Request2					:1;
		unsigned int Request3					:1;
		unsigned int							:28;
	} InterruptRequest;

	//Error Register
	struct {
		unsigned int ErrorInChannel0			:1;
		unsigned int ErrorInChannel1			:1;
		unsigned int ErrorInChannel2			:1;
		unsigned int ErrorInChannel3			:1;
		unsigned int							:28;
	} ErrorRegister;

	//Hardware Request Status Register
	struct {
		unsigned int Channel0					:1;
		unsigned int Channel1					:1;
		unsigned int Channel2					:1;
		unsigned int Channel3					:1;
		unsigned int							:28;
	} HardwareRequestStatus;

	//Channel n Priority Register
	struct {
		unsigned int ArbitrationPriority		:2;
		unsigned int							:4;
		unsigned int DisablePreemptAbility		:1;
		unsigned int EnableChannelPreemption	:1;
	} ChannelPriorityRegister[4];

	//Transfer Control Descriptor
	struct {
		unsigned int SourceAddress				:32;
		  signed int SignedSourceAddrOffset		:16;
		unsigned int DestinationDataSize		:3;
		unsigned int DestinationAddressMudolo	:5;
		unsigned int SourceDataSize				:3;
		unsigned int SourceAddressModulo		:5;
		unsigned int MinorByteCount				:32;
		unsigned int SignedMinorLoopOffset		:30;
		unsigned int DestinationMinorLoopOffset	:1;
		unsigned int SourceMinorLoopOffset		:1;
		unsigned int LastSourceAddressAdjust	:32;
		unsigned int DestinationAddress			:32;
		  signed int SignedDestinationAddrOffset:16;
		// CITER ELINKYES / CITER ELINKNO
		union {
			//CITER ELINKYES
			struct {
				unsigned int CurrentMajorIterationCount	:9;
				unsigned int LinkChannelNumber			:2;
				unsigned int							:4;
				unsigned int EnableLinkingMinorComplete	:1;
			} ELINKYES;
			//CITER ELINKNO
			struct {
				unsigned int CurrentMajorIterationCnt	:15;
				unsigned int EnableLinkingMinorComplete :1;
			} ELINKNO;
		} CITERELINK;
		unsigned int LastDestinationAddressAdjust	:32;
		unsigned int ChannelStart					:1;
		unsigned int InterruptOnMajorComplete		:1;
		unsigned int InterruptOnHalfMajorComplete	:1;
		unsigned int DisableRequest					:1;
		unsigned int EnableScatterGatherProcessing	:1;
		unsigned int EnableLinkingMajorComplete		:1;
		unsigned int Active							:1;
		unsigned int Done							:1;
		unsigned int LinkChannelNr					:2;
		unsigned int								:4;
		unsigned int BandwithControl				:2;
		//BITER ELINKYES / BITER ELINKNO
		union {
			//BITER ELINKYES
			struct {
				unsigned int StartMajorIterationCnt		:9;
				unsigned int LinkCHannelNr				:2;
				unsigned int							:4;
				unsigned int EnableLinkingMinorComplete	:1;
			} ELINKYES;
			//BITER ELINKNO
			struct {
				unsigned int StartingMajorIterationCnt	:15;
				unsigned int EnableLinkingMinorComplete	:1;
			} ELINKNO;
		}BITERELINK;
	} TransferControlDescriptor[5];
} volatile *pDMA_MemoryMap;


#pragma pack(pop)

#define DirectMemoryAccessMultiplexer	((pDMAMUX_MemoryMap)0x40021000u)
#define DirectMemoryAccessController	((pDMA_MemoryMap)0x40008000u)

