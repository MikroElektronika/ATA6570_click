#line 1 "E:/git/click-boards/ATA6570_Click/SW/example/c/ARM/STM/Click_ATA6570_STM.c"
#line 1 "e:/git/click-boards/ata6570_click/sw/example/c/arm/stm/click_ata6570_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "e:/git/click-boards/ata6570_click/sw/example/c/arm/stm/click_ata6570_config.h"
#line 1 "e:/git/click-boards/ata6570_click/sw/example/c/arm/stm/click_ata6570_types.h"
#line 3 "e:/git/click-boards/ata6570_click/sw/example/c/arm/stm/click_ata6570_config.h"
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
#line 1 "e:/git/click-boards/ata6570_click/sw/library/__ata6570_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 57 "e:/git/click-boards/ata6570_click/sw/library/__ata6570_driver.h"
extern const uint8_t _ATA6570_DMCR ;
extern const uint8_t _ATA6570_DMSR ;
extern const uint8_t _ATA6570_SECR ;
extern const uint8_t _ATA6570_GPM0 ;
extern const uint8_t _ATA6570_GPM1 ;
extern const uint8_t _ATA6570_GPM2 ;
extern const uint8_t _ATA6570_GPM3 ;
extern const uint8_t _ATA6570_RWPR ;

extern const uint8_t _ATA6570_TRXCR ;
extern const uint8_t _ATA6570_TRXSR ;
extern const uint8_t _ATA6570_TRXECR ;
extern const uint8_t _ATA6570_DRCR ;
extern const uint8_t _ATA6570_CIDR0 ;
extern const uint8_t _ATA6570_CIDR1 ;
extern const uint8_t _ATA6570_CIDR2 ;
extern const uint8_t _ATA6570_CIDR3 ;
extern const uint8_t _ATA6570_CIDMR0 ;
extern const uint8_t _ATA6570_CIDMR1 ;
extern const uint8_t _ATA6570_CIDMR2 ;
extern const uint8_t _ATA6570_CIDMR3 ;
extern const uint8_t _ATA6570_CFCR ;
extern const uint8_t _ATA6570_BFECR ;
extern const uint8_t _ATA6570_BFIR ;
extern const uint8_t _ATA6570_TRXECR2 ;
extern const uint8_t _ATA6570_TRXESR2 ;
extern const uint8_t _ATA6570_WDCR1 ;
extern const uint8_t _ATA6570_WDCR2 ;
extern const uint8_t _ATA6570_WDSR ;
extern const uint8_t _ATA6570_WDTRIG ;
extern const uint8_t _ATA6570_EFCR ;
extern const uint8_t _ATA6570_FECR ;
extern const uint8_t _ATA6570_GLFT ;
extern const uint8_t _ATA6570_CDMR0 ;
extern const uint8_t _ATA6570_CDMR1 ;
extern const uint8_t _ATA6570_CDMR2 ;
extern const uint8_t _ATA6570_CDMR3 ;
extern const uint8_t _ATA6570_CDMR4 ;
extern const uint8_t _ATA6570_CDMR5 ;
extern const uint8_t _ATA6570_CDMR6 ;
extern const uint8_t _ATA6570_CDMR7 ;

extern const uint8_t _ATA6570_PWKS ;
extern const uint8_t _ATA6570_WKECR ;

extern const uint8_t _ATA6570_GESR ;
extern const uint8_t _ATA6570_SESR ;
extern const uint8_t _ATA6570_WKESR ;

extern const uint8_t _ATA6570_DIDR ;

extern const uint8_t _ATA6570_FUDI ;
extern const uint8_t _ATA6570_FUDO ;
extern const uint8_t _ATA6570_FUSEL ;
extern const uint8_t _ATA6570_BGCAL ;
extern const uint8_t _ATA6570_FRCCAL ;
extern const uint8_t _ATA6570_HRCCALL ;
extern const uint8_t _ATA6570_HRCCALH ;



extern const uint8_t _ATA6570_OPMODE_NORMAL ;
extern const uint8_t _ATA6570_OPMODE_SLEEP ;
extern const uint8_t _ATA6570_OPMODE_STBY ;
#line 130 "e:/git/click-boards/ata6570_click/sw/library/__ata6570_driver.h"
void ata6570_spiDriverInit( const uint8_t*  gpioObj,  const uint8_t*  spiObj);
#line 136 "e:/git/click-boards/ata6570_click/sw/library/__ata6570_driver.h"
void ata6570_uartDriverInit( const uint8_t*  gpioObj,  const uint8_t*  uartObj);
#line 150 "e:/git/click-boards/ata6570_click/sw/library/__ata6570_driver.h"
void ata6570_writeReg( const uint8_t address, uint8_t input );
#line 161 "e:/git/click-boards/ata6570_click/sw/library/__ata6570_driver.h"
uint8_t ata6570_readReg( const uint8_t address );
#line 173 "e:/git/click-boards/ata6570_click/sw/library/__ata6570_driver.h"
void ata6570_writeByte(uint8_t input);
#line 185 "e:/git/click-boards/ata6570_click/sw/library/__ata6570_driver.h"
uint8_t ata6570_readByte();
#line 197 "e:/git/click-boards/ata6570_click/sw/library/__ata6570_driver.h"
uint8_t ata6570_byteReady();
#line 34 "E:/git/click-boards/ATA6570_Click/SW/example/c/ARM/STM/Click_ATA6570_STM.c"
const uint8_t MESSAGE_DATA[9] = { 'M', 'i', 'k', 'r', 'o', 'E', 13, 10, 0 };

void systemInit()
{
 GPIO_Digital_Output( &GPIOB_BASE, _GPIO_PINMASK_ALL );

 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );

 mikrobus_spiInit( _MIKROBUS1, &_ATA6570_SPI_CFG[0] );
 mikrobus_uartInit( _MIKROBUS1, &_ATA6570_UART_CFG[0] );
 mikrobus_logInit( _LOG_USBUART_A, 9600 );

 Delay_ms( 100 );
}

void applicationInit()
{
 ata6570_spiDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_SPI );
 ata6570_uartDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_UART );
 mikrobus_logWrite( "Initialized", _LOG_LINE );
 Delay_ms( 100 );

 ata6570_writeReg( _ATA6570_DMCR, _ATA6570_OPMODE_NORMAL );
 mikrobus_logWrite( "ATA6570 Normal mode", _LOG_LINE );

 GPIOB_ODR = 0xFF;
 Delay_ms( 1000 );
}

void applicationTask()
{
 uint8_t tmp;
 uint8_t rdyFlag;



 rdyFlag = ata6570_byteReady();

 if (1 == rdyFlag)
 {
 tmp = ata6570_readByte();
 GPIOB_ODR = tmp;
 Delay_ms( 1000 );
 GPIOB_ODR = ~tmp;
 Delay_ms( 1000 );

 }
#line 92 "E:/git/click-boards/ATA6570_Click/SW/example/c/ARM/STM/Click_ATA6570_STM.c"
}

void main()
{
 systemInit();
 applicationInit();

 while (1)
 {
 applicationTask();
 }
}
