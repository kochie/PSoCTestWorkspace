/*******************************************************************************
* File Name: ClawQuadDec_Cnt16_PM.c  
* Version 3.0
*
*  Description:
*    This file provides the power management source code to API for the
*    Counter.  
*
*   Note:
*     None
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "ClawQuadDec_Cnt16.h"

static ClawQuadDec_Cnt16_backupStruct ClawQuadDec_Cnt16_backup;


/*******************************************************************************
* Function Name: ClawQuadDec_Cnt16_SaveConfig
********************************************************************************
* Summary:
*     Save the current user configuration
*
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  ClawQuadDec_Cnt16_backup:  Variables of this global structure are modified to 
*  store the values of non retention configuration registers when Sleep() API is 
*  called.
*
*******************************************************************************/
void ClawQuadDec_Cnt16_SaveConfig(void) 
{
    #if (!ClawQuadDec_Cnt16_UsingFixedFunction)

        ClawQuadDec_Cnt16_backup.CounterUdb = ClawQuadDec_Cnt16_ReadCounter();

        #if(!ClawQuadDec_Cnt16_ControlRegRemoved)
            ClawQuadDec_Cnt16_backup.CounterControlRegister = ClawQuadDec_Cnt16_ReadControlRegister();
        #endif /* (!ClawQuadDec_Cnt16_ControlRegRemoved) */

    #endif /* (!ClawQuadDec_Cnt16_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: ClawQuadDec_Cnt16_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  ClawQuadDec_Cnt16_backup:  Variables of this global structure are used to 
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void ClawQuadDec_Cnt16_RestoreConfig(void) 
{      
    #if (!ClawQuadDec_Cnt16_UsingFixedFunction)

       ClawQuadDec_Cnt16_WriteCounter(ClawQuadDec_Cnt16_backup.CounterUdb);

        #if(!ClawQuadDec_Cnt16_ControlRegRemoved)
            ClawQuadDec_Cnt16_WriteControlRegister(ClawQuadDec_Cnt16_backup.CounterControlRegister);
        #endif /* (!ClawQuadDec_Cnt16_ControlRegRemoved) */

    #endif /* (!ClawQuadDec_Cnt16_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: ClawQuadDec_Cnt16_Sleep
********************************************************************************
* Summary:
*     Stop and Save the user configuration
*
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  ClawQuadDec_Cnt16_backup.enableState:  Is modified depending on the enable 
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void ClawQuadDec_Cnt16_Sleep(void) 
{
    #if(!ClawQuadDec_Cnt16_ControlRegRemoved)
        /* Save Counter's enable state */
        if(ClawQuadDec_Cnt16_CTRL_ENABLE == (ClawQuadDec_Cnt16_CONTROL & ClawQuadDec_Cnt16_CTRL_ENABLE))
        {
            /* Counter is enabled */
            ClawQuadDec_Cnt16_backup.CounterEnableState = 1u;
        }
        else
        {
            /* Counter is disabled */
            ClawQuadDec_Cnt16_backup.CounterEnableState = 0u;
        }
    #else
        ClawQuadDec_Cnt16_backup.CounterEnableState = 1u;
        if(ClawQuadDec_Cnt16_backup.CounterEnableState != 0u)
        {
            ClawQuadDec_Cnt16_backup.CounterEnableState = 0u;
        }
    #endif /* (!ClawQuadDec_Cnt16_ControlRegRemoved) */
    
    ClawQuadDec_Cnt16_Stop();
    ClawQuadDec_Cnt16_SaveConfig();
}


/*******************************************************************************
* Function Name: ClawQuadDec_Cnt16_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration
*  
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  ClawQuadDec_Cnt16_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void ClawQuadDec_Cnt16_Wakeup(void) 
{
    ClawQuadDec_Cnt16_RestoreConfig();
    #if(!ClawQuadDec_Cnt16_ControlRegRemoved)
        if(ClawQuadDec_Cnt16_backup.CounterEnableState == 1u)
        {
            /* Enable Counter's operation */
            ClawQuadDec_Cnt16_Enable();
        } /* Do nothing if Counter was disabled before */    
    #endif /* (!ClawQuadDec_Cnt16_ControlRegRemoved) */
    
}


/* [] END OF FILE */
