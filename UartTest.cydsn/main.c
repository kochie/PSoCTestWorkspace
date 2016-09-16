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

uint8 UART_RX_INTERRUPT_FLAG = 0;

int CheckInterrupt(uint8 *InterruptFlag)
{
    char str[1];
    
    if (*InterruptFlag)
    {
        
        *InterruptFlag = 0;
//        sprintf(str, "%d", *InterruptFlag);
//        UART_USB_PutString(str);
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    UART_Rx_INTERRUPT_Start();
    CyGlobalIntEnable; /* Enable global interrupts. */
    

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_USB_Start();
    int i = 0; 
    char j[10];
    char ch;
    UART_USB_PutString("hello\n\r");
    for(;;)
    {
        
        if (CheckInterrupt(&UART_RX_INTERRUPT_FLAG))
        {
//            ch = UART_USB_GetChar();
//            UART_USB_PutChar(ch);
//            UART_USB_PutChar(10);
//            UART_USB_PutChar(13);
            sprintf(j, "%d\r", i);
            UART_USB_PutString(j);
            i++;
        }
        //ch = UART_USB_GetChar();
        //UART_USB_PutChar(ch);

//        sprintf(string, "%d", i);
//        UART_USB_PutString(string);
//        UART_USB_PutString("\r\n");
//        i++;


    }
}

/* [] END OF FILE */
