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

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    ClawQuadDec_Start();
    ClawInterrupt_Start();
    
    UART_USB_Start();
    UART_USB_RX_INTERRUPT_Start();

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    UART_USB_PutString("\r\nHello\r\n");

    for(;;)
    {
        
    }
}

/* [] END OF FILE */
