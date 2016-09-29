.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Rx_1 */
.set Rx_1__0__INTTYPE, CYREG_PICU12_INTTYPE6
.set Rx_1__0__MASK, 0x40
.set Rx_1__0__PC, CYREG_PRT12_PC6
.set Rx_1__0__PORT, 12
.set Rx_1__0__SHIFT, 6
.set Rx_1__AG, CYREG_PRT12_AG
.set Rx_1__BIE, CYREG_PRT12_BIE
.set Rx_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Rx_1__BYP, CYREG_PRT12_BYP
.set Rx_1__DM0, CYREG_PRT12_DM0
.set Rx_1__DM1, CYREG_PRT12_DM1
.set Rx_1__DM2, CYREG_PRT12_DM2
.set Rx_1__DR, CYREG_PRT12_DR
.set Rx_1__INP_DIS, CYREG_PRT12_INP_DIS
.set Rx_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Rx_1__MASK, 0x40
.set Rx_1__PORT, 12
.set Rx_1__PRT, CYREG_PRT12_PRT
.set Rx_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Rx_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Rx_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Rx_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Rx_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Rx_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Rx_1__PS, CYREG_PRT12_PS
.set Rx_1__SHIFT, 6
.set Rx_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Rx_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Rx_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Rx_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Rx_1__SLW, CYREG_PRT12_SLW

/* Tx_1 */
.set Tx_1__0__INTTYPE, CYREG_PICU12_INTTYPE7
.set Tx_1__0__MASK, 0x80
.set Tx_1__0__PC, CYREG_PRT12_PC7
.set Tx_1__0__PORT, 12
.set Tx_1__0__SHIFT, 7
.set Tx_1__AG, CYREG_PRT12_AG
.set Tx_1__BIE, CYREG_PRT12_BIE
.set Tx_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Tx_1__BYP, CYREG_PRT12_BYP
.set Tx_1__DM0, CYREG_PRT12_DM0
.set Tx_1__DM1, CYREG_PRT12_DM1
.set Tx_1__DM2, CYREG_PRT12_DM2
.set Tx_1__DR, CYREG_PRT12_DR
.set Tx_1__INP_DIS, CYREG_PRT12_INP_DIS
.set Tx_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Tx_1__MASK, 0x80
.set Tx_1__PORT, 12
.set Tx_1__PRT, CYREG_PRT12_PRT
.set Tx_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Tx_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Tx_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Tx_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Tx_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Tx_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Tx_1__PS, CYREG_PRT12_PS
.set Tx_1__SHIFT, 7
.set Tx_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Tx_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Tx_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Tx_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Tx_1__SLW, CYREG_PRT12_SLW

/* PhaseA */
.set PhaseA__0__INTTYPE, CYREG_PICU3_INTTYPE0
.set PhaseA__0__MASK, 0x01
.set PhaseA__0__PC, CYREG_PRT3_PC0
.set PhaseA__0__PORT, 3
.set PhaseA__0__SHIFT, 0
.set PhaseA__AG, CYREG_PRT3_AG
.set PhaseA__AMUX, CYREG_PRT3_AMUX
.set PhaseA__BIE, CYREG_PRT3_BIE
.set PhaseA__BIT_MASK, CYREG_PRT3_BIT_MASK
.set PhaseA__BYP, CYREG_PRT3_BYP
.set PhaseA__CTL, CYREG_PRT3_CTL
.set PhaseA__DM0, CYREG_PRT3_DM0
.set PhaseA__DM1, CYREG_PRT3_DM1
.set PhaseA__DM2, CYREG_PRT3_DM2
.set PhaseA__DR, CYREG_PRT3_DR
.set PhaseA__INP_DIS, CYREG_PRT3_INP_DIS
.set PhaseA__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set PhaseA__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set PhaseA__LCD_EN, CYREG_PRT3_LCD_EN
.set PhaseA__MASK, 0x01
.set PhaseA__PORT, 3
.set PhaseA__PRT, CYREG_PRT3_PRT
.set PhaseA__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set PhaseA__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set PhaseA__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set PhaseA__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set PhaseA__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set PhaseA__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set PhaseA__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set PhaseA__PS, CYREG_PRT3_PS
.set PhaseA__SHIFT, 0
.set PhaseA__SLW, CYREG_PRT3_SLW

/* PhaseB */
.set PhaseB__0__INTTYPE, CYREG_PICU3_INTTYPE1
.set PhaseB__0__MASK, 0x02
.set PhaseB__0__PC, CYREG_PRT3_PC1
.set PhaseB__0__PORT, 3
.set PhaseB__0__SHIFT, 1
.set PhaseB__AG, CYREG_PRT3_AG
.set PhaseB__AMUX, CYREG_PRT3_AMUX
.set PhaseB__BIE, CYREG_PRT3_BIE
.set PhaseB__BIT_MASK, CYREG_PRT3_BIT_MASK
.set PhaseB__BYP, CYREG_PRT3_BYP
.set PhaseB__CTL, CYREG_PRT3_CTL
.set PhaseB__DM0, CYREG_PRT3_DM0
.set PhaseB__DM1, CYREG_PRT3_DM1
.set PhaseB__DM2, CYREG_PRT3_DM2
.set PhaseB__DR, CYREG_PRT3_DR
.set PhaseB__INP_DIS, CYREG_PRT3_INP_DIS
.set PhaseB__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set PhaseB__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set PhaseB__LCD_EN, CYREG_PRT3_LCD_EN
.set PhaseB__MASK, 0x02
.set PhaseB__PORT, 3
.set PhaseB__PRT, CYREG_PRT3_PRT
.set PhaseB__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set PhaseB__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set PhaseB__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set PhaseB__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set PhaseB__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set PhaseB__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set PhaseB__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set PhaseB__PS, CYREG_PRT3_PS
.set PhaseB__SHIFT, 1
.set PhaseB__SLW, CYREG_PRT3_SLW

/* UART_USB_BUART */
.set UART_USB_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_USB_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_USB_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_USB_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB09_10_CTL
.set UART_USB_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB09_10_CTL
.set UART_USB_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_USB_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_USB_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB09_10_MSK
.set UART_USB_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB09_10_MSK
.set UART_USB_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_USB_BUART_sRX_RxBitCounter__CONTROL_REG, CYREG_B1_UDB09_CTL
.set UART_USB_BUART_sRX_RxBitCounter__CONTROL_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_USB_BUART_sRX_RxBitCounter__COUNT_REG, CYREG_B1_UDB09_CTL
.set UART_USB_BUART_sRX_RxBitCounter__COUNT_ST_REG, CYREG_B1_UDB09_ST_CTL
.set UART_USB_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_USB_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_USB_BUART_sRX_RxBitCounter__PERIOD_REG, CYREG_B1_UDB09_MSK
.set UART_USB_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_USB_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG, CYREG_B1_UDB09_10_ST
.set UART_USB_BUART_sRX_RxBitCounter_ST__MASK_REG, CYREG_B1_UDB09_MSK
.set UART_USB_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_USB_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B1_UDB09_MSK_ACTL
.set UART_USB_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_USB_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG, CYREG_B1_UDB09_ST_CTL
.set UART_USB_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG, CYREG_B1_UDB09_ST_CTL
.set UART_USB_BUART_sRX_RxBitCounter_ST__STATUS_REG, CYREG_B1_UDB09_ST
.set UART_USB_BUART_sRX_RxShifter_u0__16BIT_A0_REG, CYREG_B1_UDB10_11_A0
.set UART_USB_BUART_sRX_RxShifter_u0__16BIT_A1_REG, CYREG_B1_UDB10_11_A1
.set UART_USB_BUART_sRX_RxShifter_u0__16BIT_D0_REG, CYREG_B1_UDB10_11_D0
.set UART_USB_BUART_sRX_RxShifter_u0__16BIT_D1_REG, CYREG_B1_UDB10_11_D1
.set UART_USB_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB10_11_ACTL
.set UART_USB_BUART_sRX_RxShifter_u0__16BIT_F0_REG, CYREG_B1_UDB10_11_F0
.set UART_USB_BUART_sRX_RxShifter_u0__16BIT_F1_REG, CYREG_B1_UDB10_11_F1
.set UART_USB_BUART_sRX_RxShifter_u0__A0_A1_REG, CYREG_B1_UDB10_A0_A1
.set UART_USB_BUART_sRX_RxShifter_u0__A0_REG, CYREG_B1_UDB10_A0
.set UART_USB_BUART_sRX_RxShifter_u0__A1_REG, CYREG_B1_UDB10_A1
.set UART_USB_BUART_sRX_RxShifter_u0__D0_D1_REG, CYREG_B1_UDB10_D0_D1
.set UART_USB_BUART_sRX_RxShifter_u0__D0_REG, CYREG_B1_UDB10_D0
.set UART_USB_BUART_sRX_RxShifter_u0__D1_REG, CYREG_B1_UDB10_D1
.set UART_USB_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB10_ACTL
.set UART_USB_BUART_sRX_RxShifter_u0__F0_F1_REG, CYREG_B1_UDB10_F0_F1
.set UART_USB_BUART_sRX_RxShifter_u0__F0_REG, CYREG_B1_UDB10_F0
.set UART_USB_BUART_sRX_RxShifter_u0__F1_REG, CYREG_B1_UDB10_F1
.set UART_USB_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB10_11_ACTL
.set UART_USB_BUART_sRX_RxSts__16BIT_STATUS_REG, CYREG_B1_UDB10_11_ST
.set UART_USB_BUART_sRX_RxSts__3__MASK, 0x08
.set UART_USB_BUART_sRX_RxSts__3__POS, 3
.set UART_USB_BUART_sRX_RxSts__4__MASK, 0x10
.set UART_USB_BUART_sRX_RxSts__4__POS, 4
.set UART_USB_BUART_sRX_RxSts__5__MASK, 0x20
.set UART_USB_BUART_sRX_RxSts__5__POS, 5
.set UART_USB_BUART_sRX_RxSts__MASK, 0x38
.set UART_USB_BUART_sRX_RxSts__MASK_REG, CYREG_B1_UDB10_MSK
.set UART_USB_BUART_sRX_RxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB10_ACTL
.set UART_USB_BUART_sRX_RxSts__STATUS_REG, CYREG_B1_UDB10_ST
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG, CYREG_B0_UDB07_08_A0
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG, CYREG_B0_UDB07_08_A1
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG, CYREG_B0_UDB07_08_D0
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG, CYREG_B0_UDB07_08_D1
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB07_08_ACTL
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG, CYREG_B0_UDB07_08_F0
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG, CYREG_B0_UDB07_08_F1
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG, CYREG_B0_UDB07_A0_A1
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG, CYREG_B0_UDB07_A0
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG, CYREG_B0_UDB07_A1
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG, CYREG_B0_UDB07_D0_D1
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG, CYREG_B0_UDB07_D0
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG, CYREG_B0_UDB07_D1
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG, CYREG_B0_UDB07_ACTL
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG, CYREG_B0_UDB07_F0_F1
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG, CYREG_B0_UDB07_F0
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG, CYREG_B0_UDB07_F1
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__MSK_DP_AUX_CTL_REG, CYREG_B0_UDB07_MSK_ACTL
.set UART_USB_BUART_sTX_sCLOCK_TxBitClkGen__PER_DP_AUX_CTL_REG, CYREG_B0_UDB07_MSK_ACTL
.set UART_USB_BUART_sTX_TxShifter_u0__16BIT_A0_REG, CYREG_B1_UDB04_05_A0
.set UART_USB_BUART_sTX_TxShifter_u0__16BIT_A1_REG, CYREG_B1_UDB04_05_A1
.set UART_USB_BUART_sTX_TxShifter_u0__16BIT_D0_REG, CYREG_B1_UDB04_05_D0
.set UART_USB_BUART_sTX_TxShifter_u0__16BIT_D1_REG, CYREG_B1_UDB04_05_D1
.set UART_USB_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB04_05_ACTL
.set UART_USB_BUART_sTX_TxShifter_u0__16BIT_F0_REG, CYREG_B1_UDB04_05_F0
.set UART_USB_BUART_sTX_TxShifter_u0__16BIT_F1_REG, CYREG_B1_UDB04_05_F1
.set UART_USB_BUART_sTX_TxShifter_u0__A0_A1_REG, CYREG_B1_UDB04_A0_A1
.set UART_USB_BUART_sTX_TxShifter_u0__A0_REG, CYREG_B1_UDB04_A0
.set UART_USB_BUART_sTX_TxShifter_u0__A1_REG, CYREG_B1_UDB04_A1
.set UART_USB_BUART_sTX_TxShifter_u0__D0_D1_REG, CYREG_B1_UDB04_D0_D1
.set UART_USB_BUART_sTX_TxShifter_u0__D0_REG, CYREG_B1_UDB04_D0
.set UART_USB_BUART_sTX_TxShifter_u0__D1_REG, CYREG_B1_UDB04_D1
.set UART_USB_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB04_ACTL
.set UART_USB_BUART_sTX_TxShifter_u0__F0_F1_REG, CYREG_B1_UDB04_F0_F1
.set UART_USB_BUART_sTX_TxShifter_u0__F0_REG, CYREG_B1_UDB04_F0
.set UART_USB_BUART_sTX_TxShifter_u0__F1_REG, CYREG_B1_UDB04_F1
.set UART_USB_BUART_sTX_TxSts__0__MASK, 0x01
.set UART_USB_BUART_sTX_TxSts__0__POS, 0
.set UART_USB_BUART_sTX_TxSts__1__MASK, 0x02
.set UART_USB_BUART_sTX_TxSts__1__POS, 1
.set UART_USB_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB04_05_ACTL
.set UART_USB_BUART_sTX_TxSts__16BIT_STATUS_REG, CYREG_B1_UDB04_05_ST
.set UART_USB_BUART_sTX_TxSts__2__MASK, 0x04
.set UART_USB_BUART_sTX_TxSts__2__POS, 2
.set UART_USB_BUART_sTX_TxSts__3__MASK, 0x08
.set UART_USB_BUART_sTX_TxSts__3__POS, 3
.set UART_USB_BUART_sTX_TxSts__MASK, 0x0F
.set UART_USB_BUART_sTX_TxSts__MASK_REG, CYREG_B1_UDB04_MSK
.set UART_USB_BUART_sTX_TxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB04_ACTL
.set UART_USB_BUART_sTX_TxSts__STATUS_REG, CYREG_B1_UDB04_ST

/* UART_USB_IntClock */
.set UART_USB_IntClock__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set UART_USB_IntClock__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set UART_USB_IntClock__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set UART_USB_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set UART_USB_IntClock__INDEX, 0x01
.set UART_USB_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set UART_USB_IntClock__PM_ACT_MSK, 0x02
.set UART_USB_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set UART_USB_IntClock__PM_STBY_MSK, 0x02

/* UART_USB_RX_INTERRUPT */
.set UART_USB_RX_INTERRUPT__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set UART_USB_RX_INTERRUPT__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set UART_USB_RX_INTERRUPT__INTC_MASK, 0x02
.set UART_USB_RX_INTERRUPT__INTC_NUMBER, 1
.set UART_USB_RX_INTERRUPT__INTC_PRIOR_NUM, 7
.set UART_USB_RX_INTERRUPT__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set UART_USB_RX_INTERRUPT__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set UART_USB_RX_INTERRUPT__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ClawClock */
.set ClawClock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set ClawClock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set ClawClock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set ClawClock__CFG2_SRC_SEL_MASK, 0x07
.set ClawClock__INDEX, 0x00
.set ClawClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ClawClock__PM_ACT_MSK, 0x01
.set ClawClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ClawClock__PM_STBY_MSK, 0x01

/* ClawQuadDec_bQuadDec */
.set ClawQuadDec_bQuadDec_Stsreg__0__MASK, 0x01
.set ClawQuadDec_bQuadDec_Stsreg__0__POS, 0
.set ClawQuadDec_bQuadDec_Stsreg__1__MASK, 0x02
.set ClawQuadDec_bQuadDec_Stsreg__1__POS, 1
.set ClawQuadDec_bQuadDec_Stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB07_08_ACTL
.set ClawQuadDec_bQuadDec_Stsreg__16BIT_STATUS_REG, CYREG_B0_UDB07_08_ST
.set ClawQuadDec_bQuadDec_Stsreg__2__MASK, 0x04
.set ClawQuadDec_bQuadDec_Stsreg__2__POS, 2
.set ClawQuadDec_bQuadDec_Stsreg__3__MASK, 0x08
.set ClawQuadDec_bQuadDec_Stsreg__3__POS, 3
.set ClawQuadDec_bQuadDec_Stsreg__MASK, 0x0F
.set ClawQuadDec_bQuadDec_Stsreg__MASK_REG, CYREG_B0_UDB07_MSK
.set ClawQuadDec_bQuadDec_Stsreg__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB07_MSK_ACTL
.set ClawQuadDec_bQuadDec_Stsreg__PER_ST_AUX_CTL_REG, CYREG_B0_UDB07_MSK_ACTL
.set ClawQuadDec_bQuadDec_Stsreg__STATUS_AUX_CTL_REG, CYREG_B0_UDB07_ACTL
.set ClawQuadDec_bQuadDec_Stsreg__STATUS_CNT_REG, CYREG_B0_UDB07_ST_CTL
.set ClawQuadDec_bQuadDec_Stsreg__STATUS_CONTROL_REG, CYREG_B0_UDB07_ST_CTL
.set ClawQuadDec_bQuadDec_Stsreg__STATUS_REG, CYREG_B0_UDB07_ST

/* ClawQuadDec_Cnt16_CounterUDB */
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_A0_REG, CYREG_B1_UDB06_07_A0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_A1_REG, CYREG_B1_UDB06_07_A1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_D0_REG, CYREG_B1_UDB06_07_D0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_D1_REG, CYREG_B1_UDB06_07_D1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB06_07_ACTL
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_F0_REG, CYREG_B1_UDB06_07_F0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__16BIT_F1_REG, CYREG_B1_UDB06_07_F1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__A0_A1_REG, CYREG_B1_UDB06_A0_A1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__A0_REG, CYREG_B1_UDB06_A0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__A1_REG, CYREG_B1_UDB06_A1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__D0_D1_REG, CYREG_B1_UDB06_D0_D1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__D0_REG, CYREG_B1_UDB06_D0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__D1_REG, CYREG_B1_UDB06_D1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__DP_AUX_CTL_REG, CYREG_B1_UDB06_ACTL
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__F0_F1_REG, CYREG_B1_UDB06_F0_F1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__F0_REG, CYREG_B1_UDB06_F0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u0__F1_REG, CYREG_B1_UDB06_F1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_A0_REG, CYREG_B1_UDB07_08_A0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_A1_REG, CYREG_B1_UDB07_08_A1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_D0_REG, CYREG_B1_UDB07_08_D0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_D1_REG, CYREG_B1_UDB07_08_D1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB07_08_ACTL
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_F0_REG, CYREG_B1_UDB07_08_F0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__16BIT_F1_REG, CYREG_B1_UDB07_08_F1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__A0_A1_REG, CYREG_B1_UDB07_A0_A1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__A0_REG, CYREG_B1_UDB07_A0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__A1_REG, CYREG_B1_UDB07_A1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__D0_D1_REG, CYREG_B1_UDB07_D0_D1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__D0_REG, CYREG_B1_UDB07_D0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__D1_REG, CYREG_B1_UDB07_D1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__DP_AUX_CTL_REG, CYREG_B1_UDB07_ACTL
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__F0_F1_REG, CYREG_B1_UDB07_F0_F1
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__F0_REG, CYREG_B1_UDB07_F0
.set ClawQuadDec_Cnt16_CounterUDB_sC16_counterdp_u1__F1_REG, CYREG_B1_UDB07_F1
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB07_08_ACTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB07_08_CTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB07_08_CTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB07_08_CTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB07_08_CTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B0_UDB07_08_MSK
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB07_08_MSK
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB07_08_MSK
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB07_08_MSK
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__7__MASK, 0x80
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__7__POS, 7
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB07_ACTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__CONTROL_REG, CYREG_B0_UDB07_CTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__CONTROL_ST_REG, CYREG_B0_UDB07_ST_CTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__COUNT_REG, CYREG_B0_UDB07_CTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__COUNT_ST_REG, CYREG_B0_UDB07_ST_CTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__MASK, 0x80
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB07_MSK_ACTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB07_MSK_ACTL
.set ClawQuadDec_Cnt16_CounterUDB_sCTRLReg_ctrlreg__PERIOD_REG, CYREG_B0_UDB07_MSK
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__0__MASK, 0x01
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__0__POS, 0
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__1__MASK, 0x02
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__1__POS, 1
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB07_08_ACTL
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_REG, CYREG_B1_UDB07_08_ST
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__2__MASK, 0x04
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__2__POS, 2
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__3__MASK, 0x08
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__3__POS, 3
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__5__MASK, 0x20
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__5__POS, 5
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__6__MASK, 0x40
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__6__POS, 6
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__MASK, 0x6F
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__MASK_REG, CYREG_B1_UDB07_MSK
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__STATUS_AUX_CTL_REG, CYREG_B1_UDB07_ACTL
.set ClawQuadDec_Cnt16_CounterUDB_sSTSReg_stsreg__STATUS_REG, CYREG_B1_UDB07_ST

/* ClawInterrupt */
.set ClawInterrupt__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ClawInterrupt__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ClawInterrupt__INTC_MASK, 0x01
.set ClawInterrupt__INTC_NUMBER, 0
.set ClawInterrupt__INTC_PRIOR_NUM, 7
.set ClawInterrupt__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set ClawInterrupt__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ClawInterrupt__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 19
.set CYDEV_CHIP_DIE_PSOC4A, 11
.set CYDEV_CHIP_DIE_PSOC5LP, 18
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 11
.set CYDEV_CHIP_MEMBER_4C, 16
.set CYDEV_CHIP_MEMBER_4D, 7
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 12
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 10
.set CYDEV_CHIP_MEMBER_4I, 15
.set CYDEV_CHIP_MEMBER_4J, 8
.set CYDEV_CHIP_MEMBER_4K, 9
.set CYDEV_CHIP_MEMBER_4L, 14
.set CYDEV_CHIP_MEMBER_4M, 13
.set CYDEV_CHIP_MEMBER_4N, 6
.set CYDEV_CHIP_MEMBER_4O, 5
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 18
.set CYDEV_CHIP_MEMBER_5B, 17
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000003
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif