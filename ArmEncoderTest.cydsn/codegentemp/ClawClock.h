/*******************************************************************************
* File Name: ClawClock.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_ClawClock_H)
#define CY_CLOCK_ClawClock_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void ClawClock_Start(void) ;
void ClawClock_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void ClawClock_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void ClawClock_StandbyPower(uint8 state) ;
void ClawClock_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 ClawClock_GetDividerRegister(void) ;
void ClawClock_SetModeRegister(uint8 modeBitMask) ;
void ClawClock_ClearModeRegister(uint8 modeBitMask) ;
uint8 ClawClock_GetModeRegister(void) ;
void ClawClock_SetSourceRegister(uint8 clkSource) ;
uint8 ClawClock_GetSourceRegister(void) ;
#if defined(ClawClock__CFG3)
void ClawClock_SetPhaseRegister(uint8 clkPhase) ;
uint8 ClawClock_GetPhaseRegister(void) ;
#endif /* defined(ClawClock__CFG3) */

#define ClawClock_Enable()                       ClawClock_Start()
#define ClawClock_Disable()                      ClawClock_Stop()
#define ClawClock_SetDivider(clkDivider)         ClawClock_SetDividerRegister(clkDivider, 1u)
#define ClawClock_SetDividerValue(clkDivider)    ClawClock_SetDividerRegister((clkDivider) - 1u, 1u)
#define ClawClock_SetMode(clkMode)               ClawClock_SetModeRegister(clkMode)
#define ClawClock_SetSource(clkSource)           ClawClock_SetSourceRegister(clkSource)
#if defined(ClawClock__CFG3)
#define ClawClock_SetPhase(clkPhase)             ClawClock_SetPhaseRegister(clkPhase)
#define ClawClock_SetPhaseValue(clkPhase)        ClawClock_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(ClawClock__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define ClawClock_CLKEN              (* (reg8 *) ClawClock__PM_ACT_CFG)
#define ClawClock_CLKEN_PTR          ((reg8 *) ClawClock__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define ClawClock_CLKSTBY            (* (reg8 *) ClawClock__PM_STBY_CFG)
#define ClawClock_CLKSTBY_PTR        ((reg8 *) ClawClock__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define ClawClock_DIV_LSB            (* (reg8 *) ClawClock__CFG0)
#define ClawClock_DIV_LSB_PTR        ((reg8 *) ClawClock__CFG0)
#define ClawClock_DIV_PTR            ((reg16 *) ClawClock__CFG0)

/* Clock MSB divider configuration register. */
#define ClawClock_DIV_MSB            (* (reg8 *) ClawClock__CFG1)
#define ClawClock_DIV_MSB_PTR        ((reg8 *) ClawClock__CFG1)

/* Mode and source configuration register */
#define ClawClock_MOD_SRC            (* (reg8 *) ClawClock__CFG2)
#define ClawClock_MOD_SRC_PTR        ((reg8 *) ClawClock__CFG2)

#if defined(ClawClock__CFG3)
/* Analog clock phase configuration register */
#define ClawClock_PHASE              (* (reg8 *) ClawClock__CFG3)
#define ClawClock_PHASE_PTR          ((reg8 *) ClawClock__CFG3)
#endif /* defined(ClawClock__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define ClawClock_CLKEN_MASK         ClawClock__PM_ACT_MSK
#define ClawClock_CLKSTBY_MASK       ClawClock__PM_STBY_MSK

/* CFG2 field masks */
#define ClawClock_SRC_SEL_MSK        ClawClock__CFG2_SRC_SEL_MASK
#define ClawClock_MODE_MASK          (~(ClawClock_SRC_SEL_MSK))

#if defined(ClawClock__CFG3)
/* CFG3 phase mask */
#define ClawClock_PHASE_MASK         ClawClock__CFG3_PHASE_DLY_MASK
#endif /* defined(ClawClock__CFG3) */

#endif /* CY_CLOCK_ClawClock_H */


/* [] END OF FILE */
