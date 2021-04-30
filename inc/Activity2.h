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
 * @brief Initialize ADC 
 * 
 */
void initADC();

/**
 * @brief reads the analog input and returning a digital 8bit value
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t readADC(uint8_t ch);



#endif