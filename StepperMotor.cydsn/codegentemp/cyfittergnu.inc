.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* LED */
.set LED__0__INTTYPE, CYREG_PICU2_INTTYPE2
.set LED__0__MASK, 0x04
.set LED__0__PC, CYREG_PRT2_PC2
.set LED__0__PORT, 2
.set LED__0__SHIFT, 2
.set LED__AG, CYREG_PRT2_AG
.set LED__AMUX, CYREG_PRT2_AMUX
.set LED__BIE, CYREG_PRT2_BIE
.set LED__BIT_MASK, CYREG_PRT2_BIT_MASK
.set LED__BYP, CYREG_PRT2_BYP
.set LED__CTL, CYREG_PRT2_CTL
.set LED__DM0, CYREG_PRT2_DM0
.set LED__DM1, CYREG_PRT2_DM1
.set LED__DM2, CYREG_PRT2_DM2
.set LED__DR, CYREG_PRT2_DR
.set LED__INP_DIS, CYREG_PRT2_INP_DIS
.set LED__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set LED__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set LED__LCD_EN, CYREG_PRT2_LCD_EN
.set LED__MASK, 0x04
.set LED__PORT, 2
.set LED__PRT, CYREG_PRT2_PRT
.set LED__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set LED__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set LED__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set LED__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set LED__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set LED__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set LED__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set LED__PS, CYREG_PRT2_PS
.set LED__SHIFT, 2
.set LED__SLW, CYREG_PRT2_SLW

/* StepperFloor */
.set StepperFloor__0__INTTYPE, CYREG_PICU12_INTTYPE5
.set StepperFloor__0__MASK, 0x20
.set StepperFloor__0__PC, CYREG_PRT12_PC5
.set StepperFloor__0__PORT, 12
.set StepperFloor__0__SHIFT, 5
.set StepperFloor__AG, CYREG_PRT12_AG
.set StepperFloor__BIE, CYREG_PRT12_BIE
.set StepperFloor__BIT_MASK, CYREG_PRT12_BIT_MASK
.set StepperFloor__BYP, CYREG_PRT12_BYP
.set StepperFloor__DM0, CYREG_PRT12_DM0
.set StepperFloor__DM1, CYREG_PRT12_DM1
.set StepperFloor__DM2, CYREG_PRT12_DM2
.set StepperFloor__DR, CYREG_PRT12_DR
.set StepperFloor__INP_DIS, CYREG_PRT12_INP_DIS
.set StepperFloor__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set StepperFloor__MASK, 0x20
.set StepperFloor__PORT, 12
.set StepperFloor__PRT, CYREG_PRT12_PRT
.set StepperFloor__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set StepperFloor__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set StepperFloor__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set StepperFloor__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set StepperFloor__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set StepperFloor__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set StepperFloor__PS, CYREG_PRT12_PS
.set StepperFloor__SHIFT, 5
.set StepperFloor__SIO_CFG, CYREG_PRT12_SIO_CFG
.set StepperFloor__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set StepperFloor__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set StepperFloor__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set StepperFloor__SLW, CYREG_PRT12_SLW

/* Stepper_Step */
.set Stepper_Step__0__INTTYPE, CYREG_PICU12_INTTYPE3
.set Stepper_Step__0__MASK, 0x08
.set Stepper_Step__0__PC, CYREG_PRT12_PC3
.set Stepper_Step__0__PORT, 12
.set Stepper_Step__0__SHIFT, 3
.set Stepper_Step__AG, CYREG_PRT12_AG
.set Stepper_Step__BIE, CYREG_PRT12_BIE
.set Stepper_Step__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Stepper_Step__BYP, CYREG_PRT12_BYP
.set Stepper_Step__DM0, CYREG_PRT12_DM0
.set Stepper_Step__DM1, CYREG_PRT12_DM1
.set Stepper_Step__DM2, CYREG_PRT12_DM2
.set Stepper_Step__DR, CYREG_PRT12_DR
.set Stepper_Step__INP_DIS, CYREG_PRT12_INP_DIS
.set Stepper_Step__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Stepper_Step__MASK, 0x08
.set Stepper_Step__PORT, 12
.set Stepper_Step__PRT, CYREG_PRT12_PRT
.set Stepper_Step__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Stepper_Step__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Stepper_Step__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Stepper_Step__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Stepper_Step__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Stepper_Step__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Stepper_Step__PS, CYREG_PRT12_PS
.set Stepper_Step__SHIFT, 3
.set Stepper_Step__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Stepper_Step__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Stepper_Step__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Stepper_Step__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Stepper_Step__SLW, CYREG_PRT12_SLW

/* DebounceClock */
.set DebounceClock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set DebounceClock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set DebounceClock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set DebounceClock__CFG2_SRC_SEL_MASK, 0x07
.set DebounceClock__INDEX, 0x00
.set DebounceClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set DebounceClock__PM_ACT_MSK, 0x01
.set DebounceClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set DebounceClock__PM_STBY_MSK, 0x01

/* Stepper_Enable */
.set Stepper_Enable__0__INTTYPE, CYREG_PICU12_INTTYPE2
.set Stepper_Enable__0__MASK, 0x04
.set Stepper_Enable__0__PC, CYREG_PRT12_PC2
.set Stepper_Enable__0__PORT, 12
.set Stepper_Enable__0__SHIFT, 2
.set Stepper_Enable__AG, CYREG_PRT12_AG
.set Stepper_Enable__BIE, CYREG_PRT12_BIE
.set Stepper_Enable__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Stepper_Enable__BYP, CYREG_PRT12_BYP
.set Stepper_Enable__DM0, CYREG_PRT12_DM0
.set Stepper_Enable__DM1, CYREG_PRT12_DM1
.set Stepper_Enable__DM2, CYREG_PRT12_DM2
.set Stepper_Enable__DR, CYREG_PRT12_DR
.set Stepper_Enable__INP_DIS, CYREG_PRT12_INP_DIS
.set Stepper_Enable__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Stepper_Enable__MASK, 0x04
.set Stepper_Enable__PORT, 12
.set Stepper_Enable__PRT, CYREG_PRT12_PRT
.set Stepper_Enable__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Stepper_Enable__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Stepper_Enable__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Stepper_Enable__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Stepper_Enable__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Stepper_Enable__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Stepper_Enable__PS, CYREG_PRT12_PS
.set Stepper_Enable__SHIFT, 2
.set Stepper_Enable__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Stepper_Enable__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Stepper_Enable__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Stepper_Enable__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Stepper_Enable__SLW, CYREG_PRT12_SLW

/* StepperInterrupt */
.set StepperInterrupt__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set StepperInterrupt__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set StepperInterrupt__INTC_MASK, 0x01
.set StepperInterrupt__INTC_NUMBER, 0
.set StepperInterrupt__INTC_PRIOR_NUM, 0
.set StepperInterrupt__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set StepperInterrupt__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set StepperInterrupt__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Stepper_Direction */
.set Stepper_Direction__0__INTTYPE, CYREG_PICU12_INTTYPE4
.set Stepper_Direction__0__MASK, 0x10
.set Stepper_Direction__0__PC, CYREG_PRT12_PC4
.set Stepper_Direction__0__PORT, 12
.set Stepper_Direction__0__SHIFT, 4
.set Stepper_Direction__AG, CYREG_PRT12_AG
.set Stepper_Direction__BIE, CYREG_PRT12_BIE
.set Stepper_Direction__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Stepper_Direction__BYP, CYREG_PRT12_BYP
.set Stepper_Direction__DM0, CYREG_PRT12_DM0
.set Stepper_Direction__DM1, CYREG_PRT12_DM1
.set Stepper_Direction__DM2, CYREG_PRT12_DM2
.set Stepper_Direction__DR, CYREG_PRT12_DR
.set Stepper_Direction__INP_DIS, CYREG_PRT12_INP_DIS
.set Stepper_Direction__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Stepper_Direction__MASK, 0x10
.set Stepper_Direction__PORT, 12
.set Stepper_Direction__PRT, CYREG_PRT12_PRT
.set Stepper_Direction__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Stepper_Direction__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Stepper_Direction__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Stepper_Direction__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Stepper_Direction__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Stepper_Direction__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Stepper_Direction__PS, CYREG_PRT12_PS
.set Stepper_Direction__SHIFT, 4
.set Stepper_Direction__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Stepper_Direction__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Stepper_Direction__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Stepper_Direction__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Stepper_Direction__SLW, CYREG_PRT12_SLW

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
.set CYDEV_INTR_RISING, 0x00000001
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
