/*******************************************************************************
* File Name: StepperFloor.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_StepperFloor_H) /* Pins StepperFloor_H */
#define CY_PINS_StepperFloor_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "StepperFloor_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 StepperFloor__PORT == 15 && ((StepperFloor__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    StepperFloor_Write(uint8 value);
void    StepperFloor_SetDriveMode(uint8 mode);
uint8   StepperFloor_ReadDataReg(void);
uint8   StepperFloor_Read(void);
void    StepperFloor_SetInterruptMode(uint16 position, uint16 mode);
uint8   StepperFloor_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the StepperFloor_SetDriveMode() function.
     *  @{
     */
        #define StepperFloor_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define StepperFloor_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define StepperFloor_DM_RES_UP          PIN_DM_RES_UP
        #define StepperFloor_DM_RES_DWN         PIN_DM_RES_DWN
        #define StepperFloor_DM_OD_LO           PIN_DM_OD_LO
        #define StepperFloor_DM_OD_HI           PIN_DM_OD_HI
        #define StepperFloor_DM_STRONG          PIN_DM_STRONG
        #define StepperFloor_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define StepperFloor_MASK               StepperFloor__MASK
#define StepperFloor_SHIFT              StepperFloor__SHIFT
#define StepperFloor_WIDTH              1u

/* Interrupt constants */
#if defined(StepperFloor__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in StepperFloor_SetInterruptMode() function.
     *  @{
     */
        #define StepperFloor_INTR_NONE      (uint16)(0x0000u)
        #define StepperFloor_INTR_RISING    (uint16)(0x0001u)
        #define StepperFloor_INTR_FALLING   (uint16)(0x0002u)
        #define StepperFloor_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define StepperFloor_INTR_MASK      (0x01u) 
#endif /* (StepperFloor__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define StepperFloor_PS                     (* (reg8 *) StepperFloor__PS)
/* Data Register */
#define StepperFloor_DR                     (* (reg8 *) StepperFloor__DR)
/* Port Number */
#define StepperFloor_PRT_NUM                (* (reg8 *) StepperFloor__PRT) 
/* Connect to Analog Globals */                                                  
#define StepperFloor_AG                     (* (reg8 *) StepperFloor__AG)                       
/* Analog MUX bux enable */
#define StepperFloor_AMUX                   (* (reg8 *) StepperFloor__AMUX) 
/* Bidirectional Enable */                                                        
#define StepperFloor_BIE                    (* (reg8 *) StepperFloor__BIE)
/* Bit-mask for Aliased Register Access */
#define StepperFloor_BIT_MASK               (* (reg8 *) StepperFloor__BIT_MASK)
/* Bypass Enable */
#define StepperFloor_BYP                    (* (reg8 *) StepperFloor__BYP)
/* Port wide control signals */                                                   
#define StepperFloor_CTL                    (* (reg8 *) StepperFloor__CTL)
/* Drive Modes */
#define StepperFloor_DM0                    (* (reg8 *) StepperFloor__DM0) 
#define StepperFloor_DM1                    (* (reg8 *) StepperFloor__DM1)
#define StepperFloor_DM2                    (* (reg8 *) StepperFloor__DM2) 
/* Input Buffer Disable Override */
#define StepperFloor_INP_DIS                (* (reg8 *) StepperFloor__INP_DIS)
/* LCD Common or Segment Drive */
#define StepperFloor_LCD_COM_SEG            (* (reg8 *) StepperFloor__LCD_COM_SEG)
/* Enable Segment LCD */
#define StepperFloor_LCD_EN                 (* (reg8 *) StepperFloor__LCD_EN)
/* Slew Rate Control */
#define StepperFloor_SLW                    (* (reg8 *) StepperFloor__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define StepperFloor_PRTDSI__CAPS_SEL       (* (reg8 *) StepperFloor__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define StepperFloor_PRTDSI__DBL_SYNC_IN    (* (reg8 *) StepperFloor__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define StepperFloor_PRTDSI__OE_SEL0        (* (reg8 *) StepperFloor__PRTDSI__OE_SEL0) 
#define StepperFloor_PRTDSI__OE_SEL1        (* (reg8 *) StepperFloor__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define StepperFloor_PRTDSI__OUT_SEL0       (* (reg8 *) StepperFloor__PRTDSI__OUT_SEL0) 
#define StepperFloor_PRTDSI__OUT_SEL1       (* (reg8 *) StepperFloor__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define StepperFloor_PRTDSI__SYNC_OUT       (* (reg8 *) StepperFloor__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(StepperFloor__SIO_CFG)
    #define StepperFloor_SIO_HYST_EN        (* (reg8 *) StepperFloor__SIO_HYST_EN)
    #define StepperFloor_SIO_REG_HIFREQ     (* (reg8 *) StepperFloor__SIO_REG_HIFREQ)
    #define StepperFloor_SIO_CFG            (* (reg8 *) StepperFloor__SIO_CFG)
    #define StepperFloor_SIO_DIFF           (* (reg8 *) StepperFloor__SIO_DIFF)
#endif /* (StepperFloor__SIO_CFG) */

/* Interrupt Registers */
#if defined(StepperFloor__INTSTAT)
    #define StepperFloor_INTSTAT            (* (reg8 *) StepperFloor__INTSTAT)
    #define StepperFloor_SNAP               (* (reg8 *) StepperFloor__SNAP)
    
	#define StepperFloor_0_INTTYPE_REG 		(* (reg8 *) StepperFloor__0__INTTYPE)
#endif /* (StepperFloor__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_StepperFloor_H */


/* [] END OF FILE */
