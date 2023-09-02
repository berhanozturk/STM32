/**
  ******************************************************************************
  * @file    main.c
  * @author  berhanozturk
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/

// PC8
#include <stdint.h>

int main(void)
{
	uint32_t *ptrClock = (uint32_t*) 0x40021018;
	uint32_t *ptrPort = (uint32_t*) 0x40011000;
	uint32_t *ptrEn = (uint32_t*) 0x4001100C;

	//Enable the clock for GPIOC peripheral in the APB2ENR
	*ptrClock |= 0x16;
	//set 00 for 17 16
	*ptrPort &= 0xFFFCFFFF;
	//set the 8th bit of the output data register to make I/0 pin-8 as HIGH
	*ptrEn |= 0x0100;

	while(1);
}
