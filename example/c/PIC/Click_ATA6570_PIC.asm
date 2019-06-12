
_systemInit:

;Click_ATA6570_PIC.c,36 :: 		void systemInit()
;Click_ATA6570_PIC.c,38 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
	CLRF        FARG_mikrobus_gpioInit_bus+0 
	MOVLW       2
	MOVWF       FARG_mikrobus_gpioInit_pin+0 
	CLRF        FARG_mikrobus_gpioInit_direction+0 
	CALL        _mikrobus_gpioInit+0, 0
;Click_ATA6570_PIC.c,40 :: 		mikrobus_spiInit( _MIKROBUS1, &_ATA6570_SPI_CFG[0] );
	CLRF        FARG_mikrobus_spiInit_bus+0 
	MOVLW       __ATA6570_SPI_CFG+0
	MOVWF       FARG_mikrobus_spiInit_cfg+0 
	MOVLW       hi_addr(__ATA6570_SPI_CFG+0)
	MOVWF       FARG_mikrobus_spiInit_cfg+1 
	MOVLW       higher_addr(__ATA6570_SPI_CFG+0)
	MOVWF       FARG_mikrobus_spiInit_cfg+2 
	CALL        _mikrobus_spiInit+0, 0
;Click_ATA6570_PIC.c,41 :: 		mikrobus_uartInit( _MIKROBUS1, &_ATA6570_UART_CFG[0] );
	CLRF        FARG_mikrobus_uartInit_bus+0 
	MOVLW       __ATA6570_UART_CFG+0
	MOVWF       FARG_mikrobus_uartInit_cfg+0 
	MOVLW       hi_addr(__ATA6570_UART_CFG+0)
	MOVWF       FARG_mikrobus_uartInit_cfg+1 
	MOVLW       higher_addr(__ATA6570_UART_CFG+0)
	MOVWF       FARG_mikrobus_uartInit_cfg+2 
	CALL        _mikrobus_uartInit+0, 0
;Click_ATA6570_PIC.c,42 :: 		mikrobus_logInit( _MIKROBUS3, 9600 );
	MOVLW       2
	MOVWF       FARG_mikrobus_logInit_port+0 
	MOVLW       128
	MOVWF       FARG_mikrobus_logInit_baud+0 
	MOVLW       37
	MOVWF       FARG_mikrobus_logInit_baud+1 
	MOVLW       0
	MOVWF       FARG_mikrobus_logInit_baud+2 
	MOVWF       FARG_mikrobus_logInit_baud+3 
	CALL        _mikrobus_logInit+0, 0
;Click_ATA6570_PIC.c,44 :: 		Delay_ms( 100 );
	MOVLW       9
	MOVWF       R11, 0
	MOVLW       30
	MOVWF       R12, 0
	MOVLW       228
	MOVWF       R13, 0
L_systemInit0:
	DECFSZ      R13, 1, 1
	BRA         L_systemInit0
	DECFSZ      R12, 1, 1
	BRA         L_systemInit0
	DECFSZ      R11, 1, 1
	BRA         L_systemInit0
	NOP
;Click_ATA6570_PIC.c,45 :: 		}
L_end_systemInit:
	RETURN      0
; end of _systemInit

_applicationInit:

;Click_ATA6570_PIC.c,47 :: 		void applicationInit()
;Click_ATA6570_PIC.c,49 :: 		ata6570_spiDriverInit( (T_ATA6570_P)&_MIKROBUS1_GPIO, (T_ATA6570_P)&_MIKROBUS1_SPI );
	MOVLW       __MIKROBUS1_GPIO+0
	MOVWF       FARG_ata6570_spiDriverInit_gpioObj+0 
	MOVLW       hi_addr(__MIKROBUS1_GPIO+0)
	MOVWF       FARG_ata6570_spiDriverInit_gpioObj+1 
	MOVLW       higher_addr(__MIKROBUS1_GPIO+0)
	MOVWF       FARG_ata6570_spiDriverInit_gpioObj+2 
	MOVLW       __MIKROBUS1_SPI+0
	MOVWF       FARG_ata6570_spiDriverInit_spiObj+0 
	MOVLW       hi_addr(__MIKROBUS1_SPI+0)
	MOVWF       FARG_ata6570_spiDriverInit_spiObj+1 
	MOVLW       higher_addr(__MIKROBUS1_SPI+0)
	MOVWF       FARG_ata6570_spiDriverInit_spiObj+2 
	CALL        _ata6570_spiDriverInit+0, 0
;Click_ATA6570_PIC.c,50 :: 		ata6570_uartDriverInit( (T_ATA6570_P)&_MIKROBUS1_GPIO, (T_ATA6570_P)&_MIKROBUS1_UART );
	MOVLW       __MIKROBUS1_GPIO+0
	MOVWF       FARG_ata6570_uartDriverInit_gpioObj+0 
	MOVLW       hi_addr(__MIKROBUS1_GPIO+0)
	MOVWF       FARG_ata6570_uartDriverInit_gpioObj+1 
	MOVLW       higher_addr(__MIKROBUS1_GPIO+0)
	MOVWF       FARG_ata6570_uartDriverInit_gpioObj+2 
	MOVLW       __MIKROBUS1_UART+0
	MOVWF       FARG_ata6570_uartDriverInit_uartObj+0 
	MOVLW       hi_addr(__MIKROBUS1_UART+0)
	MOVWF       FARG_ata6570_uartDriverInit_uartObj+1 
	MOVLW       higher_addr(__MIKROBUS1_UART+0)
	MOVWF       FARG_ata6570_uartDriverInit_uartObj+2 
	CALL        _ata6570_uartDriverInit+0, 0
;Click_ATA6570_PIC.c,51 :: 		mikrobus_logWrite( "Initialized", _LOG_LINE );
	MOVLW       ?lstr1_Click_ATA6570_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr1_Click_ATA6570_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ATA6570_PIC.c,52 :: 		Delay_ms( 100 );
	MOVLW       9
	MOVWF       R11, 0
	MOVLW       30
	MOVWF       R12, 0
	MOVLW       228
	MOVWF       R13, 0
L_applicationInit1:
	DECFSZ      R13, 1, 1
	BRA         L_applicationInit1
	DECFSZ      R12, 1, 1
	BRA         L_applicationInit1
	DECFSZ      R11, 1, 1
	BRA         L_applicationInit1
	NOP
;Click_ATA6570_PIC.c,54 :: 		ata6570_writeReg( _ATA6570_DMCR, _ATA6570_OPMODE_NORMAL );
	MOVLW       __ATA6570_DMCR
	MOVWF       FARG_ata6570_writeReg_address+0 
	MOVLW       __ATA6570_OPMODE_NORMAL
	MOVWF       FARG_ata6570_writeReg_input+0 
	CALL        _ata6570_writeReg+0, 0
;Click_ATA6570_PIC.c,55 :: 		mikrobus_logWrite( "ATA6570 Normal mode", _LOG_LINE );
	MOVLW       ?lstr2_Click_ATA6570_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr2_Click_ATA6570_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ATA6570_PIC.c,56 :: 		}
L_end_applicationInit:
	RETURN      0
; end of _applicationInit

_applicationTask:

;Click_ATA6570_PIC.c,58 :: 		void applicationTask()
;Click_ATA6570_PIC.c,75 :: 		for (tmp = 0; tmp < 9; tmp++)
	CLRF        applicationTask_tmp_L0+0 
L_applicationTask2:
	MOVLW       9
	SUBWF       applicationTask_tmp_L0+0, 0 
	BTFSC       STATUS+0, 0 
	GOTO        L_applicationTask3
;Click_ATA6570_PIC.c,77 :: 		ata6570_writeByte( MESSAGE_DATA[tmp] );
	MOVLW       _MESSAGE_DATA+0
	ADDWF       applicationTask_tmp_L0+0, 0 
	MOVWF       TBLPTRL 
	MOVLW       hi_addr(_MESSAGE_DATA+0)
	MOVWF       TBLPTRH 
	MOVLW       0
	ADDWFC      TBLPTRH, 1 
	MOVLW       higher_addr(_MESSAGE_DATA+0)
	MOVWF       TBLPTRU 
	MOVLW       0
	ADDWFC      TBLPTRU, 1 
	TBLRD*+
	MOVFF       TABLAT+0, FARG_ata6570_writeByte_input+0
	CALL        _ata6570_writeByte+0, 0
;Click_ATA6570_PIC.c,75 :: 		for (tmp = 0; tmp < 9; tmp++)
	INCF        applicationTask_tmp_L0+0, 1 
;Click_ATA6570_PIC.c,78 :: 		}
	GOTO        L_applicationTask2
L_applicationTask3:
;Click_ATA6570_PIC.c,80 :: 		mikrobus_logWrite( "MESSAGE SENT", _LOG_LINE );
	MOVLW       ?lstr3_Click_ATA6570_PIC+0
	MOVWF       FARG_mikrobus_logWrite_data_+0 
	MOVLW       hi_addr(?lstr3_Click_ATA6570_PIC+0)
	MOVWF       FARG_mikrobus_logWrite_data_+1 
	MOVLW       2
	MOVWF       FARG_mikrobus_logWrite_format+0 
	CALL        _mikrobus_logWrite+0, 0
;Click_ATA6570_PIC.c,81 :: 		Delay_ms(2000);
	MOVLW       163
	MOVWF       R11, 0
	MOVLW       87
	MOVWF       R12, 0
	MOVLW       2
	MOVWF       R13, 0
L_applicationTask5:
	DECFSZ      R13, 1, 1
	BRA         L_applicationTask5
	DECFSZ      R12, 1, 1
	BRA         L_applicationTask5
	DECFSZ      R11, 1, 1
	BRA         L_applicationTask5
	NOP
;Click_ATA6570_PIC.c,83 :: 		}
L_end_applicationTask:
	RETURN      0
; end of _applicationTask

_main:

;Click_ATA6570_PIC.c,85 :: 		void main()
;Click_ATA6570_PIC.c,87 :: 		systemInit();
	CALL        _systemInit+0, 0
;Click_ATA6570_PIC.c,88 :: 		applicationInit();
	CALL        _applicationInit+0, 0
;Click_ATA6570_PIC.c,90 :: 		while (1)
L_main6:
;Click_ATA6570_PIC.c,92 :: 		applicationTask();
	CALL        _applicationTask+0, 0
;Click_ATA6570_PIC.c,93 :: 		}
	GOTO        L_main6
;Click_ATA6570_PIC.c,94 :: 		}
L_end_main:
	GOTO        $+0
; end of _main
