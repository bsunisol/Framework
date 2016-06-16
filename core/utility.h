#pragma once

#define BitMask(n)	(1<<n)
#define SetBit(Register, Bit)	(*(Register |= BitMask(Bit))
#define ClearBit(Register, Bit)	(*Register &= (~BitMask(Bit)))
#define GetBit(Register, Bit)	((*Register & BitMask(Bit))>>Bit )
