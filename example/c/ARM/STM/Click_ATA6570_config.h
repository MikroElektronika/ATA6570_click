#include "Click_ATA6570_types.h"

const uint32_t _ATA6570_UART_CFG[ 4 ] = 
{
    9600, 
    _UART_8_BIT_DATA, 
    _UART_NOPARITY, 
    _UART_ONE_STOPBIT
};

const uint32_t _ATA6570_SPI_CFG[ 2 ] =
{
	_SPI_FPCLK_DIV256,
	_SPI_SECOND_CLK_EDGE_TRANSITION |
	_SPI_CLK_IDLE_LOW |
	_SPI_MASTER |
	_SPI_MSB_FIRST |
	_SPI_8_BIT |
	_SPI_SSM_ENABLE |
	_SPI_SS_DISABLE |
	_SPI_SSI_1
};