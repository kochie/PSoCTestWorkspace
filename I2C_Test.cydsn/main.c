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

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_USB_Start();
    UART_USB_PutString("\r\nHello\r\n");
    
    I2C_Master_start()
    I2C_Slave_start();
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
