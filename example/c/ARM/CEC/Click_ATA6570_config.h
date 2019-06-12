#include "Click_ATA6570_types.h"

const uint32_t _ATA6570_SPI_CFG[ 3 ] = 
{ 
	1000000,  
	_SPI_MSB_FIRST, 
	_SPI_CLK_IDLE_LOW | 
	_SPI_SAMPLE_DATA_FALLING_EDGE 
};

const uint32_t _ATA6570_UART_CFG[ 4 ] = 
{
	9600, 
	_UART_8_BIT_DATA, 
    _UART_NOPARITY, 
    _UART_ONE_STOPBIT
};
