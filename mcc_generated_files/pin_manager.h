/**
  System Interrupts Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for MPLAB(c) Code Configurator interrupts.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.85.0
        Device            :  PIC32MX470F512H
        Version           :  1.02
    The generated drivers are tested against the following:
        Compiler          :  XC32 1.42
        MPLAB             :  MPLAB X 3.55

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>
/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RB8, high using LATBbits.LATB8.

  @Description
    Sets the GPIO pin, RB8, high using LATBbits.LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB8 high (1)
    IO_RB8_SetHigh();
    </code>

*/
#define IO_RB8_SetHigh()          LATBbits.LATB8 = 1
/**
  @Summary
    Sets the GPIO pin, RB8, low using LATBbits.LATB8.

  @Description
    Sets the GPIO pin, RB8, low using LATBbits.LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB8 low (0)
    IO_RB8_SetLow();
    </code>

*/
#define IO_RB8_SetLow()           LATBbits.LATB8 = 0
/**
  @Summary
    Toggles the GPIO pin, RB8, using LATBbits.LATB8.

  @Description
    Toggles the GPIO pin, RB8, using LATBbits.LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB8
    IO_RB8_Toggle();
    </code>

*/
#define IO_RB8_Toggle()           LATBbits.LATB8 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RB8.

  @Description
    Reads the value of the GPIO pin, RB8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB8
    postValue = IO_RB8_GetValue();
    </code>

*/
#define IO_RB8_GetValue()         PORTBbits.RB8
/**
  @Summary
    Configures the GPIO pin, RB8, as an input.

  @Description
    Configures the GPIO pin, RB8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB8 as an input
    IO_RB8_SetDigitalInput();
    </code>

*/
#define IO_RB8_SetDigitalInput()  TRISBbits.TRISB8 = 1
/**
  @Summary
    Configures the GPIO pin, RB8, as an output.

  @Description
    Configures the GPIO pin, RB8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB8 as an output
    IO_RB8_SetDigitalOutput();
    </code>

*/
#define IO_RB8_SetDigitalOutput() TRISBbits.TRISB8 = 0
/**
  @Summary
    Sets the GPIO pin, RB9, high using LATBbits.LATB9.

  @Description
    Sets the GPIO pin, RB9, high using LATBbits.LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 high (1)
    U2RX_SetHigh();
    </code>

*/
#define U2RX_SetHigh()          LATBbits.LATB9 = 1
/**
  @Summary
    Sets the GPIO pin, RB9, low using LATBbits.LATB9.

  @Description
    Sets the GPIO pin, RB9, low using LATBbits.LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 low (0)
    U2RX_SetLow();
    </code>

*/
#define U2RX_SetLow()           LATBbits.LATB9 = 0
/**
  @Summary
    Toggles the GPIO pin, RB9, using LATBbits.LATB9.

  @Description
    Toggles the GPIO pin, RB9, using LATBbits.LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB9
    U2RX_Toggle();
    </code>

*/
#define U2RX_Toggle()           LATBbits.LATB9 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RB9.

  @Description
    Reads the value of the GPIO pin, RB9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB9
    postValue = U2RX_GetValue();
    </code>

*/
#define U2RX_GetValue()         PORTBbits.RB9
/**
  @Summary
    Configures the GPIO pin, RB9, as an input.

  @Description
    Configures the GPIO pin, RB9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an input
    U2RX_SetDigitalInput();
    </code>

*/
#define U2RX_SetDigitalInput()  TRISBbits.TRISB9 = 1
/**
  @Summary
    Configures the GPIO pin, RB9, as an output.

  @Description
    Configures the GPIO pin, RB9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an output
    U2RX_SetDigitalOutput();
    </code>

*/
#define U2RX_SetDigitalOutput() TRISBbits.TRISB9 = 0
/**
  @Summary
    Sets the GPIO pin, RD0, high using LATDbits.LATD0.

  @Description
    Sets the GPIO pin, RD0, high using LATDbits.LATD0.

  @Preconditions
    The RD0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD0 high (1)
    SIM_RES_SetHigh();
    </code>

*/
#define SIM_RES_SetHigh()          LATDbits.LATD0 = 1
/**
  @Summary
    Sets the GPIO pin, RD0, low using LATDbits.LATD0.

  @Description
    Sets the GPIO pin, RD0, low using LATDbits.LATD0.

  @Preconditions
    The RD0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD0 low (0)
    SIM_RES_SetLow();
    </code>

*/
#define SIM_RES_SetLow()           LATDbits.LATD0 = 0
/**
  @Summary
    Toggles the GPIO pin, RD0, using LATDbits.LATD0.

  @Description
    Toggles the GPIO pin, RD0, using LATDbits.LATD0.

  @Preconditions
    The RD0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD0
    SIM_RES_Toggle();
    </code>

*/
#define SIM_RES_Toggle()           LATDbits.LATD0 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RD0.

  @Description
    Reads the value of the GPIO pin, RD0.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD0
    postValue = SIM_RES_GetValue();
    </code>

*/
#define SIM_RES_GetValue()         PORTDbits.RD0
/**
  @Summary
    Configures the GPIO pin, RD0, as an input.

  @Description
    Configures the GPIO pin, RD0, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD0 as an input
    SIM_RES_SetDigitalInput();
    </code>

*/
#define SIM_RES_SetDigitalInput()  TRISDbits.TRISD0 = 1
/**
  @Summary
    Configures the GPIO pin, RD0, as an output.

  @Description
    Configures the GPIO pin, RD0, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD0 as an output
    SIM_RES_SetDigitalOutput();
    </code>

*/
#define SIM_RES_SetDigitalOutput() TRISDbits.TRISD0 = 0
/**
  @Summary
    Sets the GPIO pin, RD2, high using LATDbits.LATD2.

  @Description
    Sets the GPIO pin, RD2, high using LATDbits.LATD2.

  @Preconditions
    The RD2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD2 high (1)
    SCK1_SetHigh();
    </code>

*/
#define SCK1_SetHigh()          LATDbits.LATD2 = 1
/**
  @Summary
    Sets the GPIO pin, RD2, low using LATDbits.LATD2.

  @Description
    Sets the GPIO pin, RD2, low using LATDbits.LATD2.

  @Preconditions
    The RD2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD2 low (0)
    SCK1_SetLow();
    </code>

*/
#define SCK1_SetLow()           LATDbits.LATD2 = 0
/**
  @Summary
    Toggles the GPIO pin, RD2, using LATDbits.LATD2.

  @Description
    Toggles the GPIO pin, RD2, using LATDbits.LATD2.

  @Preconditions
    The RD2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD2
    SCK1_Toggle();
    </code>

*/
#define SCK1_Toggle()           LATDbits.LATD2 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RD2.

  @Description
    Reads the value of the GPIO pin, RD2.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD2
    postValue = SCK1_GetValue();
    </code>

*/
#define SCK1_GetValue()         PORTDbits.RD2
/**
  @Summary
    Configures the GPIO pin, RD2, as an input.

  @Description
    Configures the GPIO pin, RD2, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD2 as an input
    SCK1_SetDigitalInput();
    </code>

*/
#define SCK1_SetDigitalInput()  TRISDbits.TRISD2 = 1
/**
  @Summary
    Configures the GPIO pin, RD2, as an output.

  @Description
    Configures the GPIO pin, RD2, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD2 as an output
    SCK1_SetDigitalOutput();
    </code>

*/
#define SCK1_SetDigitalOutput() TRISDbits.TRISD2 = 0
/**
  @Summary
    Sets the GPIO pin, RD3, high using LATDbits.LATD3.

  @Description
    Sets the GPIO pin, RD3, high using LATDbits.LATD3.

  @Preconditions
    The RD3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD3 high (1)
    scePin_SetHigh();
    </code>

*/
#define scePin_SetHigh()          LATDbits.LATD3 = 1
/**
  @Summary
    Sets the GPIO pin, RD3, low using LATDbits.LATD3.

  @Description
    Sets the GPIO pin, RD3, low using LATDbits.LATD3.

  @Preconditions
    The RD3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD3 low (0)
    scePin_SetLow();
    </code>

*/
#define scePin_SetLow()           LATDbits.LATD3 = 0
/**
  @Summary
    Toggles the GPIO pin, RD3, using LATDbits.LATD3.

  @Description
    Toggles the GPIO pin, RD3, using LATDbits.LATD3.

  @Preconditions
    The RD3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD3
    scePin_Toggle();
    </code>

*/
#define scePin_Toggle()           LATDbits.LATD3 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RD3.

  @Description
    Reads the value of the GPIO pin, RD3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD3
    postValue = scePin_GetValue();
    </code>

*/
#define scePin_GetValue()         PORTDbits.RD3
/**
  @Summary
    Configures the GPIO pin, RD3, as an input.

  @Description
    Configures the GPIO pin, RD3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD3 as an input
    scePin_SetDigitalInput();
    </code>

*/
#define scePin_SetDigitalInput()  TRISDbits.TRISD3 = 1
/**
  @Summary
    Configures the GPIO pin, RD3, as an output.

  @Description
    Configures the GPIO pin, RD3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD3 as an output
    scePin_SetDigitalOutput();
    </code>

*/
#define scePin_SetDigitalOutput() TRISDbits.TRISD3 = 0
/**
  @Summary
    Sets the GPIO pin, RD4, high using LATDbits.LATD4.

  @Description
    Sets the GPIO pin, RD4, high using LATDbits.LATD4.

  @Preconditions
    The RD4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD4 high (1)
    SDO_SetHigh();
    </code>

*/
#define SDO_SetHigh()          LATDbits.LATD4 = 1
/**
  @Summary
    Sets the GPIO pin, RD4, low using LATDbits.LATD4.

  @Description
    Sets the GPIO pin, RD4, low using LATDbits.LATD4.

  @Preconditions
    The RD4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD4 low (0)
    SDO_SetLow();
    </code>

*/
#define SDO_SetLow()           LATDbits.LATD4 = 0
/**
  @Summary
    Toggles the GPIO pin, RD4, using LATDbits.LATD4.

  @Description
    Toggles the GPIO pin, RD4, using LATDbits.LATD4.

  @Preconditions
    The RD4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD4
    SDO_Toggle();
    </code>

*/
#define SDO_Toggle()           LATDbits.LATD4 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RD4.

  @Description
    Reads the value of the GPIO pin, RD4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD4
    postValue = SDO_GetValue();
    </code>

*/
#define SDO_GetValue()         PORTDbits.RD4
/**
  @Summary
    Configures the GPIO pin, RD4, as an input.

  @Description
    Configures the GPIO pin, RD4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD4 as an input
    SDO_SetDigitalInput();
    </code>

*/
#define SDO_SetDigitalInput()  TRISDbits.TRISD4 = 1
/**
  @Summary
    Configures the GPIO pin, RD4, as an output.

  @Description
    Configures the GPIO pin, RD4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD4 as an output
    SDO_SetDigitalOutput();
    </code>

*/
#define SDO_SetDigitalOutput() TRISDbits.TRISD4 = 0
/**
  @Summary
    Sets the GPIO pin, RD5, high using LATDbits.LATD5.

  @Description
    Sets the GPIO pin, RD5, high using LATDbits.LATD5.

  @Preconditions
    The RD5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD5 high (1)
    dcPin_SetHigh();
    </code>

*/
#define dcPin_SetHigh()          LATDbits.LATD5 = 1
/**
  @Summary
    Sets the GPIO pin, RD5, low using LATDbits.LATD5.

  @Description
    Sets the GPIO pin, RD5, low using LATDbits.LATD5.

  @Preconditions
    The RD5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD5 low (0)
    dcPin_SetLow();
    </code>

*/
#define dcPin_SetLow()           LATDbits.LATD5 = 0
/**
  @Summary
    Toggles the GPIO pin, RD5, using LATDbits.LATD5.

  @Description
    Toggles the GPIO pin, RD5, using LATDbits.LATD5.

  @Preconditions
    The RD5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD5
    dcPin_Toggle();
    </code>

*/
#define dcPin_Toggle()           LATDbits.LATD5 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RD5.

  @Description
    Reads the value of the GPIO pin, RD5.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD5
    postValue = dcPin_GetValue();
    </code>

*/
#define dcPin_GetValue()         PORTDbits.RD5
/**
  @Summary
    Configures the GPIO pin, RD5, as an input.

  @Description
    Configures the GPIO pin, RD5, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD5 as an input
    dcPin_SetDigitalInput();
    </code>

*/
#define dcPin_SetDigitalInput()  TRISDbits.TRISD5 = 1
/**
  @Summary
    Configures the GPIO pin, RD5, as an output.

  @Description
    Configures the GPIO pin, RD5, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD5 as an output
    dcPin_SetDigitalOutput();
    </code>

*/
#define dcPin_SetDigitalOutput() TRISDbits.TRISD5 = 0
/**
  @Summary
    Sets the GPIO pin, RD6, high using LATDbits.LATD6.

  @Description
    Sets the GPIO pin, RD6, high using LATDbits.LATD6.

  @Preconditions
    The RD6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD6 high (1)
    SW1_SetHigh();
    </code>

*/
#define SW1_SetHigh()          LATDbits.LATD6 = 1
/**
  @Summary
    Sets the GPIO pin, RD6, low using LATDbits.LATD6.

  @Description
    Sets the GPIO pin, RD6, low using LATDbits.LATD6.

  @Preconditions
    The RD6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RD6 low (0)
    SW1_SetLow();
    </code>

*/
#define SW1_SetLow()           LATDbits.LATD6 = 0
/**
  @Summary
    Toggles the GPIO pin, RD6, using LATDbits.LATD6.

  @Description
    Toggles the GPIO pin, RD6, using LATDbits.LATD6.

  @Preconditions
    The RD6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RD6
    SW1_Toggle();
    </code>

*/
#define SW1_Toggle()           LATDbits.LATD6 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RD6.

  @Description
    Reads the value of the GPIO pin, RD6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RD6
    postValue = SW1_GetValue();
    </code>

*/
#define SW1_GetValue()         PORTDbits.RD6
/**
  @Summary
    Configures the GPIO pin, RD6, as an input.

  @Description
    Configures the GPIO pin, RD6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD6 as an input
    SW1_SetDigitalInput();
    </code>

*/
#define SW1_SetDigitalInput()  TRISDbits.TRISD6 = 1
/**
  @Summary
    Configures the GPIO pin, RD6, as an output.

  @Description
    Configures the GPIO pin, RD6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RD6 as an output
    SW1_SetDigitalOutput();
    </code>

*/
#define SW1_SetDigitalOutput() TRISDbits.TRISD6 = 0
/**
  @Summary
    Sets the GPIO pin, RE3, high using LATEbits.LATE3.

  @Description
    Sets the GPIO pin, RE3, high using LATEbits.LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 high (1)
    rstPin_SetHigh();
    </code>

*/
#define rstPin_SetHigh()          LATEbits.LATE3 = 1
/**
  @Summary
    Sets the GPIO pin, RE3, low using LATEbits.LATE3.

  @Description
    Sets the GPIO pin, RE3, low using LATEbits.LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 low (0)
    rstPin_SetLow();
    </code>

*/
#define rstPin_SetLow()           LATEbits.LATE3 = 0
/**
  @Summary
    Toggles the GPIO pin, RE3, using LATEbits.LATE3.

  @Description
    Toggles the GPIO pin, RE3, using LATEbits.LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE3
    rstPin_Toggle();
    </code>

*/
#define rstPin_Toggle()           LATEbits.LATE3 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE3.

  @Description
    Reads the value of the GPIO pin, RE3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE3
    postValue = rstPin_GetValue();
    </code>

*/
#define rstPin_GetValue()         PORTEbits.RE3
/**
  @Summary
    Configures the GPIO pin, RE3, as an input.

  @Description
    Configures the GPIO pin, RE3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an input
    rstPin_SetDigitalInput();
    </code>

*/
#define rstPin_SetDigitalInput()  TRISEbits.TRISE3 = 1
/**
  @Summary
    Configures the GPIO pin, RE3, as an output.

  @Description
    Configures the GPIO pin, RE3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an output
    rstPin_SetDigitalOutput();
    </code>

*/
#define rstPin_SetDigitalOutput() TRISEbits.TRISE3 = 0
/**
  @Summary
    Sets the GPIO pin, RE4, high using LATEbits.LATE4.

  @Description
    Sets the GPIO pin, RE4, high using LATEbits.LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE4 high (1)
    LEDR_SetHigh();
    </code>

*/
#define LEDR_SetHigh()          LATEbits.LATE4 = 1
/**
  @Summary
    Sets the GPIO pin, RE4, low using LATEbits.LATE4.

  @Description
    Sets the GPIO pin, RE4, low using LATEbits.LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE4 low (0)
    LEDR_SetLow();
    </code>

*/
#define LEDR_SetLow()           LATEbits.LATE4 = 0
/**
  @Summary
    Toggles the GPIO pin, RE4, using LATEbits.LATE4.

  @Description
    Toggles the GPIO pin, RE4, using LATEbits.LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE4
    LEDR_Toggle();
    </code>

*/
#define LEDR_Toggle()           LATEbits.LATE4 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE4.

  @Description
    Reads the value of the GPIO pin, RE4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE4
    postValue = LEDR_GetValue();
    </code>

*/
#define LEDR_GetValue()         PORTEbits.RE4
/**
  @Summary
    Configures the GPIO pin, RE4, as an input.

  @Description
    Configures the GPIO pin, RE4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE4 as an input
    LEDR_SetDigitalInput();
    </code>

*/
#define LEDR_SetDigitalInput()  TRISEbits.TRISE4 = 1
/**
  @Summary
    Configures the GPIO pin, RE4, as an output.

  @Description
    Configures the GPIO pin, RE4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE4 as an output
    LEDR_SetDigitalOutput();
    </code>

*/
#define LEDR_SetDigitalOutput() TRISEbits.TRISE4 = 0
/**
  @Summary
    Sets the GPIO pin, RE6, high using LATEbits.LATE6.

  @Description
    Sets the GPIO pin, RE6, high using LATEbits.LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE6 high (1)
    LEDG_SetHigh();
    </code>

*/
#define LEDG_SetHigh()          LATEbits.LATE6 = 1
/**
  @Summary
    Sets the GPIO pin, RE6, low using LATEbits.LATE6.

  @Description
    Sets the GPIO pin, RE6, low using LATEbits.LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE6 low (0)
    LEDG_SetLow();
    </code>

*/
#define LEDG_SetLow()           LATEbits.LATE6 = 0
/**
  @Summary
    Toggles the GPIO pin, RE6, using LATEbits.LATE6.

  @Description
    Toggles the GPIO pin, RE6, using LATEbits.LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE6
    LEDG_Toggle();
    </code>

*/
#define LEDG_Toggle()           LATEbits.LATE6 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE6.

  @Description
    Reads the value of the GPIO pin, RE6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE6
    postValue = LEDG_GetValue();
    </code>

*/
#define LEDG_GetValue()         PORTEbits.RE6
/**
  @Summary
    Configures the GPIO pin, RE6, as an input.

  @Description
    Configures the GPIO pin, RE6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE6 as an input
    LEDG_SetDigitalInput();
    </code>

*/
#define LEDG_SetDigitalInput()  TRISEbits.TRISE6 = 1
/**
  @Summary
    Configures the GPIO pin, RE6, as an output.

  @Description
    Configures the GPIO pin, RE6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE6 as an output
    LEDG_SetDigitalOutput();
    </code>

*/
#define LEDG_SetDigitalOutput() TRISEbits.TRISE6 = 0
/**
  @Summary
    Sets the GPIO pin, RE7, high using LATEbits.LATE7.

  @Description
    Sets the GPIO pin, RE7, high using LATEbits.LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE7 high (1)
    LEDY_SetHigh();
    </code>

*/
#define LEDY_SetHigh()          LATEbits.LATE7 = 1
/**
  @Summary
    Sets the GPIO pin, RE7, low using LATEbits.LATE7.

  @Description
    Sets the GPIO pin, RE7, low using LATEbits.LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE7 low (0)
    LEDY_SetLow();
    </code>

*/
#define LEDY_SetLow()           LATEbits.LATE7 = 0
/**
  @Summary
    Toggles the GPIO pin, RE7, using LATEbits.LATE7.

  @Description
    Toggles the GPIO pin, RE7, using LATEbits.LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE7
    LEDY_Toggle();
    </code>

*/
#define LEDY_Toggle()           LATEbits.LATE7 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE7.

  @Description
    Reads the value of the GPIO pin, RE7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE7
    postValue = LEDY_GetValue();
    </code>

*/
#define LEDY_GetValue()         PORTEbits.RE7
/**
  @Summary
    Configures the GPIO pin, RE7, as an input.

  @Description
    Configures the GPIO pin, RE7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE7 as an input
    LEDY_SetDigitalInput();
    </code>

*/
#define LEDY_SetDigitalInput()  TRISEbits.TRISE7 = 1
/**
  @Summary
    Configures the GPIO pin, RE7, as an output.

  @Description
    Configures the GPIO pin, RE7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE7 as an output
    LEDY_SetDigitalOutput();
    </code>

*/
#define LEDY_SetDigitalOutput() TRISEbits.TRISE7 = 0
/**
  @Summary
    Sets the GPIO pin, RG8, high using LATGbits.LATG8.

  @Description
    Sets the GPIO pin, RG8, high using LATGbits.LATG8.

  @Preconditions
    The RG8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG8 high (1)
    RG8_SetHigh();
    </code>

*/
#define RG8_SetHigh()          LATGbits.LATG8 = 1
/**
  @Summary
    Sets the GPIO pin, RG8, low using LATGbits.LATG8.

  @Description
    Sets the GPIO pin, RG8, low using LATGbits.LATG8.

  @Preconditions
    The RG8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RG8 low (0)
    RG8_SetLow();
    </code>

*/
#define RG8_SetLow()           LATGbits.LATG8 = 0
/**
  @Summary
    Toggles the GPIO pin, RG8, using LATGbits.LATG8.

  @Description
    Toggles the GPIO pin, RG8, using LATGbits.LATG8.

  @Preconditions
    The RG8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RG8
    RG8_Toggle();
    </code>

*/
#define RG8_Toggle()           LATGbits.LATG8 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RG8.

  @Description
    Reads the value of the GPIO pin, RG8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RG8
    postValue = RG8_GetValue();
    </code>

*/
#define RG8_GetValue()         PORTGbits.RG8
/**
  @Summary
    Configures the GPIO pin, RG8, as an input.

  @Description
    Configures the GPIO pin, RG8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG8 as an input
    RG8_SetDigitalInput();
    </code>

*/
#define RG8_SetDigitalInput()  TRISGbits.TRISG8 = 1
/**
  @Summary
    Configures the GPIO pin, RG8, as an output.

  @Description
    Configures the GPIO pin, RG8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RG8 as an output
    RG8_SetDigitalOutput();
    </code>

*/
#define RG8_SetDigitalOutput() TRISGbits.TRISG8 = 0

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC32MX470F512H
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize(void);

#endif
