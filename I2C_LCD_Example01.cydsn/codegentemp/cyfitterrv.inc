    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; SCL
SCL__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
SCL__0__MASK EQU 0x02
SCL__0__PC EQU CYREG_PRT0_PC1
SCL__0__PORT EQU 0
SCL__0__SHIFT EQU 1
SCL__AG EQU CYREG_PRT0_AG
SCL__AMUX EQU CYREG_PRT0_AMUX
SCL__BIE EQU CYREG_PRT0_BIE
SCL__BIT_MASK EQU CYREG_PRT0_BIT_MASK
SCL__BYP EQU CYREG_PRT0_BYP
SCL__CTL EQU CYREG_PRT0_CTL
SCL__DM0 EQU CYREG_PRT0_DM0
SCL__DM1 EQU CYREG_PRT0_DM1
SCL__DM2 EQU CYREG_PRT0_DM2
SCL__DR EQU CYREG_PRT0_DR
SCL__INP_DIS EQU CYREG_PRT0_INP_DIS
SCL__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
SCL__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
SCL__LCD_EN EQU CYREG_PRT0_LCD_EN
SCL__MASK EQU 0x02
SCL__PORT EQU 0
SCL__PRT EQU CYREG_PRT0_PRT
SCL__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
SCL__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
SCL__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
SCL__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
SCL__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
SCL__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
SCL__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
SCL__PS EQU CYREG_PRT0_PS
SCL__SHIFT EQU 1
SCL__SLW EQU CYREG_PRT0_SLW

; SDA
SDA__0__INTTYPE EQU CYREG_PICU12_INTTYPE3
SDA__0__MASK EQU 0x08
SDA__0__PC EQU CYREG_PRT12_PC3
SDA__0__PORT EQU 12
SDA__0__SHIFT EQU 3
SDA__AG EQU CYREG_PRT12_AG
SDA__BIE EQU CYREG_PRT12_BIE
SDA__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SDA__BYP EQU CYREG_PRT12_BYP
SDA__DM0 EQU CYREG_PRT12_DM0
SDA__DM1 EQU CYREG_PRT12_DM1
SDA__DM2 EQU CYREG_PRT12_DM2
SDA__DR EQU CYREG_PRT12_DR
SDA__INP_DIS EQU CYREG_PRT12_INP_DIS
SDA__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SDA__MASK EQU 0x08
SDA__PORT EQU 12
SDA__PRT EQU CYREG_PRT12_PRT
SDA__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SDA__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SDA__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SDA__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SDA__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SDA__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SDA__PS EQU CYREG_PRT12_PS
SDA__SHIFT EQU 3
SDA__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SDA__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SDA__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SDA__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SDA__SLW EQU CYREG_PRT12_SLW

; I2C_M_bI2C_UDB
I2C_M_bI2C_UDB_Master_ClkGen_u0__16BIT_A0_REG EQU CYREG_B0_UDB05_06_A0
I2C_M_bI2C_UDB_Master_ClkGen_u0__16BIT_A1_REG EQU CYREG_B0_UDB05_06_A1
I2C_M_bI2C_UDB_Master_ClkGen_u0__16BIT_D0_REG EQU CYREG_B0_UDB05_06_D0
I2C_M_bI2C_UDB_Master_ClkGen_u0__16BIT_D1_REG EQU CYREG_B0_UDB05_06_D1
I2C_M_bI2C_UDB_Master_ClkGen_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
I2C_M_bI2C_UDB_Master_ClkGen_u0__16BIT_F0_REG EQU CYREG_B0_UDB05_06_F0
I2C_M_bI2C_UDB_Master_ClkGen_u0__16BIT_F1_REG EQU CYREG_B0_UDB05_06_F1
I2C_M_bI2C_UDB_Master_ClkGen_u0__A0_A1_REG EQU CYREG_B0_UDB05_A0_A1
I2C_M_bI2C_UDB_Master_ClkGen_u0__A0_REG EQU CYREG_B0_UDB05_A0
I2C_M_bI2C_UDB_Master_ClkGen_u0__A1_REG EQU CYREG_B0_UDB05_A1
I2C_M_bI2C_UDB_Master_ClkGen_u0__D0_D1_REG EQU CYREG_B0_UDB05_D0_D1
I2C_M_bI2C_UDB_Master_ClkGen_u0__D0_REG EQU CYREG_B0_UDB05_D0
I2C_M_bI2C_UDB_Master_ClkGen_u0__D1_REG EQU CYREG_B0_UDB05_D1
I2C_M_bI2C_UDB_Master_ClkGen_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
I2C_M_bI2C_UDB_Master_ClkGen_u0__F0_F1_REG EQU CYREG_B0_UDB05_F0_F1
I2C_M_bI2C_UDB_Master_ClkGen_u0__F0_REG EQU CYREG_B0_UDB05_F0
I2C_M_bI2C_UDB_Master_ClkGen_u0__F1_REG EQU CYREG_B0_UDB05_F1
I2C_M_bI2C_UDB_Shifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB07_08_A0
I2C_M_bI2C_UDB_Shifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB07_08_A1
I2C_M_bI2C_UDB_Shifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB07_08_D0
I2C_M_bI2C_UDB_Shifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB07_08_D1
I2C_M_bI2C_UDB_Shifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB07_08_ACTL
I2C_M_bI2C_UDB_Shifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB07_08_F0
I2C_M_bI2C_UDB_Shifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB07_08_F1
I2C_M_bI2C_UDB_Shifter_u0__A0_A1_REG EQU CYREG_B0_UDB07_A0_A1
I2C_M_bI2C_UDB_Shifter_u0__A0_REG EQU CYREG_B0_UDB07_A0
I2C_M_bI2C_UDB_Shifter_u0__A1_REG EQU CYREG_B0_UDB07_A1
I2C_M_bI2C_UDB_Shifter_u0__D0_D1_REG EQU CYREG_B0_UDB07_D0_D1
I2C_M_bI2C_UDB_Shifter_u0__D0_REG EQU CYREG_B0_UDB07_D0
I2C_M_bI2C_UDB_Shifter_u0__D1_REG EQU CYREG_B0_UDB07_D1
I2C_M_bI2C_UDB_Shifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB07_ACTL
I2C_M_bI2C_UDB_Shifter_u0__F0_F1_REG EQU CYREG_B0_UDB07_F0_F1
I2C_M_bI2C_UDB_Shifter_u0__F0_REG EQU CYREG_B0_UDB07_F0
I2C_M_bI2C_UDB_Shifter_u0__F1_REG EQU CYREG_B0_UDB07_F1
I2C_M_bI2C_UDB_StsReg__0__MASK EQU 0x01
I2C_M_bI2C_UDB_StsReg__0__POS EQU 0
I2C_M_bI2C_UDB_StsReg__1__MASK EQU 0x02
I2C_M_bI2C_UDB_StsReg__1__POS EQU 1
I2C_M_bI2C_UDB_StsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB03_04_ACTL
I2C_M_bI2C_UDB_StsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB03_04_ST
I2C_M_bI2C_UDB_StsReg__2__MASK EQU 0x04
I2C_M_bI2C_UDB_StsReg__2__POS EQU 2
I2C_M_bI2C_UDB_StsReg__3__MASK EQU 0x08
I2C_M_bI2C_UDB_StsReg__3__POS EQU 3
I2C_M_bI2C_UDB_StsReg__4__MASK EQU 0x10
I2C_M_bI2C_UDB_StsReg__4__POS EQU 4
I2C_M_bI2C_UDB_StsReg__5__MASK EQU 0x20
I2C_M_bI2C_UDB_StsReg__5__POS EQU 5
I2C_M_bI2C_UDB_StsReg__MASK EQU 0x3F
I2C_M_bI2C_UDB_StsReg__MASK_REG EQU CYREG_B0_UDB03_MSK
I2C_M_bI2C_UDB_StsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB03_ACTL
I2C_M_bI2C_UDB_StsReg__STATUS_REG EQU CYREG_B0_UDB03_ST
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__1__MASK EQU 0x02
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__1__POS EQU 1
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB00_01_ACTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB00_01_CTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB00_01_CTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB00_01_CTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB00_01_CTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB00_01_MSK
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB00_01_MSK
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB00_01_MSK
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB00_01_MSK
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__2__MASK EQU 0x04
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__2__POS EQU 2
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__4__MASK EQU 0x10
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__4__POS EQU 4
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__5__MASK EQU 0x20
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__5__POS EQU 5
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__6__MASK EQU 0x40
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__6__POS EQU 6
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__7__MASK EQU 0x80
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__7__POS EQU 7
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB00_ACTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__CONTROL_REG EQU CYREG_B0_UDB00_CTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__CONTROL_ST_REG EQU CYREG_B0_UDB00_ST_CTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__COUNT_REG EQU CYREG_B0_UDB00_CTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__COUNT_ST_REG EQU CYREG_B0_UDB00_ST_CTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__MASK EQU 0xF6
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB00_MSK_ACTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB00_MSK_ACTL
I2C_M_bI2C_UDB_SyncCtl_CtrlReg__PERIOD_REG EQU CYREG_B0_UDB00_MSK

; I2C_M_I2C_IRQ
I2C_M_I2C_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
I2C_M_I2C_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
I2C_M_I2C_IRQ__INTC_MASK EQU 0x01
I2C_M_I2C_IRQ__INTC_NUMBER EQU 0
I2C_M_I2C_IRQ__INTC_PRIOR_NUM EQU 7
I2C_M_I2C_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
I2C_M_I2C_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
I2C_M_I2C_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; I2C_M_IntClock
I2C_M_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
I2C_M_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
I2C_M_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
I2C_M_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
I2C_M_IntClock__INDEX EQU 0x00
I2C_M_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
I2C_M_IntClock__PM_ACT_MSK EQU 0x01
I2C_M_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
I2C_M_IntClock__PM_STBY_MSK EQU 0x01

; Button
Button__0__INTTYPE EQU CYREG_PICU1_INTTYPE7
Button__0__MASK EQU 0x80
Button__0__PC EQU CYREG_PRT1_PC7
Button__0__PORT EQU 1
Button__0__SHIFT EQU 7
Button__AG EQU CYREG_PRT1_AG
Button__AMUX EQU CYREG_PRT1_AMUX
Button__BIE EQU CYREG_PRT1_BIE
Button__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Button__BYP EQU CYREG_PRT1_BYP
Button__CTL EQU CYREG_PRT1_CTL
Button__DM0 EQU CYREG_PRT1_DM0
Button__DM1 EQU CYREG_PRT1_DM1
Button__DM2 EQU CYREG_PRT1_DM2
Button__DR EQU CYREG_PRT1_DR
Button__INP_DIS EQU CYREG_PRT1_INP_DIS
Button__INTSTAT EQU CYREG_PICU1_INTSTAT
Button__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
Button__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Button__LCD_EN EQU CYREG_PRT1_LCD_EN
Button__MASK EQU 0x80
Button__PORT EQU 1
Button__PRT EQU CYREG_PRT1_PRT
Button__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Button__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Button__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Button__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Button__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Button__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Button__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Button__PS EQU CYREG_PRT1_PS
Button__SHIFT EQU 7
Button__SLW EQU CYREG_PRT1_SLW
Button__SNAP EQU CYREG_PICU1_SNAP

; Button_Isr
Button_Isr__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
Button_Isr__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
Button_Isr__INTC_MASK EQU 0x20
Button_Isr__INTC_NUMBER EQU 5
Button_Isr__INTC_PRIOR_NUM EQU 7
Button_Isr__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_5
Button_Isr__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
Button_Isr__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; LCD_RST
LCD_RST__0__INTTYPE EQU CYREG_PICU3_INTTYPE5
LCD_RST__0__MASK EQU 0x20
LCD_RST__0__PC EQU CYREG_PRT3_PC5
LCD_RST__0__PORT EQU 3
LCD_RST__0__SHIFT EQU 5
LCD_RST__AG EQU CYREG_PRT3_AG
LCD_RST__AMUX EQU CYREG_PRT3_AMUX
LCD_RST__BIE EQU CYREG_PRT3_BIE
LCD_RST__BIT_MASK EQU CYREG_PRT3_BIT_MASK
LCD_RST__BYP EQU CYREG_PRT3_BYP
LCD_RST__CTL EQU CYREG_PRT3_CTL
LCD_RST__DM0 EQU CYREG_PRT3_DM0
LCD_RST__DM1 EQU CYREG_PRT3_DM1
LCD_RST__DM2 EQU CYREG_PRT3_DM2
LCD_RST__DR EQU CYREG_PRT3_DR
LCD_RST__INP_DIS EQU CYREG_PRT3_INP_DIS
LCD_RST__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
LCD_RST__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
LCD_RST__LCD_EN EQU CYREG_PRT3_LCD_EN
LCD_RST__MASK EQU 0x20
LCD_RST__PORT EQU 3
LCD_RST__PRT EQU CYREG_PRT3_PRT
LCD_RST__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
LCD_RST__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
LCD_RST__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
LCD_RST__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
LCD_RST__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
LCD_RST__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
LCD_RST__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
LCD_RST__PS EQU CYREG_PRT3_PS
LCD_RST__SHIFT EQU 5
LCD_RST__SLW EQU CYREG_PRT3_SLW

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 19
CYDEV_CHIP_DIE_PSOC4A EQU 11
CYDEV_CHIP_DIE_PSOC5LP EQU 18
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 11
CYDEV_CHIP_MEMBER_4C EQU 16
CYDEV_CHIP_MEMBER_4D EQU 7
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 12
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 10
CYDEV_CHIP_MEMBER_4I EQU 15
CYDEV_CHIP_MEMBER_4J EQU 8
CYDEV_CHIP_MEMBER_4K EQU 9
CYDEV_CHIP_MEMBER_4L EQU 14
CYDEV_CHIP_MEMBER_4M EQU 13
CYDEV_CHIP_MEMBER_4N EQU 6
CYDEV_CHIP_MEMBER_4O EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 18
CYDEV_CHIP_MEMBER_5B EQU 17
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000001
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END