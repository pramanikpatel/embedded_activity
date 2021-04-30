/**
 * @file activity2.h
 * @author PRAMANIK PATEL
 * @brief HEADER FILE FOR ACTIVITY 2
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__

#include <avr/io.h>     // header file for avr processors
#include <util/delay.h> // header for delay function

void init_ADC(void);    // initialize adc
uint16_t RdADC(uint8_t ch);   // read the adc 
void init_adcport(void);    // intialize adc pins
void pt2(void);   // implementation of activity 2 & 3

#endif

