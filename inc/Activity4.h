/**
 * @file Activity4.h
 * @author 255974 (you@domain.com)
 * @brief UART function definations
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H

void initUART(uint16_t ubrr_value);

char readCharUART();

void writeCharUART(char input_UART);


#endif