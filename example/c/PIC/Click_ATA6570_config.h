#include "Click_ATA6570_types.h"

const uint32_t _ATA6570_SPI_CFG[ 4 ] = 
{ 
	_SPI_MASTER_OSC_DIV64, 
	_SPI_DATA_SAMPLE_MIDDLE, 
	_SPI_CLK_IDLE_LOW, 
	_SPI_HIGH_2_LOW
};

const uint32_t _ATA6570_UART_CFG[ 1 ] = 
{
	9600
};

