/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_PERIPHERALNAMES_H
#define MBED_PERIPHERALNAMES_H

#include "em_adc.h"
#include "em_usart.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    DAC0_CH0,
    DAC0_CH1,
} DACName;

typedef enum {
    ADC_0 = ADC0_BASE
} ADCName;

typedef enum {
    PWM_CH0 = 0,
    PWM_CH1 = 1,
    PWM_CH2 = 2,
} PWMName;

typedef enum {
    UART_0 = UART0_BASE,
    UART_1 = UART1_BASE,
    USART_0 = USART0_BASE,
    USART_1 = USART1_BASE,
    USART_2 = USART2_BASE
} UARTName;

#define STDIO_UART_TX     USBTX
#define STDIO_UART_RX     USBRX
#define STDIO_UART        USART1

typedef enum {
    SPI_0 = USART0_BASE,
    SPI_1 = USART1_BASE,
    SPI_2 = USART2_BASE
} SPIName;

#ifdef __cplusplus
}
#endif

#endif
