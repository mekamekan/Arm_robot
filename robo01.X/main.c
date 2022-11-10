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

//グローバル変数
int g_ch1_rising_value, g_ch1_falling_value, g_ch1_pulse_width;
int g_ch2_rising_value, g_ch2_falling_value, g_ch2_pulse_width;
int lservo_duty = 3000, mservo_duty = 3000;
int l_reverse, m_reverse;

//プロトタイプ宣言
void putch(char data);
void CH1_Rising_interrupt(void);
void CH1_Falling_interrupt(void);
void CH2_Rising_interrupt(void);
void CH2_Falling_interrupt(void);
void m1_on(int duty);
void m2_on(int duty);
void m3_on(int duty);
void m4_on(int duty);
void r_turn(void);
void l_turn(void);
void TMR3_interrupt(void);
void TMR5_interrupt(void);



void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    
    int x, y, X, Y;
    int x_duty, y_duty;
    int ch1_pulse_width, ch2_pulse_width;
    int interval = 400;
    double r2;
    

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
    
    IOCBF0_SetInterruptHandler(CH2_Rising_interrupt);
    IOCBF1_SetInterruptHandler(CH2_Falling_interrupt);
    IOCCF2_SetInterruptHandler(CH1_Rising_interrupt);
    IOCCF3_SetInterruptHandler(CH1_Falling_interrupt);
    
    TMR3_SetInterruptHandler(TMR3_interrupt);
    TMR5_SetInterruptHandler(TMR5_interrupt);
    
    m1_on(0);
    m2_on(0);
    m3_on(0);
    m4_on(0);
    __delay_ms(1000);
    
    TMR1_StartTimer();
    r2 = 1 / sqrt(2);
    
    while (1)
    {
        
        //Add your application code
        PWM6_DutyCycleSet(mservo_duty);
        PWM6_LoadBufferSet();
        
        PWM5_DutyCycleSet(lservo_duty);
        PWM5_LoadBufferSet();
        
        //X,Y軸の基準値を0に設定
        x = g_ch2_pulse_width - 1550;
        y = g_ch1_pulse_width - 1550;
        
        //X,Y軸-45度回転
        X = (r2 * x) + (r2 * y);
        Y = (-r2 * x) + (r2 * y);
        
        //printf("\rx:%d ",X);
        //printf("y:%d\n",Y);
        
        //X軸補正
        if(X > 900){
            
            X = 1000;
            
        }
        else if((-20 < X) && (X < 20)){
            
            X = 0;
            
        }
        else if(X < -500){
            
            X = -500;
            
        }
        else
            ;
        
        //Y軸補正
        if(Y > 900){
            
            Y = 1000;
            
        }
        else if((-20 < Y) && (Y < 20)){
            
            Y = 0;
            
        }
        else if(Y < -500){
            
            Y = -500;
            
        }
        else
            ;
        
        //X軸デューティー指定
        if(X > 0){
            
            x_duty = (1023 * (X / 900));
            
        }
        else if(X < 0){
            
            x_duty = (1023 * (X / 500));
            
        }
        else
            x_duty = 0;
         
        //Y軸デューティー比指定
        if(Y > 0){
            
            y_duty = (1023 * (Y / 900));
            
        }
        else if(Y < 0){
            
            y_duty = (1023 * (Y / 500));
            
        }
        else
            y_duty = 0;
        
        
        if((DO4_PORT == 0) && (DO3_PORT == 0)){
            
            r_turn();
            
        }  
        else if((DO2_PORT == 0) && (DO1_PORT == 0)){
            
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
        if((DO1_PORT == 1) && (DO2_PORT == 0) && (lservo_duty > 2300)){
            
            lservo_duty--;
            __delay_ms(1);
            
        }
        if((DO4_PORT == 1) && (DO3_PORT == 0) && (mservo_duty < 4000)){
            
            mservo_duty++;
            
            
        }
        if((DO3_PORT == 1) && (DO4_PORT == 0) && (mservo_duty > 2500)){
            
            mservo_duty--;
            
            
        }
        
          
         
    }
}

void putch(char data){
    
    EUSART_Write(data);
    
}

void CH1_Rising_interrupt(void){
    
    g_ch1_rising_value = TMR1_ReadTimer();
}
void CH1_Falling_interrupt(void){
    
    g_ch1_falling_value = TMR1_ReadTimer();
    if(g_ch1_rising_value > g_ch1_falling_value){
        ;   
    }
    else
        g_ch1_pulse_width = g_ch1_falling_value - g_ch1_rising_value;
    
    
}
void CH2_Rising_interrupt(void){
    
    g_ch2_rising_value = TMR1_ReadTimer();
    
}
void CH2_Falling_interrupt(void){
    
    g_ch2_falling_value = TMR1_ReadTimer();
    if(g_ch2_rising_value > g_ch2_falling_value){
        ;
    }
    else
        g_ch2_pulse_width = g_ch2_falling_value - g_ch2_rising_value;
    
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

void TMR3_interrupt(void){
    ;
}
void TMR5_interrupt(void){
    
}

/**
 End of File
*/