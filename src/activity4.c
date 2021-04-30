/**
 * @file activity4.c
 * @author PRAMANIK PATEL
 * @brief Activity 4: Communication of data using USART
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

/**
 * @brief initialization of USART
 * 
 * @param data 
 */
void init_USART(uint16_t data)
{
    UBRR0H = (data>>8) & 0x00ff;
    UBRR0L = data;
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

/**
 * @brief Reading character recieved by USART
 * 
 * @return char 
 */
char USART_Rd_Char()
{
    while(!(UCSR0A & (1<<RXC0)))
    {
      //do nothing
    }
    return UDR0;
}

/**
 * @brief Sending data by USART
 * 
 * @param data 
 */
void USART_wrt_char(char data)
{
    while(!(UCSR0A & (1<<UDRE0)));
    UDR0 = data;
}


/**
 * @brief from pwm temperature is printed
 * 
 */
void pt3 (void)
{
    init_USART(103);
    if(OCR0A == 50)
    {
        USART_wrt_char(20);
    }
    else if(OCR0A == 101)
    {
        USART_wrt_char(25);
    }
    else if(OCR0A == 178)
    {
        USART_wrt_char(29);
    }
    else if(OCR0A == 242)
    {
        USART_wrt_char(33);
    }
}
