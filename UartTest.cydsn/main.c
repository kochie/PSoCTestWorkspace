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
#include <stdio.h>

uint8 flag = 0;

int CheckInterrupt(uint InterruptFlag)
{
    if (InterruptFlag == 1)
    {
        InterruptFlag = 0;
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_USB_Start();
    int i = 0;
    char string[8];
    //UART_1_Enable();
    char ch;
    for(;;)
    {
        ch = UART_USB_GetChar();
        UART_USB_PutChar(ch);
        if (ch > 0u)
        {
            
            //UART_USB_PutString("\r\n");
            
            //UART_USB_PutString("\r\n");
        }
//        sprintf(string, "%d", i);
//        UART_USB_PutString(string);
//        UART_USB_PutString("\r\n");
//        i++;


    }
}

/* [] END OF FILE */
