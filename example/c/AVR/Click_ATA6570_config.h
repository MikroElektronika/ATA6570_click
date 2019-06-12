#include "Click_ATA6570_types.h"

const uint32_t _ATA6570_SPI_CFG[ 3 ] = 
{ 
	_SPI_MASTER, 
	_SPI_FCY_DIV32, 
	_SPI_CLK_LO_TRAILING
};

const uint32_t _ATA6570_UART_CFG [ 3 ] = 
{
	9600, 
	_UART_NOPARITY, 
	_UART_ONE_STOPBIT
};
