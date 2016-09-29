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
#define RD_BUFFER_SIZE          40

void I2C_MasterError(uint8 error_code)
{
    switch(error_code)
    {
        case I2C_1_MSTR_NO_ERROR:
            UART_USB_PutString("Function completed without error.\r\n");
            break;
        case I2C_1_MSTR_BUS_BUSY:
            UART_USB_PutString("Bus is busy, Start condition was not generated.\r\n");
            break;
        case I2C_1_MSTR_NOT_READY:
            UART_USB_PutString("The master is not a valid master on the bus, or a slave operation is in progress.\r\n");
            break;
        case I2C_1_MSTR_ERR_LB_NAK:
            UART_USB_PutString("The last byte was NAKed.\r\n");
            break;
        case I2C_1_MSTR_ERR_ARB_LOST:
            UART_USB_PutString("The master lost arbitration while the Start was generated. (This status is only valid if multi-master is enabled.) \r\n");
            break;
        case I2C_1_MSTR_ERR_ABORT_START_GEN:
            UART_USB_PutString("Start condition generation was aborted because of the start of slave operation. (This status is only valid in multi-master-slave mode.) \r\n");
            break;
    }
}


int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    uint8 rdData[RD_BUFFER_SIZE];
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    I2C_1_Start();

   
    UART_USB_Start();
   
    UART_USB_PutString("\r\nHello\r\n");
    
    char str[10];
    uint8 status;
    uint8 error;
    uint8 size;
    char StrStatus[10];
    int i;
    
    
    uint8 compass_data;
    error = I2C_1_MasterSendStart(COMPASS_ADDR_WRITE, 0);
    I2C_MasterError(error);
    error = I2C_1_MasterWriteByte(0x02);
    I2C_MasterError(error);
    error = I2C_1_MasterWriteByte(0x00);
    I2C_MasterError(error);
    error = I2C_1_MasterSendStop();
    I2C_MasterError(error);
    
    return 0;
    
    
    for(;;)
    {
        CyDelay(1000);
        //status = I2C_1_MasterStatus();
        
        UART_USB_PutString(StrStatus);
    	do
		{
			/* The syntax below automatically reads a buffer of data from a 
		     * slave device from start to stop. 
		 	 */
			error = I2C_1_MasterReadBuf(COMPASS_ADDR_READ, rdData, RD_BUFFER_SIZE, I2C_1_MODE_COMPLETE_XFER);
            I2C_MasterError(error);

		}
		while (error != I2C_1_MSTR_NO_ERROR);
        
        while(I2C_1_MasterStatus() & I2C_1_MSTAT_XFER_INP);
        
        size = I2C_1_MasterGetReadBufSize();
        
        sprintf(str, "%d\r\n", size);
        UART_USB_PutString(str);
        memset(str, 0, 10);        
        
        for (i=0; i<size; i++)
        {
            sprintf(str, "%d", rdData[i]);
            UART_USB_PutString(str);
            memset(str, 0, 10);
        }
        UART_USB_PutString("\r\n");
        
        
    }
}

/* [] END OF FILE */
