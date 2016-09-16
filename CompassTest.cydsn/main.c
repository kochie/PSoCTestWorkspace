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
#include <string.h>
#include <stdio.h>

#define COMPASS_ADDR_READ       0x3D
#define COMPASS_ADDR_WRITE      0x3C
#define RD_BUFFER_SIZE          5u


int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    uint8 rdData[RD_BUFFER_SIZE];
    uint8 cnt = 8;
    uint8 temp = 0u;
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    I2C_1_Start();
   
    UART_USB_Start();
    
    char str[10];
    for(;;)
    {
        CyDelay(1000);
        do{
            temp = I2C_1_MasterReadBuf(COMPASS_ADDR_WRITE, rdData, RD_BUFFER_SIZE, I2C_1_MODE_COMPLETE_XFER);
        }
        
        while (temp != I2C_1_MSTR_NO_ERROR);
        
        while(I2C_1_MasterStatus() & I2C_1_MSTAT_XFER_INP);

		temp = I2C_1_MasterGetReadBufSize();
        
        /* Place your application code here. */
        sprintf(str, "%d%d%d%d%d\n\r", rdData[0], rdData[1], rdData[3], rdData[4], rdData[5]);
        UART_USB_PutString(str);
    }
}

/* [] END OF FILE */
