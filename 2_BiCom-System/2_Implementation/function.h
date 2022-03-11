/**
 * @file function.h
 * @author Vartik, Amol, Yash
 * @brief 
 * @version 0.1
 * @date 2022-03-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef DRIVER_FUN_H_
#define DRIVER_FUN_H_
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define LED_GREEN 12  // Defining GREEN LED to PD12
#define LED_ORANGE 13 // Defining ORANGE LED to PD13
#define LED_RED 14    // Defining RED LED to PD 14
#define LED_BLUE 15   // Defining Blue LED to PD 15
#define BLUE_BUTTON 0 //Defining Blue button to PD 0

void my_delay(uint32_t time); // Provides Required delay

void led_init_all(void);      // LED Initialisation

void led_on(uint8_t led_no);  // LED will ON

void led_off(uint8_t led_no); // LED will OFF

void button_init(void);       // Blue Button Initialisation

int button_count(void);       // Providing Count Value

int encryption(int enc);      // Provides Encription for our data

#endif 