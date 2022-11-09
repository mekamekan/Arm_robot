/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1779
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include <math.h>

/*
                         Main application
 */
unsigned int g_PWM1_rising_value;
unsigned int g_PWM1_falling_value;
unsigned int g_PWM1_pulse_width;

unsigned int g_PWM2_rising_value;
unsigned int g_PWM2_falling_value;
unsigned int g_PWM2_pulse_width;

void putch(char data);
void PWM1_Rising_interrupt(unsigned int PWM1_rising_value);
void PWM1_Falling_interrupt(unsigned int PWM1_falling_value);

void PWM2_Rising_interrupt(unsigned int PWM2_rising_value);
void PWM2_Falling_interrupt(unsigned int PWM2_falling_value);

void m1_on(int duty);
void m2_on(int duty);
void m3_on(int duty);
void m4_on(int duty);

void r_turn(void);
void l_turn(void);



void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    
    int x, y;
    int x_duty, y_duty;
    int lservo_duty = 3000, mservo_duty = 3000;
    unsigned int PWM1_pulse_width, PWM2_pulse_width;
    

    
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    CCP1_SetCallBack(PWM1_Rising_interrupt);
    CCP2_SetCallBack(PWM1_Falling_interrupt);
    CCP7_SetCallBack(PWM2_Rising_interrupt);
    CCP8_SetCallBack(PWM2_Falling_interrupt);
    
    m1_on(0);
    m2_on(0);
    m3_on(0);
    m4_on(0);
    __delay_ms(1000);
    
    while (1)
    {
        
        
        
        //Add your application code
        PWM6_DutyCycleSet(mservo_duty);
        PWM6_LoadBufferSet();
        
        PWM5_DutyCycleSet(lservo_duty);
        PWM5_LoadBufferSet();
        
        
        
        //x���␳
        if((0 <= g_PWM2_pulse_width) && (g_PWM2_pulse_width < 400)){
            
            
            PWM2_pulse_width = 0;
            
        }
        else if((1500 <= g_PWM2_pulse_width) && (g_PWM2_pulse_width <= 1600)){
            
            PWM2_pulse_width = 1550;
            
        }
        else if(3200 < g_PWM2_pulse_width){
            
            PWM2_pulse_width = 3200;
            
        }
        else{
            
            PWM2_pulse_width = g_PWM2_pulse_width;
            
        }
            
        
        //x���␳
        if((0 <= g_PWM1_pulse_width) && (g_PWM1_pulse_width < 400)){
            
            
            PWM1_pulse_width = 0;
            
        }
        else if((1500 <= g_PWM1_pulse_width) && (g_PWM1_pulse_width <= 1600)){
            
            PWM1_pulse_width = 1550;
            
        }
        else if(3200 < g_PWM1_pulse_width){
            
            PWM1_pulse_width = 3200;
            
        }
        else{
            
            PWM1_pulse_width = g_PWM1_pulse_width;
            
        }
        
        //printf("\rx:%u ",PWM2_pulse_width);
        //printf("y:%u\n",PWM1_pulse_width);
        
        x = PWM2_pulse_width - 1550;
        y = PWM1_pulse_width - 1550;
        
        //printf("\rx:%d ",x_duty);
        //printf("y:%d\n",y_duty);
        
        if(x > 0){
            
            x_duty = (1023 * (x / 1650));
            
        }
        else if(x < 0){
            
            x_duty = (1023 * (x / 1550));
            
        }
        else
            x_duty = 0;
        
        if(y > 0){
            
            y_duty = (1023 * (y / 1650));
            
        }
        else if(y < 0){
            
            y_duty = (1023 * (y / 1550));
            
        }
        else
            y_duty = 0;
        
        
        
        if((DO1_PORT == 0) && (DO2_PORT == 0)){
            
            r_turn();
            
        }  
        else if((DO3_PORT == 0) && (DO4_PORT == 0)){
            
            l_turn();
            
        }
        else{
            
            m1_on(y_duty);
            m2_on(x_duty);
            m3_on(x_duty);
            m4_on(y_duty);
             
        }        
        
        
        if((DO2_PORT == 1) && (DO1_PORT == 0) && (lservo_duty < 4600)){
            
            lservo_duty++;
            __delay_ms(1);
            
        }
        if((DO4_PORT == 1) && (DO3_PORT == 0) && (lservo_duty > 2300)){
            
            lservo_duty--;
            __delay_ms(1);
            
        }
        if((DO3_PORT == 1) && (DO4_PORT == 0) && (mservo_duty < 4000)){
            
            mservo_duty++;
            
        }
        if((DO1_PORT == 1) && (DO2_PORT == 0) && (mservo_duty > 2500)){
            
            mservo_duty--;
            
        }
        
          
         
    }
}

void putch(char data){
    
    EUSART_Write(data);
    
}
void PWM1_Rising_interrupt(unsigned int PWM1_rising_value){
    
    g_PWM1_rising_value = PWM1_rising_value;
    
}
void PWM1_Falling_interrupt(unsigned int PWM1_falling_value){
    
    g_PWM1_falling_value = PWM1_falling_value;
    
    if(g_PWM1_rising_value > g_PWM1_falling_value){
        
        //g_pulse_width = (65535 - g_falling_value) + g_rising_value;
        ;
    }
    else
        g_PWM1_pulse_width = g_PWM1_falling_value - g_PWM1_rising_value;
    
}

void PWM2_Rising_interrupt(unsigned int PWM2_rising_value){
    
    g_PWM2_rising_value = PWM2_rising_value;
    
}
void PWM2_Falling_interrupt(unsigned int PWM2_falling_value){
    
    g_PWM2_falling_value = PWM2_falling_value;
    
    if(g_PWM2_rising_value > g_PWM2_falling_value){
        
        //g_pulse_width = (65535 - g_falling_value) + g_rising_value;
        ;
    }
    else
        g_PWM2_pulse_width = g_PWM2_falling_value - g_PWM2_rising_value;
    
}

void m1_on(int duty){
    
    if(duty > 0){
        
        duty = 32000 * (duty / 1023);
        
        M1_IN1_SetHigh();
        M1_IN2_SetLow();
        PWM11_DutyCycleSet(duty);
        PWM11_LoadBufferSet();
        
    }
    else if(duty < 0){
        
        duty = -32000 * (duty / 1023);
        M1_IN1_SetLow();
        M1_IN2_SetHigh();
        PWM11_DutyCycleSet(duty);
        PWM11_LoadBufferSet();
        
    }
    else{
        
        M1_IN1_SetHigh();
        M1_IN2_SetHigh();
        PWM11_DutyCycleSet(duty);
        PWM11_LoadBufferSet();
    }
    
    
    
}
void m2_on(int duty){
    
    if(duty > 0){
        
        M2_IN1_SetLow();
        M2_IN2_SetHigh();
        PWM4_LoadDutyValue(duty);
        
    }
    else if(duty < 0){
        
        duty *= -1;
        M2_IN1_SetHigh();
        M2_IN2_SetLow();
        PWM4_LoadDutyValue(duty);
        
    }
    else{
        
        M2_IN1_SetHigh();
        M2_IN2_SetHigh();
        PWM4_LoadDutyValue(duty);
        
    }
    
    
}
void m3_on(int duty){
    
    if(duty > 0){
        
        M3_IN1_SetHigh();
        M3_IN2_SetLow();
        PWM3_LoadDutyValue(duty);
        
    }
    else if(duty < 0){
        
        duty *= -1;
        M3_IN1_SetLow();
        M3_IN2_SetHigh();
        PWM3_LoadDutyValue(duty);
        
    }
    else{
        
        M3_IN1_SetHigh();
        M3_IN2_SetHigh();
        PWM3_LoadDutyValue(duty);
    }
   
}
void m4_on(int duty){
    
    if(duty > 0){
        
        M4_IN1_SetLow();
        M4_IN2_SetHigh();
        PWM9_LoadDutyValue(duty);
        
    }
    else if(duty < 0){
        
        duty *= -1;
        M4_IN1_SetHigh();
        M4_IN2_SetLow();
        PWM9_LoadDutyValue(duty);
        
    }
    else{
        
        M4_IN1_SetHigh();
        M4_IN2_SetHigh();
        PWM9_LoadDutyValue(duty);
        
    }
        
    
}

void r_turn(void){
    
    m2_on(1023);
    m4_on(1023);
    m1_on(-1023);
    m3_on(-1023);
    
}
void l_turn(void){
    
    m2_on(-1023);
    m4_on(-1023);
    m1_on(1023);
    m3_on(1023);
    
}


/**
 End of File
*/