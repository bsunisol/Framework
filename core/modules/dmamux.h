/*
 *
 */

#pragma once
#pragma pack(push,1)

//Labels for Power Management Module
#define DMA_SOURCE_DISABELD						0;
#define DMA_SOURCE_UART0_RECEIVE				2;
#define DMA_SOURCE_UART0_TRANSMIT				3;
#define DMA_SOURCE_UART1_RECEIVE				4;
#define DMA_SOURCE_UART1_TRANSMIT				5;
#define DMA_SOURCE_UART2_RECEIVE				6;
#define DMA_SOURCE_UART2_TRANSMIT				7;
#define DMA_SOURCE_I2S_RECEIVE					14;
#define DMA_SOURCE_I2S_TRANSMIT					15;
#define DMA_SOURCE_SPI_RECEIVE					16;
#define DMA_SOURCE_SPI_TRANSMIT					17;
#define DMA_SOURCE_I2C							22;
#define DMA_SOURCE_FTM0_CH0						24;
#define DMA_SOURCE_FTM0_CH1						25;
#define DMA_SOURCE_FTM0_CH2						26;
#define DMA_SOURCE_FTM0_CH3						27;
#define DMA_SOURCE_FTM0_CH4						28;
#define DMA_SOURCE_FTM0_CH5						29;
#define DMA_SOURCE_FTM0_CH6						30;
#define DMA_SOURCE_FTM0_CH7						31;
#define DMA_SOURCE_FTM1_CH0						32;
#define DMA_SOURCE_FTM1_CH1						33;
#define DMA_SOURCE_ADC							40;
#define DMA_SOURCE_CMP0							42;
#define DMA_SOURCE_CMP1							43;
#define DMA_SOURCE_CMT							47;
#define DMA_SOURCE_PDB							48;
#define DMA_SOURCE_PORTA						49;
#define DMA_SOURCE_PORTB						50;
#define DMA_SOURCE_PORTC						51;
#define DMA_SOURCE_PORTD						52;
#define DMA_SOURCE_PORTE						53;




//Memory map of Power Management Module
typedef struct _DMAMUX_MemoryMap {
	struct {
		unsigned int Source						:6;
		unsigned int Trigger					:1;
		unsigned int ChannelEnable				:1;
	} ChannelConfigurationRegister[16];
	//Power Management Control Register
} volatile *pDMAMUX_MemoryMap;

#pragma pack(pop)

#define DMAMUXModule	((pDMAMUX_MemoryMap)0x40021000u)
