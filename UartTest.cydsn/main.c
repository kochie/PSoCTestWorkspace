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

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_USB_Start();
    int i = 0;
    char string[8];
    //UART_1_Enable();
    for(;;)
    {
        sprintf(string, "%d", i);
        UART_USB_PutString(string);
        UART_USB_PutString("\r\n");
        i++;
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
