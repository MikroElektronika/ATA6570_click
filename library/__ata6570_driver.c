/*
    __ata6570_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__ata6570_driver.h"
#include "__ata6570_hal.c"

/* ------------------------------------------------------------------- MACROS */



/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __ATA6570_DRV_I2C__
static uint8_t _slaveAddress;
#endif

const uint8_t _ATA6570_DMCR       = 0x01;
const uint8_t _ATA6570_DMSR       = 0x03;
const uint8_t _ATA6570_SECR       = 0x04;
const uint8_t _ATA6570_GPM0       = 0x06;
const uint8_t _ATA6570_GPM1       = 0x07;
const uint8_t _ATA6570_GPM2       = 0x08;
const uint8_t _ATA6570_GPM3       = 0x09;
const uint8_t _ATA6570_RWPR       = 0x0A;

const uint8_t _ATA6570_TRXCR      = 0x20;
const uint8_t _ATA6570_TRXSR      = 0x22;
const uint8_t _ATA6570_TRXECR     = 0x23;
const uint8_t _ATA6570_DRCR       = 0x26;
const uint8_t _ATA6570_CIDR0      = 0x27;
const uint8_t _ATA6570_CIDR1      = 0x28;
const uint8_t _ATA6570_CIDR2      = 0x29;
const uint8_t _ATA6570_CIDR3      = 0x2A;
const uint8_t _ATA6570_CIDMR0     = 0x2B;
const uint8_t _ATA6570_CIDMR1     = 0x2C;
const uint8_t _ATA6570_CIDMR2     = 0x2D;
const uint8_t _ATA6570_CIDMR3     = 0x2E;
const uint8_t _ATA6570_CFCR       = 0x2F;
const uint8_t _ATA6570_BFECR      = 0x32;
const uint8_t _ATA6570_BFIR       = 0x33;
const uint8_t _ATA6570_TRXECR2    = 0x34;
const uint8_t _ATA6570_TRXESR2    = 0x35;
const uint8_t _ATA6570_WDCR1      = 0x36;
const uint8_t _ATA6570_WDCR2      = 0x37;
const uint8_t _ATA6570_WDSR       = 0x38;
const uint8_t _ATA6570_WDTRIG     = 0x39;
const uint8_t _ATA6570_EFCR       = 0x3A;
const uint8_t _ATA6570_FECR       = 0x3B;
const uint8_t _ATA6570_GLFT       = 0x67;
const uint8_t _ATA6570_CDMR0      = 0x68;
const uint8_t _ATA6570_CDMR1      = 0x69;
const uint8_t _ATA6570_CDMR2      = 0x6A;
const uint8_t _ATA6570_CDMR3      = 0x6B;
const uint8_t _ATA6570_CDMR4      = 0x6C;
const uint8_t _ATA6570_CDMR5      = 0x6D;
const uint8_t _ATA6570_CDMR6      = 0x6E;
const uint8_t _ATA6570_CDMR7      = 0x6F;
const uint8_t _ATA6570_PWKS       = 0x4B;
const uint8_t _ATA6570_WKECR      = 0x4C;
const uint8_t _ATA6570_GESR       = 0x60;
const uint8_t _ATA6570_SESR       = 0x61;
const uint8_t _ATA6570_WKESR      = 0x64;

const uint8_t _ATA6570_DIDR       = 0x7E;

const uint8_t _ATA6570_OPMODE_SLEEP  = 0x01; 
const uint8_t _ATA6570_OPMODE_STBY   = 0x04;
const uint8_t _ATA6570_OPMODE_NORMAL = 0x07;

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __ATA6570_DRV_SPI__

void ata6570_spiDriverInit(T_ATA6570_P gpioObj, T_ATA6570_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );

    hal_gpio_csSet( 1 );
    Delay_100ms();
}

#endif
#ifdef   __ATA6570_DRV_I2C__

void ata6570_i2cDriverInit(T_ATA6570_P gpioObj, T_ATA6570_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );

    // ... power ON
    // ... configure CHIP
}

#endif
#ifdef   __ATA6570_DRV_UART__

void ata6570_uartDriverInit(T_ATA6570_P gpioObj, T_ATA6570_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif

/* ----------------------------------------------------------- IMPLEMENTATION */

void ata6570_writeReg( const uint8_t address, uint8_t input )
{
    uint8_t tmp[2];

    tmp[0] = (address << 1);
    tmp[1] = input;

    hal_gpio_csSet( 0 );
    hal_spiWrite( tmp, 2 );
    hal_gpio_csSet( 1 );

}

uint8_t ata6570_readReg( const uint8_t address )
{
    uint8_t tmp;

    tmp = (address << 1) | 0x01;

    hal_gpio_csSet( 0 );
    hal_spiWrite( &tmp, 1 );
    hal_spiRead( &tmp, 1 );
    hal_gpio_csSet( 1 );

    return tmp;
}

void ata6570_writeByte(uint8_t input)
{
    hal_uartWrite(input);
}

uint8_t ata6570_readByte()
{
    return hal_uartRead();
}

uint8_t ata6570_byteReady()
{
    return hal_uartReady();
}

/* -------------------------------------------------------------------------- */
/*
  __ata6570_driver.c

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */
