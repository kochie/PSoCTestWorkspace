/*******************************************************************************
* File Name: ClawQuadDec.h  
* Version 3.0
*
* Description:
*  This file provides constants and parameter values for the Quadrature
*  Decoder component.
*
* Note:
*  None.
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_QUADRATURE_DECODER_ClawQuadDec_H)
#define CY_QUADRATURE_DECODER_ClawQuadDec_H

#include "cyfitter.h"
#include "CyLib.h"
#include "cytypes.h"

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component QuadDec_v3_0 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */

#define ClawQuadDec_COUNTER_SIZE               (16u)
#define ClawQuadDec_COUNTER_SIZE_8_BIT         (8u)
#define ClawQuadDec_COUNTER_SIZE_16_BIT        (16u)
#define ClawQuadDec_COUNTER_SIZE_32_BIT        (32u)

#if (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_8_BIT)
    #include "ClawQuadDec_Cnt8.h"
#else 
    /* (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_16_BIT) || 
    *  (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_32_BIT) 
    */
    #include "ClawQuadDec_Cnt16.h"
#endif /* ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_8_BIT */

extern uint8 ClawQuadDec_initVar;


/***************************************
*   Conditional Compilation Parameters
***************************************/

#define ClawQuadDec_COUNTER_RESOLUTION         (1u)


/***************************************
*       Data Struct Definition
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 enableState;
} ClawQuadDec_BACKUP_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

void  ClawQuadDec_Init(void) ;
void  ClawQuadDec_Start(void) ;
void  ClawQuadDec_Stop(void) ;
void  ClawQuadDec_Enable(void) ;
uint8 ClawQuadDec_GetEvents(void) ;
void  ClawQuadDec_SetInterruptMask(uint8 mask) ;
uint8 ClawQuadDec_GetInterruptMask(void) ;
int16 ClawQuadDec_GetCounter(void) ;
void  ClawQuadDec_SetCounter(int16 value)
;
void  ClawQuadDec_Sleep(void) ;
void  ClawQuadDec_Wakeup(void) ;
void  ClawQuadDec_SaveConfig(void) ;
void  ClawQuadDec_RestoreConfig(void) ;

#if (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_32_BIT)
    CY_ISR_PROTO(ClawQuadDec_ISR);
#endif /* ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_32_BIT */


/***************************************
*           API Constants
***************************************/

#if (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_32_BIT)
    #define ClawQuadDec_ISR_NUMBER             ((uint8) ClawQuadDec_isr__INTC_NUMBER)
    #define ClawQuadDec_ISR_PRIORITY           ((uint8) ClawQuadDec_isr__INTC_PRIOR_NUM)
#endif /* ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_32_BIT */


/***************************************
*    Enumerated Types and Parameters
***************************************/

#define ClawQuadDec_GLITCH_FILTERING           (1u)
#define ClawQuadDec_INDEX_INPUT                (0u)


/***************************************
*    Initial Parameter Constants
***************************************/

#if (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_8_BIT)
    #define ClawQuadDec_COUNTER_INIT_VALUE    (0x80u)
#else 
    /* (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_16_BIT) ||
    *  (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_32_BIT)
    */
    #define ClawQuadDec_COUNTER_INIT_VALUE    (0x8000u)
    #define ClawQuadDec_COUNTER_MAX_VALUE     (0x7FFFu)
#endif /* ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_8_BIT */


/***************************************
*             Registers
***************************************/

#define ClawQuadDec_STATUS_REG                 (* (reg8 *) ClawQuadDec_bQuadDec_Stsreg__STATUS_REG)
#define ClawQuadDec_STATUS_PTR                 (  (reg8 *) ClawQuadDec_bQuadDec_Stsreg__STATUS_REG)
#define ClawQuadDec_STATUS_MASK                (* (reg8 *) ClawQuadDec_bQuadDec_Stsreg__MASK_REG)
#define ClawQuadDec_STATUS_MASK_PTR            (  (reg8 *) ClawQuadDec_bQuadDec_Stsreg__MASK_REG)
#define ClawQuadDec_SR_AUX_CONTROL             (* (reg8 *) ClawQuadDec_bQuadDec_Stsreg__STATUS_AUX_CTL_REG)
#define ClawQuadDec_SR_AUX_CONTROL_PTR         (  (reg8 *) ClawQuadDec_bQuadDec_Stsreg__STATUS_AUX_CTL_REG)


/***************************************
*        Register Constants
***************************************/

#define ClawQuadDec_COUNTER_OVERFLOW_SHIFT     (0x00u)
#define ClawQuadDec_COUNTER_UNDERFLOW_SHIFT    (0x01u)
#define ClawQuadDec_COUNTER_RESET_SHIFT        (0x02u)
#define ClawQuadDec_INVALID_IN_SHIFT           (0x03u)
#define ClawQuadDec_COUNTER_OVERFLOW           ((uint8) (0x01u << ClawQuadDec_COUNTER_OVERFLOW_SHIFT))
#define ClawQuadDec_COUNTER_UNDERFLOW          ((uint8) (0x01u << ClawQuadDec_COUNTER_UNDERFLOW_SHIFT))
#define ClawQuadDec_COUNTER_RESET              ((uint8) (0x01u << ClawQuadDec_COUNTER_RESET_SHIFT))
#define ClawQuadDec_INVALID_IN                 ((uint8) (0x01u << ClawQuadDec_INVALID_IN_SHIFT))

#define ClawQuadDec_INTERRUPTS_ENABLE_SHIFT    (0x04u)
#define ClawQuadDec_INTERRUPTS_ENABLE          ((uint8)(0x01u << ClawQuadDec_INTERRUPTS_ENABLE_SHIFT))
#define ClawQuadDec_INIT_INT_MASK              (0x0Fu)


/******************************************************************************************
* Following code are OBSOLETE and must not be used starting from Quadrature Decoder 2.20
******************************************************************************************/
#define ClawQuadDec_DISABLE                    (0x00u)


#endif /* CY_QUADRATURE_DECODER_ClawQuadDec_H */


/* [] END OF FILE */
