#pragma once

#define ENABLE		1
#define DISABLE		0
#define ON			1
#define OFF			0
#define HIGH		1
#define LOW			0

#define BitMask(n)	(1<<n)
#define SetBit(Register, Bit)	(*(Register) |= BitMask(Bit))
#define ClearBit(Register, Bit)	(*(Register) &= (~BitMask(Bit)))
#define GetBit(Register, Bit)	((*(Register) & BitMask(Bit))>>Bit)
