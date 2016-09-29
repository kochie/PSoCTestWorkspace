/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include "Stepper.h"

uint8 flag = 0;

int main()
{
    StepperInterrupt_Start();
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    //StepperRotate(-720);
    
    StepperRotate(360);
    CyDelay(1000);
    StepperFindZero();
    

    
    for(;;)
    {
        /* Place your application code here. */
        StepperMove(200);
        CyDelay(1000);
        StepperMove(-100);
    }
}

/* [] END OF FILE */
