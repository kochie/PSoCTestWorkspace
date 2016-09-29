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

extern uint8 flag;

#define StepDelay 700
#define Lead 8
#define MAX_HEIGHT 2400

int HEIGHT;

void DirectionUp(void)
{
    Stepper_Direction_Write(0);
}

void DirectionDown(void)
{
    Stepper_Direction_Write(1);
}

void StepperEnable(void)
{
    Stepper_Enable_Write(0);
}

void StepperDisable(void)
{
    Stepper_Enable_Write(1);
}

void Step(void)
{
    {
        Stepper_Step_Write(1);
        CyDelayUs(StepDelay);
        Stepper_Step_Write(0);
        CyDelayUs(StepDelay);
    }

}



void StepperStep(int step)
{    
    int step_height;
    if (step >= 0)
    {
        flag = 0;
        DirectionUp();
        step_height = 1;
    }
    else
    {
        DirectionDown();
        step = -step;
        step_height = -1;
    }
    
    StepperEnable();
    while (step--)
    {
        if (flag==1){
            StepperDisable();
            CyDelay(1000);
            //flag =0;
            return;
        }
        if (HEIGHT > MAX_HEIGHT)
        {
            CyDelay(1000);
            DirectionDown();
            Step();
            HEIGHT = HEIGHT - 1;
            StepperDisable();
            return;
        }
        else{
            Step();
            HEIGHT = HEIGHT + step_height;
        }     
    }
    StepperDisable();
}

void StepperRotate(int degree)
{
    StepperStep(degree*200/360);
}

void StepperMove(int height)
{
    StepperStep(height*200/Lead);
}

void StepperFindZero(void)
{
    DirectionDown();
    StepperEnable();
    while(flag == 0)
    {
        Step();
    }
    StepperDisable();
    HEIGHT = 0;
}

/* [] END OF FILE */
