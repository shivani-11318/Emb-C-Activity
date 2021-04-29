/**
 * @file Activity2.h
 * @author 255974 (you@domain.com)
 * @brief ADC function definations
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__

/**
 * @brief defined the port pins that are being used
 * 
 */
void ports(void);

/**
 * @brief reads the analog input and returning a digital 8bit value
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t readADC(uint8_t ch);

void initADC();

#endif