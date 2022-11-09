/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1779
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set S_1 aliases
#define S_1_TRIS                 TRISAbits.TRISA0
#define S_1_LAT                  LATAbits.LATA0
#define S_1_PORT                 PORTAbits.RA0
#define S_1_WPU                  WPUAbits.WPUA0
#define S_1_OD                   ODCONAbits.ODA0
#define S_1_ANS                  ANSELAbits.ANSA0
#define S_1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define S_1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define S_1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define S_1_GetValue()           PORTAbits.RA0
#define S_1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define S_1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define S_1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define S_1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define S_1_SetPushPull()        do { ODCONAbits.ODA0 = 0; } while(0)
#define S_1_SetOpenDrain()       do { ODCONAbits.ODA0 = 1; } while(0)
#define S_1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define S_1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set S_2 aliases
#define S_2_TRIS                 TRISAbits.TRISA1
#define S_2_LAT                  LATAbits.LATA1
#define S_2_PORT                 PORTAbits.RA1
#define S_2_WPU                  WPUAbits.WPUA1
#define S_2_OD                   ODCONAbits.ODA1
#define S_2_ANS                  ANSELAbits.ANSA1
#define S_2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define S_2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define S_2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define S_2_GetValue()           PORTAbits.RA1
#define S_2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define S_2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define S_2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define S_2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define S_2_SetPushPull()        do { ODCONAbits.ODA1 = 0; } while(0)
#define S_2_SetOpenDrain()       do { ODCONAbits.ODA1 = 1; } while(0)
#define S_2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define S_2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set S_3 aliases
#define S_3_TRIS                 TRISAbits.TRISA2
#define S_3_LAT                  LATAbits.LATA2
#define S_3_PORT                 PORTAbits.RA2
#define S_3_WPU                  WPUAbits.WPUA2
#define S_3_OD                   ODCONAbits.ODA2
#define S_3_ANS                  ANSELAbits.ANSA2
#define S_3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define S_3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define S_3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define S_3_GetValue()           PORTAbits.RA2
#define S_3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define S_3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define S_3_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define S_3_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define S_3_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define S_3_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define S_3_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define S_3_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set DO4 aliases
#define DO4_TRIS                 TRISAbits.TRISA3
#define DO4_LAT                  LATAbits.LATA3
#define DO4_PORT                 PORTAbits.RA3
#define DO4_WPU                  WPUAbits.WPUA3
#define DO4_OD                   ODCONAbits.ODA3
#define DO4_ANS                  ANSELAbits.ANSA3
#define DO4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define DO4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define DO4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define DO4_GetValue()           PORTAbits.RA3
#define DO4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define DO4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define DO4_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define DO4_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define DO4_SetPushPull()        do { ODCONAbits.ODA3 = 0; } while(0)
#define DO4_SetOpenDrain()       do { ODCONAbits.ODA3 = 1; } while(0)
#define DO4_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define DO4_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set RA4 procedures
#define RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()              PORTAbits.RA4
#define RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()             do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()           do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetAnalogMode()         do { ANSELAbits.ANSA4 = 1; } while(0)
#define RA4_SetDigitalMode()        do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()              PORTAbits.RA5
#define RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()             do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()           do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetAnalogMode()         do { ANSELAbits.ANSA5 = 1; } while(0)
#define RA5_SetDigitalMode()        do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set DO2 aliases
#define DO2_TRIS                 TRISAbits.TRISA6
#define DO2_LAT                  LATAbits.LATA6
#define DO2_PORT                 PORTAbits.RA6
#define DO2_WPU                  WPUAbits.WPUA6
#define DO2_OD                   ODCONAbits.ODA6
#define DO2_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define DO2_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define DO2_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define DO2_GetValue()           PORTAbits.RA6
#define DO2_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define DO2_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define DO2_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define DO2_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define DO2_SetPushPull()        do { ODCONAbits.ODA6 = 0; } while(0)
#define DO2_SetOpenDrain()       do { ODCONAbits.ODA6 = 1; } while(0)

// get/set DO3 aliases
#define DO3_TRIS                 TRISAbits.TRISA7
#define DO3_LAT                  LATAbits.LATA7
#define DO3_PORT                 PORTAbits.RA7
#define DO3_WPU                  WPUAbits.WPUA7
#define DO3_OD                   ODCONAbits.ODA7
#define DO3_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define DO3_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define DO3_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define DO3_GetValue()           PORTAbits.RA7
#define DO3_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define DO3_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define DO3_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define DO3_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define DO3_SetPushPull()        do { ODCONAbits.ODA7 = 0; } while(0)
#define DO3_SetOpenDrain()       do { ODCONAbits.ODA7 = 1; } while(0)

// get/set RB0 procedures
#define RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()              PORTBbits.RB0
#define RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()             do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()           do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetAnalogMode()         do { ANSELBbits.ANSB0 = 1; } while(0)
#define RB0_SetDigitalMode()        do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANSELBbits.ANSB1 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set M4_IN2 aliases
#define M4_IN2_TRIS                 TRISBbits.TRISB2
#define M4_IN2_LAT                  LATBbits.LATB2
#define M4_IN2_PORT                 PORTBbits.RB2
#define M4_IN2_WPU                  WPUBbits.WPUB2
#define M4_IN2_OD                   ODCONBbits.ODB2
#define M4_IN2_ANS                  ANSELBbits.ANSB2
#define M4_IN2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define M4_IN2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define M4_IN2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define M4_IN2_GetValue()           PORTBbits.RB2
#define M4_IN2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define M4_IN2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define M4_IN2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define M4_IN2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define M4_IN2_SetPushPull()        do { ODCONBbits.ODB2 = 0; } while(0)
#define M4_IN2_SetOpenDrain()       do { ODCONBbits.ODB2 = 1; } while(0)
#define M4_IN2_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define M4_IN2_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set M4_IN1 aliases
#define M4_IN1_TRIS                 TRISBbits.TRISB3
#define M4_IN1_LAT                  LATBbits.LATB3
#define M4_IN1_PORT                 PORTBbits.RB3
#define M4_IN1_WPU                  WPUBbits.WPUB3
#define M4_IN1_OD                   ODCONBbits.ODB3
#define M4_IN1_ANS                  ANSELBbits.ANSB3
#define M4_IN1_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define M4_IN1_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define M4_IN1_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define M4_IN1_GetValue()           PORTBbits.RB3
#define M4_IN1_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define M4_IN1_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define M4_IN1_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define M4_IN1_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define M4_IN1_SetPushPull()        do { ODCONBbits.ODB3 = 0; } while(0)
#define M4_IN1_SetOpenDrain()       do { ODCONBbits.ODB3 = 1; } while(0)
#define M4_IN1_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define M4_IN1_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)

// get/set DO1 aliases
#define DO1_TRIS                 TRISCbits.TRISC0
#define DO1_LAT                  LATCbits.LATC0
#define DO1_PORT                 PORTCbits.RC0
#define DO1_WPU                  WPUCbits.WPUC0
#define DO1_OD                   ODCONCbits.ODC0
#define DO1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define DO1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define DO1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define DO1_GetValue()           PORTCbits.RC0
#define DO1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define DO1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define DO1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define DO1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define DO1_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define DO1_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set M1_IN2 aliases
#define M1_IN2_TRIS                 TRISCbits.TRISC4
#define M1_IN2_LAT                  LATCbits.LATC4
#define M1_IN2_PORT                 PORTCbits.RC4
#define M1_IN2_WPU                  WPUCbits.WPUC4
#define M1_IN2_OD                   ODCONCbits.ODC4
#define M1_IN2_ANS                  ANSELCbits.ANSC4
#define M1_IN2_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define M1_IN2_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define M1_IN2_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define M1_IN2_GetValue()           PORTCbits.RC4
#define M1_IN2_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define M1_IN2_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define M1_IN2_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define M1_IN2_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define M1_IN2_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define M1_IN2_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)
#define M1_IN2_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define M1_IN2_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set M1_IN1 aliases
#define M1_IN1_TRIS                 TRISCbits.TRISC5
#define M1_IN1_LAT                  LATCbits.LATC5
#define M1_IN1_PORT                 PORTCbits.RC5
#define M1_IN1_WPU                  WPUCbits.WPUC5
#define M1_IN1_OD                   ODCONCbits.ODC5
#define M1_IN1_ANS                  ANSELCbits.ANSC5
#define M1_IN1_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define M1_IN1_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define M1_IN1_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define M1_IN1_GetValue()           PORTCbits.RC5
#define M1_IN1_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define M1_IN1_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define M1_IN1_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define M1_IN1_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define M1_IN1_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define M1_IN1_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)
#define M1_IN1_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define M1_IN1_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set M2_IN2 aliases
#define M2_IN2_TRIS                 TRISCbits.TRISC6
#define M2_IN2_LAT                  LATCbits.LATC6
#define M2_IN2_PORT                 PORTCbits.RC6
#define M2_IN2_WPU                  WPUCbits.WPUC6
#define M2_IN2_OD                   ODCONCbits.ODC6
#define M2_IN2_ANS                  ANSELCbits.ANSC6
#define M2_IN2_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define M2_IN2_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define M2_IN2_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define M2_IN2_GetValue()           PORTCbits.RC6
#define M2_IN2_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define M2_IN2_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define M2_IN2_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define M2_IN2_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define M2_IN2_SetPushPull()        do { ODCONCbits.ODC6 = 0; } while(0)
#define M2_IN2_SetOpenDrain()       do { ODCONCbits.ODC6 = 1; } while(0)
#define M2_IN2_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define M2_IN2_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set M2_IN1 aliases
#define M2_IN1_TRIS                 TRISCbits.TRISC7
#define M2_IN1_LAT                  LATCbits.LATC7
#define M2_IN1_PORT                 PORTCbits.RC7
#define M2_IN1_WPU                  WPUCbits.WPUC7
#define M2_IN1_OD                   ODCONCbits.ODC7
#define M2_IN1_ANS                  ANSELCbits.ANSC7
#define M2_IN1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define M2_IN1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define M2_IN1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define M2_IN1_GetValue()           PORTCbits.RC7
#define M2_IN1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define M2_IN1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define M2_IN1_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define M2_IN1_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define M2_IN1_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define M2_IN1_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define M2_IN1_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define M2_IN1_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set RD1 procedures
#define RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define RD1_GetValue()              PORTDbits.RD1
#define RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define RD1_SetPullup()             do { WPUDbits.WPUD1 = 1; } while(0)
#define RD1_ResetPullup()           do { WPUDbits.WPUD1 = 0; } while(0)
#define RD1_SetAnalogMode()         do { ANSELDbits.ANSD1 = 1; } while(0)
#define RD1_SetDigitalMode()        do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set RD2 procedures
#define RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define RD2_GetValue()              PORTDbits.RD2
#define RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define RD2_SetPullup()             do { WPUDbits.WPUD2 = 1; } while(0)
#define RD2_ResetPullup()           do { WPUDbits.WPUD2 = 0; } while(0)
#define RD2_SetAnalogMode()         do { ANSELDbits.ANSD2 = 1; } while(0)
#define RD2_SetDigitalMode()        do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set RD3 procedures
#define RD3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define RD3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define RD3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define RD3_GetValue()              PORTDbits.RD3
#define RD3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define RD3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define RD3_SetPullup()             do { WPUDbits.WPUD3 = 1; } while(0)
#define RD3_ResetPullup()           do { WPUDbits.WPUD3 = 0; } while(0)
#define RD3_SetAnalogMode()         do { ANSELDbits.ANSD3 = 1; } while(0)
#define RD3_SetDigitalMode()        do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set RD5 procedures
#define RD5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define RD5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define RD5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define RD5_GetValue()              PORTDbits.RD5
#define RD5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define RD5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define RD5_SetPullup()             do { WPUDbits.WPUD5 = 1; } while(0)
#define RD5_ResetPullup()           do { WPUDbits.WPUD5 = 0; } while(0)
#define RD5_SetAnalogMode()         do { ANSELDbits.ANSD5 = 1; } while(0)
#define RD5_SetDigitalMode()        do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set M3_IN2 aliases
#define M3_IN2_TRIS                 TRISDbits.TRISD6
#define M3_IN2_LAT                  LATDbits.LATD6
#define M3_IN2_PORT                 PORTDbits.RD6
#define M3_IN2_WPU                  WPUDbits.WPUD6
#define M3_IN2_OD                   ODCONDbits.ODD6
#define M3_IN2_ANS                  ANSELDbits.ANSD6
#define M3_IN2_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define M3_IN2_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define M3_IN2_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define M3_IN2_GetValue()           PORTDbits.RD6
#define M3_IN2_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define M3_IN2_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define M3_IN2_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define M3_IN2_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define M3_IN2_SetPushPull()        do { ODCONDbits.ODD6 = 0; } while(0)
#define M3_IN2_SetOpenDrain()       do { ODCONDbits.ODD6 = 1; } while(0)
#define M3_IN2_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define M3_IN2_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set M3_IN1 aliases
#define M3_IN1_TRIS                 TRISDbits.TRISD7
#define M3_IN1_LAT                  LATDbits.LATD7
#define M3_IN1_PORT                 PORTDbits.RD7
#define M3_IN1_WPU                  WPUDbits.WPUD7
#define M3_IN1_OD                   ODCONDbits.ODD7
#define M3_IN1_ANS                  ANSELDbits.ANSD7
#define M3_IN1_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define M3_IN1_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define M3_IN1_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define M3_IN1_GetValue()           PORTDbits.RD7
#define M3_IN1_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define M3_IN1_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define M3_IN1_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define M3_IN1_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define M3_IN1_SetPushPull()        do { ODCONDbits.ODD7 = 0; } while(0)
#define M3_IN1_SetOpenDrain()       do { ODCONDbits.ODD7 = 1; } while(0)
#define M3_IN1_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define M3_IN1_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/