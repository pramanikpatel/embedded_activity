/**
 * @file activity4.h
 * @author PRAMANIK PATEL
 * @brief Header file for activity 4
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>


void init_USART(uint16_t);
char USART_Rd_Char();
void USART_wrt_char(char);
void pt3(void);


#endif
