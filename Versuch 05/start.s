/*********************************************************************
*                    SEGGER Microcontroller GmbH                     *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*            (c) 2014 - 2022 SEGGER Microcontroller GmbH             *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
*                                                                    *
* All rights reserved.                                               *
*                                                                    *
* Redistribution and use in source and binary forms, with or         *
* without modification, are permitted provided that the following    *
* condition is met:                                                  *
*                                                                    *
* - Redistributions of source code must retain the above copyright   *
*   notice, this condition and the following disclaimer.             *
*                                                                    *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND             *
* CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,        *
* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF           *
* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE           *
* DISCLAIMED. IN NO EVENT SHALL SEGGER Microcontroller BE LIABLE FOR *
* ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR           *
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT  *
* OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;    *
* OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF      *
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT          *
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE  *
* USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH   *
* DAMAGE.                                                            *
*                                                                    *
*********************************************************************/

/*********************************************************************
*
*       _start
*
*  Function description
*  Defines entry point for an SAMD21 assembly code only
*  application.
*
*  Additional information
*    Please note, as this is an assembly code only project, the C/C++
*    runtime library has not been initialised. So do not attempt to call
*    any C/C++ library functions because they probably won't work.
*/


        .syntax unified
        .global _start
        .text
        .thumb_func

.macro delay
        mov r0, r7      //cycle 1
1:
        
        subs r0, r0, #1 //cycle 1
        nop             //cycle 1, no operation
        bne 1b          //cycle 2, ruckwarts bis 1
.endm




_start:
        ldr r0, =#0x41004408 //DIRSET OUTPUT
        ldr r1, =#0x41004410 //OUT 
        ldr r2, =#0x41004404 //DIRCLR INPUT
        ldr r3, =#2097152    //PA21 = DIRSET bit 22
        ldr r4, =#0
        ldr r5, =#591040     //INPUT pins
        ldr r6, =#0x41004420 //IN
        
        //Kalibrierung
        str r3, [r0] //setze Output
        str r3, [r1] //CAL HIGH
        ldr r7, =#50000 //delay
        delay
        str r4, [r1] //CAL LOW
        ldr r7, =#250000 //1 sek
        delay
        str r3, [r1] //CAL HIGH, beginnt Kalibrierung
        ldr r7, =#500000 //2 sek
        str r4, [r1] //CAL LOW
        ldr r7, =#50000
        str r3, [r1] //CAL HIGH
        ldr r7, =#50000
        str r4, [r1] //CAL LOW
        ldr r7, =#50000
        str r3, [r1] //CAL HIGH
        


        //pinconfig
        str r5, [r2] //Setze DIRCLR
        ldr r0, =#0b00000110
        ldr r7, =#0x41004446 //6
        strb r0, [r7]
        ldr r7, =#0x41004447 //7
        strb r0, [r7]
        ldr r7, =#0x41004452 //18 NICHT 10
        strb r0, [r7]
        ldr r7, =#0x41004450 //16
        strb r0, [r7]
        ldr r7, =#0x41004453 //19
        strb r0, [r7]

        //rader , nur einmal, danach sind manche register frei register frei
        ldr     r0, =#0x41004408 //ladt dirset PORTA und zahler fur delay
        ldr     r1, =#0x41004488 //ladt dirset PORTB 
        ldr     r2, =#0x41004410 //ladt out PORTA
        ldr     r3, =#0x41004490 //ladt out PORTB
        ldr     r4, =#32         //setze PIN A 05
        ldr     r5, =#4          //setze PIN B 02

        str r4, [r0]
        str r5, [r1]
              
        
        loop:
        //Lese input
        /*
          -----Register-----
          r0 : Rad L
          r1 : Rad R
          r2 : out PORTA
          r3 : out PORTB
          r4 : setzen der Rader
          r5 : 0
          r6 : IN
          r7 : delay count
        */
        ldr r0, [r6]
        lsls r0, #8 //Shift um die unnotigen Bits loszuwerden

        //Nacheinander schauen welche Sensoren lesen,
        //alternativ: ldr r1, = (1 << 5) |  (1 << 1) => 5. und 1. Stelle eine 1, Rest 0
        ldr r1, = (1 << 14) //XXXX0
        cmp r0, r1 //z=1 bedeutet sensor leuchtet
        beq A

        ldr r1, = (1 << 15) //XXX0X
        cmp r0, r1 
        beq B

        ldr r1, = (1 << 26) //XX0XX
        cmp r0, r1 
        beq C

        ldr r1, = (1 << 24) //X0XXX
        cmp r0, r1 
        beq D

        ldr r1, = (1 << 27) //0XXXX
        cmp r0, r1 
        beq E

        ldr r1, = (1 << 14) | (1 << 15) //XXX00
        cmp r0, r1 
        beq F

        ldr r1, = (1 << 26) | (1 << 15) //XX00X
        cmp r0, r1 
        beq G

        ldr r1, = (1 << 24) | (1 << 26) //X00XX
        cmp r0, r1 
        beq H

        ldr r1, = (1 << 27) | (1 << 24) //00XXX
        cmp r0, r1 
        beq I

        //Falls kein Fall eintritt
        ldr r0, =#1500
        ldr r1, =#1500
        ldr r7, =#4500
        str r5, [r2]
        str r5, [r3]
        delay
        b loop

A:      //XXXX0
        
        b loop

B:      //XXX0X
        
        b loop

C:      //XX0XX
        
        b loop

D:      //X0XXX
        
        b loop

E:      //0XXXX
        
        b loop

F:      //XXX00
        
        b loop

G:      //XX00X
        
        b loop

H:      //X00XX
        
        b loop

I:      //00XXX
        
        b loop

/*Falle
           L  / R
XXXXX :   0   /  0
OXXXX :   100 / 60
00XXX :   100 / 70
X0XXX :   100 / 80
X00XX :   100 / 90
XX0XX :   100 / 100
XX00X :   90  / 100
XXX0X :   80  / 100
XXX00 :   70  / 100
XXXX0 :   60  / 100


*/
        

        




         
