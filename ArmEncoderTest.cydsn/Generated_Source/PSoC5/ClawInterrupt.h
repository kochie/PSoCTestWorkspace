/*******************************************************************************
* File Name: ClawInterrupt.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_ClawInterrupt_H)
#define CY_ISR_ClawInterrupt_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void ClawInterrupt_Start(void);
void ClawInterrupt_StartEx(cyisraddress address);
void ClawInterrupt_Stop(void);

CY_ISR_PROTO(ClawInterrupt_Interrupt);

void ClawInterrupt_SetVector(cyisraddress address);
cyisraddress ClawInterrupt_GetVector(void);

void ClawInterrupt_SetPriority(uint8 priority);
uint8 ClawInterrupt_GetPriority(void);

void ClawInterrupt_Enable(void);
uint8 ClawInterrupt_GetState(void);
void ClawInterrupt_Disable(void);

void ClawInterrupt_SetPending(void);
void ClawInterrupt_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the ClawInterrupt ISR. */
#define ClawInterrupt_INTC_VECTOR            ((reg32 *) ClawInterrupt__INTC_VECT)

/* Address of the ClawInterrupt ISR priority. */
#define ClawInterrupt_INTC_PRIOR             ((reg8 *) ClawInterrupt__INTC_PRIOR_REG)

/* Priority of the ClawInterrupt interrupt. */
#define ClawInterrupt_INTC_PRIOR_NUMBER      ClawInterrupt__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable ClawInterrupt interrupt. */
#define ClawInterrupt_INTC_SET_EN            ((reg32 *) ClawInterrupt__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the ClawInterrupt interrupt. */
#define ClawInterrupt_INTC_CLR_EN            ((reg32 *) ClawInterrupt__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the ClawInterrupt interrupt state to pending. */
#define ClawInterrupt_INTC_SET_PD            ((reg32 *) ClawInterrupt__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the ClawInterrupt interrupt. */
#define ClawInterrupt_INTC_CLR_PD            ((reg32 *) ClawInterrupt__INTC_CLR_PD_REG)


#endif /* CY_ISR_ClawInterrupt_H */


/* [] END OF FILE */
