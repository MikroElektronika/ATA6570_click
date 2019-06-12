![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# ATA6570 Click

- **CIC Prefix**  : ATA6570
- **mikroSDK**    : YES
- **Author**      : MikroE Team
- **Verison**     : 1.0.0
- **Date**        : Jan 2018.

---


### Software Support

We provide a library for the ATA6570 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2294/ata6570-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

Library carries generic functions for registers writing and generic functions for 
communcation through CAN bus.

Key functions :

- ``` void ata6570_writeReg( const uint8_t address, uint8_t input ) ``` - Write register
- ``` uint8_t ata6570_readReg( const uint8_t address ) ``` - Read register
- ``` void ata6570_writeByte(uint8_t input) ``` - Send single byte through CAN bus
- ``` uint8_t ata6570_readByte() ``` - Read byte received through CAN bus
- ``` uint8_t ata6570_byteReady() ``` - Check for new data received 

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes SPI bus used for the configuration of the ATA6570 module, 
  UART bus used for communcation and another UART bus used for data logging
- Application Initialization - Initializes SPI and UART driver, both necessary. In addition to this
  module is palced inside normal working mode cappable of tranmission and reception of data.
- Application Task - (code snippet) - Tranismiter/Receiver task depend on uncommented code
  Receiver logging each received byte to the UART for data logging, while transmiter send message each
  2 seconds.


```.c
void applicationTask()
{
// RECEIVER
#ifdef __RX__
    if (ata6570_byteReady())
    {
        tmp = ata6570_readByte();
        mikrobus_logWrite( &tmp, _LOG_BYTE );
    }
#endif

// TRANSMITER
#ifdef __TX__
    uint8_t cnt;
    for (cnt = 0; cnt < 9; cnt++)
    {
        ata6570_writeByte( MESSAGE_DATA[cnt] );
    }
    Delay_ms(2000);
#endif
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2294/ata6570-click) page.

mikroE Libraries used in the example:

- SPI 
- UART

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
