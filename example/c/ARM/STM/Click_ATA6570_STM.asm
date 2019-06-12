_systemInit:
;Click_ATA6570_STM.c,36 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_ATA6570_STM.c,38 :: 		GPIO_Digital_Output( &GPIOB_BASE, _GPIO_PINMASK_ALL );
MOVW	R1, #65535
MOVW	R0, #lo_addr(GPIOB_BASE+0)
MOVT	R0, #hi_addr(GPIOB_BASE+0)
BL	_GPIO_Digital_Output+0
;Click_ATA6570_STM.c,40 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_ATA6570_STM.c,42 :: 		mikrobus_spiInit( _MIKROBUS1, &_ATA6570_SPI_CFG[0] );
MOVW	R0, #lo_addr(__ATA6570_SPI_CFG+0)
MOVT	R0, #hi_addr(__ATA6570_SPI_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_spiInit+0
;Click_ATA6570_STM.c,43 :: 		mikrobus_uartInit( _MIKROBUS1, &_ATA6570_UART_CFG[0] );
MOVW	R0, #lo_addr(__ATA6570_UART_CFG+0)
MOVT	R0, #hi_addr(__ATA6570_UART_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_uartInit+0
;Click_ATA6570_STM.c,44 :: 		mikrobus_logInit( _LOG_USBUART_A, 9600 );
MOVW	R1, #9600
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_ATA6570_STM.c,46 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_ATA6570_STM.c,47 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_ATA6570_STM.c,49 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_ATA6570_STM.c,51 :: 		ata6570_spiDriverInit( (T_ATA6570_P)&_MIKROBUS1_GPIO, (T_ATA6570_P)&_MIKROBUS1_SPI );
MOVW	R1, #lo_addr(__MIKROBUS1_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS1_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_ata6570_spiDriverInit+0
;Click_ATA6570_STM.c,52 :: 		ata6570_uartDriverInit( (T_ATA6570_P)&_MIKROBUS1_GPIO, (T_ATA6570_P)&_MIKROBUS1_UART );
MOVW	R1, #lo_addr(__MIKROBUS1_UART+0)
MOVT	R1, #hi_addr(__MIKROBUS1_UART+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_ata6570_uartDriverInit+0
;Click_ATA6570_STM.c,53 :: 		mikrobus_logWrite( "Initialized", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr1_Click_ATA6570_STM+0)
MOVT	R0, #hi_addr(?lstr1_Click_ATA6570_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_ATA6570_STM.c,54 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_applicationInit2:
SUBS	R7, R7, #1
BNE	L_applicationInit2
NOP
NOP
NOP
;Click_ATA6570_STM.c,56 :: 		ata6570_writeReg( _ATA6570_DMCR, _ATA6570_OPMODE_NORMAL );
MOVS	R1, __ATA6570_OPMODE_NORMAL
MOVS	R0, __ATA6570_DMCR
BL	_ata6570_writeReg+0
;Click_ATA6570_STM.c,57 :: 		mikrobus_logWrite( "ATA6570 Normal mode", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr2_Click_ATA6570_STM+0)
MOVT	R0, #hi_addr(?lstr2_Click_ATA6570_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_ATA6570_STM.c,59 :: 		GPIOB_ODR = 0xFF;
MOVS	R1, #255
MOVW	R0, #lo_addr(GPIOB_ODR+0)
MOVT	R0, #hi_addr(GPIOB_ODR+0)
STR	R1, [R0, #0]
;Click_ATA6570_STM.c,60 :: 		Delay_ms( 1000 );
MOVW	R7, #6911
MOVT	R7, #183
NOP
NOP
L_applicationInit4:
SUBS	R7, R7, #1
BNE	L_applicationInit4
NOP
NOP
NOP
;Click_ATA6570_STM.c,61 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_ATA6570_STM.c,63 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_ATA6570_STM.c,70 :: 		rdyFlag = ata6570_byteReady();
BL	_ata6570_byteReady+0
;Click_ATA6570_STM.c,72 :: 		if (1 == rdyFlag)
CMP	R0, #1
IT	NE
BNE	L_applicationTask6
;Click_ATA6570_STM.c,74 :: 		tmp = ata6570_readByte();
BL	_ata6570_readByte+0
; tmp start address is: 8 (R2)
UXTB	R2, R0
;Click_ATA6570_STM.c,75 :: 		GPIOB_ODR = tmp;
MOVW	R1, #lo_addr(GPIOB_ODR+0)
MOVT	R1, #hi_addr(GPIOB_ODR+0)
STR	R0, [R1, #0]
;Click_ATA6570_STM.c,76 :: 		Delay_ms( 1000 );
MOVW	R7, #6911
MOVT	R7, #183
NOP
NOP
L_applicationTask7:
SUBS	R7, R7, #1
BNE	L_applicationTask7
NOP
NOP
NOP
;Click_ATA6570_STM.c,77 :: 		GPIOB_ODR = ~tmp;
MVN	R1, R2
UXTB	R1, R1
; tmp end address is: 8 (R2)
MOVW	R0, #lo_addr(GPIOB_ODR+0)
MOVT	R0, #hi_addr(GPIOB_ODR+0)
STR	R1, [R0, #0]
;Click_ATA6570_STM.c,78 :: 		Delay_ms( 1000 );
MOVW	R7, #6911
MOVT	R7, #183
NOP
NOP
L_applicationTask9:
SUBS	R7, R7, #1
BNE	L_applicationTask9
NOP
NOP
NOP
;Click_ATA6570_STM.c,80 :: 		}
L_applicationTask6:
;Click_ATA6570_STM.c,92 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_ATA6570_STM.c,94 :: 		void main()
;Click_ATA6570_STM.c,96 :: 		systemInit();
BL	_systemInit+0
;Click_ATA6570_STM.c,97 :: 		applicationInit();
BL	_applicationInit+0
;Click_ATA6570_STM.c,99 :: 		while (1)
L_main11:
;Click_ATA6570_STM.c,101 :: 		applicationTask();
BL	_applicationTask+0
;Click_ATA6570_STM.c,102 :: 		}
IT	AL
BAL	L_main11
;Click_ATA6570_STM.c,103 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
