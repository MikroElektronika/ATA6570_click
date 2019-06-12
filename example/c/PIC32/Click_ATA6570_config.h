#include "Click_ATA6570_types.h"

const uint32_t _ATA6570_SPI_CFG[ 7 ] = 
{ 
	_SPI_MASTER, 
	_SPI_8_BIT, 
	80, 
	_SPI_SS_DISABLE, 
	_SPI_DATA_SAMPLE_MIDDLE, 
	_SPI_CLK_IDLE_LOW, 
	_SPI_ACTIVE_2_IDLE
};

const uint32_t _ATA6570_UART_CFG[ 1 ] = 
{
	9600
};

