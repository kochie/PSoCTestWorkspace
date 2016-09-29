/*******************************************************************************
* File Name: PhaseA.h  
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

#if !defined(CY_PINS_PhaseA_H) /* Pins PhaseA_H */
#define CY_PINS_PhaseA_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "PhaseA_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 PhaseA__PORT == 15 && ((PhaseA__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    PhaseA_Write(uint8 value);
void    PhaseA_SetDriveMode(uint8 mode);
uint8   PhaseA_ReadDataReg(void);
uint8   PhaseA_Read(void);
void    PhaseA_SetInterruptMode(uint16 position, uint16 mode);
uint8   PhaseA_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the PhaseA_SetDriveMode() function.
     *  @{
     */
        #define PhaseA_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define PhaseA_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define PhaseA_DM_RES_UP          PIN_DM_RES_UP
        #define PhaseA_DM_RES_DWN         PIN_DM_RES_DWN
        #define PhaseA_DM_OD_LO           PIN_DM_OD_LO
        #define PhaseA_DM_OD_HI           PIN_DM_OD_HI
        #define PhaseA_DM_STRONG          PIN_DM_STRONG
        #define PhaseA_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define PhaseA_MASK               PhaseA__MASK
#define PhaseA_SHIFT              PhaseA__SHIFT
#define PhaseA_WIDTH              1u

/* Interrupt constants */
#if defined(PhaseA__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in PhaseA_SetInterruptMode() function.
     *  @{
     */
        #define PhaseA_INTR_NONE      (uint16)(0x0000u)
        #define PhaseA_INTR_RISING    (uint16)(0x0001u)
        #define PhaseA_INTR_FALLING   (uint16)(0x0002u)
        #define PhaseA_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define PhaseA_INTR_MASK      (0x01u) 
#endif /* (PhaseA__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PhaseA_PS                     (* (reg8 *) PhaseA__PS)
/* Data Register */
#define PhaseA_DR                     (* (reg8 *) PhaseA__DR)
/* Port Number */
#define PhaseA_PRT_NUM                (* (reg8 *) PhaseA__PRT) 
/* Connect to Analog Globals */                                                  
#define PhaseA_AG                     (* (reg8 *) PhaseA__AG)                       
/* Analog MUX bux enable */
#define PhaseA_AMUX                   (* (reg8 *) PhaseA__AMUX) 
/* Bidirectional Enable */                                                        
#define PhaseA_BIE                    (* (reg8 *) PhaseA__BIE)
/* Bit-mask for Aliased Register Access */
#define PhaseA_BIT_MASK               (* (reg8 *) PhaseA__BIT_MASK)
/* Bypass Enable */
#define PhaseA_BYP                    (* (reg8 *) PhaseA__BYP)
/* Port wide control signals */                                                   
#define PhaseA_CTL                    (* (reg8 *) PhaseA__CTL)
/* Drive Modes */
#define PhaseA_DM0                    (* (reg8 *) PhaseA__DM0) 
#define PhaseA_DM1                    (* (reg8 *) PhaseA__DM1)
#define PhaseA_DM2                    (* (reg8 *) PhaseA__DM2) 
/* Input Buffer Disable Override */
#define PhaseA_INP_DIS                (* (reg8 *) PhaseA__INP_DIS)
/* LCD Common or Segment Drive */
#define PhaseA_LCD_COM_SEG            (* (reg8 *) PhaseA__LCD_COM_SEG)
/* Enable Segment LCD */
#define PhaseA_LCD_EN                 (* (reg8 *) PhaseA__LCD_EN)
/* Slew Rate Control */
#define PhaseA_SLW                    (* (reg8 *) PhaseA__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define PhaseA_PRTDSI__CAPS_SEL       (* (reg8 *) PhaseA__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define PhaseA_PRTDSI__DBL_SYNC_IN    (* (reg8 *) PhaseA__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define PhaseA_PRTDSI__OE_SEL0        (* (reg8 *) PhaseA__PRTDSI__OE_SEL0) 
#define PhaseA_PRTDSI__OE_SEL1        (* (reg8 *) PhaseA__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define PhaseA_PRTDSI__OUT_SEL0       (* (reg8 *) PhaseA__PRTDSI__OUT_SEL0) 
#define PhaseA_PRTDSI__OUT_SEL1       (* (reg8 *) PhaseA__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define PhaseA_PRTDSI__SYNC_OUT       (* (reg8 *) PhaseA__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(PhaseA__SIO_CFG)
    #define PhaseA_SIO_HYST_EN        (* (reg8 *) PhaseA__SIO_HYST_EN)
    #define PhaseA_SIO_REG_HIFREQ     (* (reg8 *) PhaseA__SIO_REG_HIFREQ)
    #define PhaseA_SIO_CFG            (* (reg8 *) PhaseA__SIO_CFG)
    #define PhaseA_SIO_DIFF           (* (reg8 *) PhaseA__SIO_DIFF)
#endif /* (PhaseA__SIO_CFG) */

/* Interrupt Registers */
#if defined(PhaseA__INTSTAT)
    #define PhaseA_INTSTAT            (* (reg8 *) PhaseA__INTSTAT)
    #define PhaseA_SNAP               (* (reg8 *) PhaseA__SNAP)
    
	#define PhaseA_0_INTTYPE_REG 		(* (reg8 *) PhaseA__0__INTTYPE)
#endif /* (PhaseA__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_PhaseA_H */


/* [] END OF FILE */
