/*
    __ata6570_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __ata6570_driver.h
@brief    ATA6570 Driver
@mainpage ATA6570 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   ATA6570
@brief      ATA6570 Click Driver
@{

| Global Library Prefix | **ATA6570** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Dec 2017.**      |
| Developer             | **MikroE Team**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _ATA6570_H_
#define _ATA6570_H_

/** 
 * @macro T_ATA6570_P
 * @brief Driver Abstract type 
 */
#define T_ATA6570_P    const uint8_t*

/** @defgroup ATA6570_COMPILE Compilation Config */              /** @{ */

   #define   __ATA6570_DRV_SPI__                            /**<     @macro __ATA6570_DRV_SPI__  @brief SPI driver selector */
//  #define   __ATA6570_DRV_I2C__                            /**<     @macro __ATA6570_DRV_I2C__  @brief I2C driver selector */                                          
  #define   __ATA6570_DRV_UART__                           /**<     @macro __ATA6570_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup ATA6570_REG ATA6570 Registers */                         /** @{ */

extern const uint8_t _ATA6570_DMCR    ;  /**< Device Mode Control Register */
extern const uint8_t _ATA6570_DMSR    ;  /**< Device Mode Status Register */
extern const uint8_t _ATA6570_SECR    ;  /**< System Event Capture Enable Register */
extern const uint8_t _ATA6570_GPM0    ;  /**< General Purpose Memory 0 */
extern const uint8_t _ATA6570_GPM1    ;  /**< General Purpose Memory 1 */
extern const uint8_t _ATA6570_GPM2    ;  /**< General Purpose Memory 2 */
extern const uint8_t _ATA6570_GPM3    ;  /**< General Purpose Memory 3 */
extern const uint8_t _ATA6570_RWPR    ;  /**< Register Write Protection Register */

extern const uint8_t _ATA6570_TRXCR   ;  /**< CAN Transceiver Control Register */
extern const uint8_t _ATA6570_TRXSR   ;  /**< CAN Transceiver Status Register */
extern const uint8_t _ATA6570_TRXECR  ;  /**< Transceiver Event Capture Enable Register */
extern const uint8_t _ATA6570_DRCR    ;  /**< Data Rate Configuration Register */
extern const uint8_t _ATA6570_CIDR0   ;  /**< CAN ID Register 0 */
extern const uint8_t _ATA6570_CIDR1   ;  /**< CAN ID Register 1 */
extern const uint8_t _ATA6570_CIDR2   ;  /**< CAN ID Register 2 */
extern const uint8_t _ATA6570_CIDR3   ;  /**< CAN ID Register 3 */
extern const uint8_t _ATA6570_CIDMR0  ;  /**< CAN ID Mask Register 0 */
extern const uint8_t _ATA6570_CIDMR1  ;  /**< CAN ID Mask Register 1 */ 
extern const uint8_t _ATA6570_CIDMR2  ;  /**< CAN ID Mask Register 2 */
extern const uint8_t _ATA6570_CIDMR3  ;  /**< CAN ID Mask Register 3 */
extern const uint8_t _ATA6570_CFCR    ;  /**< CAN Frame Configuration Register */
extern const uint8_t _ATA6570_BFECR   ;  /**< Bus Failure Event Capture Enable Register */
extern const uint8_t _ATA6570_BFIR    ;  /**< Bus Failure Indication Register */
extern const uint8_t _ATA6570_TRXECR2 ;  /**< Transceiver Event Capture Enable Register 2 */
extern const uint8_t _ATA6570_TRXESR2 ;  /**< Transceiver Event Status Register 2 */
extern const uint8_t _ATA6570_WDCR1   ;  /**< Watchdog Control Register 1 */
extern const uint8_t _ATA6570_WDCR2   ;  /**< Watchdog Control Register 2 */
extern const uint8_t _ATA6570_WDSR    ;  /**< Watchdog Status Register */
extern const uint8_t _ATA6570_WDTRIG  ;  /**< Watchdog Trigger Register */
extern const uint8_t _ATA6570_EFCR    ;  /**< Error Frame Counter Threshold Register */
extern const uint8_t _ATA6570_FECR    ;  /**< Failure Error Counter Register */
extern const uint8_t _ATA6570_GLFT    ;  /**< Glitch Filter Threshold Register */
extern const uint8_t _ATA6570_CDMR0   ;  /**< CAN Data Mask Registers 0 */
extern const uint8_t _ATA6570_CDMR1   ;  /**< CAN Data Mask Registers 1 */
extern const uint8_t _ATA6570_CDMR2   ;  /**< CAN Data Mask Registers 2 */
extern const uint8_t _ATA6570_CDMR3   ;  /**< CAN Data Mask Registers 3 */
extern const uint8_t _ATA6570_CDMR4   ;  /**< CAN Data Mask Registers 4 */
extern const uint8_t _ATA6570_CDMR5   ;  /**< CAN Data Mask Registers 5 */
extern const uint8_t _ATA6570_CDMR6   ;  /**< CAN Data Mask Registers 6 */
extern const uint8_t _ATA6570_CDMR7   ;  /**< CAN Data Mask Registers 7 */

extern const uint8_t _ATA6570_PWKS    ;  /**< Pin WAKE Status Register */
extern const uint8_t _ATA6570_WKECR   ;  /**< WAKE Event Capture Enable Register */

extern const uint8_t _ATA6570_GESR    ;  /**< Global Event Status Register */
extern const uint8_t _ATA6570_SESR    ;  /**< System Event Status Register */
extern const uint8_t _ATA6570_WKESR   ;  /**< WAKE Event Status Register */

extern const uint8_t _ATA6570_DIDR    ;  /**< Device ID Register */

                                                                       /** @} */
/** @defgroup ATA6570_OPMODE ATA6570 Operation Modes */                /** @{ */

extern const uint8_t _ATA6570_OPMODE_NORMAL ;
extern const uint8_t _ATA6570_OPMODE_SLEEP  ; 
extern const uint8_t _ATA6570_OPMODE_STBY   ;

                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup ATA6570_INIT Driver Initialization */              /** @{ */

#ifdef   __ATA6570_DRV_SPI__
void ata6570_spiDriverInit(T_ATA6570_P gpioObj, T_ATA6570_P spiObj);
#endif
#ifdef   __ATA6570_DRV_I2C__
void ata6570_i2cDriverInit(T_ATA6570_P gpioObj, T_ATA6570_P i2cObj, uint8_t slave);
#endif
#ifdef   __ATA6570_DRV_UART__
void ata6570_uartDriverInit(T_ATA6570_P gpioObj, T_ATA6570_P uartObj);
#endif
                                                                       /** @} */
/** @defgroup ATA6570_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Write Register
 *
 * @param[in] address - register address
 * @param[in] input - register data to write
 * 
 * @note 
 * Function uses SPI bus.
 */
void ata6570_writeReg( const uint8_t address, uint8_t input );

/**
 * @brief Read Register
 *
 * @param[in] address - register address
 * @return register content
 * 
 * @note 
 * Function uses SPI bus.
 */
uint8_t ata6570_readReg( const uint8_t address );

/**
 * @brief Write Single Byte
 *
 * @param[in] input 
 *
 * Writes sinle byte.
 * 
 * @note
 * Fuction uses UART bus.
 */
void ata6570_writeByte(uint8_t input);

/**
 * @brief Read Single Byte
 *
 * @return received byte
 *
 * Read received byte.
 * 
 * @note
 * Fuction uses UART bus.
 */
uint8_t ata6570_readByte();

/**
 * @brief Check for new byte received
 *
 * @retval 0 - no new data / 1 - data ready
 *
 * Checks is there a new byte received.
 * 
 * @note
 * Fuction uses UART bus.
 */
uint8_t ata6570_byteReady();
                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_ATA6570_STM.c
    @example Click_ATA6570_TIVA.c
    @example Click_ATA6570_CEC.c
    @example Click_ATA6570_KINETIS.c
    @example Click_ATA6570_MSP.c
    @example Click_ATA6570_PIC.c
    @example Click_ATA6570_PIC32.c
    @example Click_ATA6570_DSPIC.c
    @example Click_ATA6570_AVR.c
    @example Click_ATA6570_FT90x.c
    @example Click_ATA6570_STM.mbas
    @example Click_ATA6570_TIVA.mbas
    @example Click_ATA6570_CEC.mbas
    @example Click_ATA6570_KINETIS.mbas
    @example Click_ATA6570_MSP.mbas
    @example Click_ATA6570_PIC.mbas
    @example Click_ATA6570_PIC32.mbas
    @example Click_ATA6570_DSPIC.mbas
    @example Click_ATA6570_AVR.mbas
    @example Click_ATA6570_FT90x.mbas
    @example Click_ATA6570_STM.mpas
    @example Click_ATA6570_TIVA.mpas
    @example Click_ATA6570_CEC.mpas
    @example Click_ATA6570_KINETIS.mpas
    @example Click_ATA6570_MSP.mpas
    @example Click_ATA6570_PIC.mpas
    @example Click_ATA6570_PIC32.mpas
    @example Click_ATA6570_DSPIC.mpas
    @example Click_ATA6570_AVR.mpas
    @example Click_ATA6570_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __ata6570_driver.h

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

