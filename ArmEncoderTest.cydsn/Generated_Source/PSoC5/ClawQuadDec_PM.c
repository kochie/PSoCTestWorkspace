/*******************************************************************************
* File Name: ClawQuadDec_PM.c
* Version 3.0
*
* Description:
*  This file contains the setup, control and status commands to support 
*  component operations in low power mode.  
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

#include "ClawQuadDec.h"

static ClawQuadDec_BACKUP_STRUCT ClawQuadDec_backup = {0u};


/*******************************************************************************
* Function Name: ClawQuadDec_SaveConfig
********************************************************************************
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ClawQuadDec_SaveConfig(void) 
{
    #if (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_8_BIT)
        ClawQuadDec_Cnt8_SaveConfig();
    #else 
        /* (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_16_BIT) || 
         * (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_32_BIT)
         */
        ClawQuadDec_Cnt16_SaveConfig();
    #endif /* (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_8_BIT) */
}


/*******************************************************************************
* Function Name: ClawQuadDec_RestoreConfig
********************************************************************************
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ClawQuadDec_RestoreConfig(void) 
{
    #if (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_8_BIT)
        ClawQuadDec_Cnt8_RestoreConfig();
    #else 
        /* (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_16_BIT) || 
         * (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_32_BIT) 
         */
        ClawQuadDec_Cnt16_RestoreConfig();
    #endif /* (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_8_BIT) */
}


/*******************************************************************************
* Function Name: ClawQuadDec_Sleep
********************************************************************************
* 
* Summary:
*  Prepare Quadrature Decoder Component goes to sleep.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  ClawQuadDec_backup - modified when non-retention registers are saved.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void ClawQuadDec_Sleep(void) 
{
    if (0u != (ClawQuadDec_SR_AUX_CONTROL & ClawQuadDec_INTERRUPTS_ENABLE))
    {
        ClawQuadDec_backup.enableState = 1u;
    }
    else /* The Quadrature Decoder Component is disabled */
    {
        ClawQuadDec_backup.enableState = 0u;
    }

    ClawQuadDec_Stop();
    ClawQuadDec_SaveConfig();
}


/*******************************************************************************
* Function Name: ClawQuadDec_Wakeup
********************************************************************************
*
* Summary:
*  Prepare Quadrature Decoder Component to wake up.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  ClawQuadDec_backup - used when non-retention registers are restored.
*
*******************************************************************************/
void ClawQuadDec_Wakeup(void) 
{
    ClawQuadDec_RestoreConfig();

    if (ClawQuadDec_backup.enableState != 0u)
    {
        #if (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_8_BIT)
            ClawQuadDec_Cnt8_Enable();
        #else 
            /* (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_16_BIT) || 
            *  (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_32_BIT) 
            */
            ClawQuadDec_Cnt16_Enable();
        #endif /* (ClawQuadDec_COUNTER_SIZE == ClawQuadDec_COUNTER_SIZE_8_BIT) */

        /* Enable component's operation */
        ClawQuadDec_Enable();
    } /* Do nothing if component's block was disabled before */
}


/* [] END OF FILE */

