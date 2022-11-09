/**
  CCP8 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    ccp8.c

  @Summary
    This is the generated driver implementation file for the CCP8 driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This source file provides implementations for driver APIs for CCP8.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1779
        Driver Version    :  2.1.3
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

/**
  Section: Included Files
*/

#include <xc.h>
#include "ccp8.h"

static void (*CCP8_CallBack)(uint16_t);

/**
  Section: Capture Module APIs:
*/

static void CCP8_DefaultCallBack(uint16_t capturedValue)
{
    // Add your code here
}

void CCP8_Initialize(void)
{
    // Set the CCP8 to the options selected in the User Interface
	
	// MODE Falling edge; EN enabled; FMT right_aligned; 
	CCP8CON = 0x84;    
	
	// RH 0; 
	CCPR8H = 0x00;    
	
	// RL 0; 
	CCPR8L = 0x00;    
	
	// CTS CCP8 pin; 
	CCP8CAP = 0x00;    
    
    // Set the default call back function for CCP8
    CCP8_SetCallBack(CCP8_DefaultCallBack);

    
    // Clear the CCP8 interrupt flag
    PIR5bits.CCP8IF = 0;

    // Enable the CCP8 interrupt
    PIE5bits.CCP8IE = 1;
}

void CCP8_CaptureISR(void)
{
    CCP8_PERIOD_REG_T module;

    // Clear the CCP8 interrupt flag
    PIR5bits.CCP8IF = 0;
    
    // Copy captured value.
    module.ccpr8l = CCPR8L;
    module.ccpr8h = CCPR8H;
    
    // Return 16bit captured value
    CCP8_CallBack(module.ccpr8_16Bit);
}

void CCP8_SetCallBack(void (*customCallBack)(uint16_t)){
    CCP8_CallBack = customCallBack;
}
/**
 End of File
*/