/*
Example for ATA6570 Click

    Date          : Dec 2017.
    Author        : MikroE Team

Test configuration dsPIC :
    
    MCU                : P33FJ256GP710A
    Dev. Board         : EasyPIC Fusion v7
    dsPIC Compiler ver : v7.0.1.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes SPI bus used for the configuration of the ATA6570 module, 
  UART bus used for communcation and another UART bus used for data logging
- Application Initialization - Initializes SPI and UART driver, both necessary. In addition to this
  module is palced inside normal working mode cappable of tranmission and reception of data.
- Application Task - (code snippet) - Tranismiter/Receiver task depend on uncommented code
  Receiver logging each received byte to the UART for data logging, while transmiter send message each
  2 seconds.

*/

#include "Click_ATA6570_types.h"
#include "Click_ATA6570_config.h"

const uint8_t MESSAGE_DATA[9] = { 'M', 'i', 'k', 'r', 'o', 'E', 13, 10, 0 };

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );

    mikrobus_spiInit( _MIKROBUS1, &_ATA6570_SPI_CFG[0] );
    mikrobus_uartInit( _MIKROBUS1, &_ATA6570_UART_CFG[0] );
    mikrobus_logInit( _MIKROBUS2, 9600 );

    Delay_ms( 100 );
}

void applicationInit()
{
    ata6570_spiDriverInit( (T_ATA6570_P)&_MIKROBUS1_GPIO, (T_ATA6570_P)&_MIKROBUS1_SPI );
    ata6570_uartDriverInit( (T_ATA6570_P)&_MIKROBUS1_GPIO, (T_ATA6570_P)&_MIKROBUS1_UART );
    mikrobus_logWrite( "Initialized", _LOG_LINE );
    Delay_ms( 100 );

    ata6570_writeReg( _ATA6570_DMCR, _ATA6570_OPMODE_NORMAL );
    mikrobus_logWrite( "ATA6570 Normal mode", _LOG_LINE );
}

void applicationTask()
{
    uint8_t tmp;
    uint8_t rdyFlag;

// RECEIVER - UART polling 

    rdyFlag = ata6570_byteReady();

    if (1 == rdyFlag)
    {
        tmp = ata6570_readByte();
        mikrobus_logWrite( &tmp, _LOG_BYTE );
    }

// TRANSMITER - TX each 2 sec
/*
    for (tmp = 0; tmp < 9; tmp++)
    {
        ata6570_writeByte( MESSAGE_DATA[tmp] );
    }
    
    mikrobus_logWrite( "MESSAGE SENT", _LOG_LINE );
    Delay_ms(2000);
*/
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
