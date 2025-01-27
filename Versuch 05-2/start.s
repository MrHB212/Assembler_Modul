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

.macro R100_LX
        ldr r4, =#32
        str r4, [r2]
        ldr r4, =#4
        str r4, [r3]
        ldr r4, =#0
        delay
        str r4, [r2]
        ldr r7, =#5
        delay
        str r4, [r3]
        ldr r7, =#4500
        delay

.endm

.macro L100_RX
        ldr r4, =#32
        str r4, [r2]
        ldr r4, =#4
        str r4, [r3]
        ldr r4, =#0
        delay
        str r4, [r3]
        ldr r7, =#5
        delay
        str r4, [r2]
        ldr r7, =#4500
        delay
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

        //rader , nur einmal, danach sind manche register frei
        ldr     r0, =#0x41004408 //ladt dirset PORTA und zahler fur delay
        ldr     r1, =#0x41004488 //ladt dirset PORTB 
        ldr     r2, =#0x41004410 //ladt out PORTA
        ldr     r3, =#0x41004490 //ladt out PORTB
        ldr     r4, =#32         //setze PIN A 05
        ldr     r5, =#4          //setze PIN B 02
        

        str r4, [r0]
        str r5, [r1]
        ldr r1, =#0
        ldr r7, =#4500 //nicht wegmachen geht kaputt
        delay      
        
        loop:
        //Lese input
        ldr r0, [r6]
        lsls r0, #8 //Shift um die unnotigen Bits loszuwerden

        //Nacheinander schauen welche Sensoren lesen,
        //alternativ: ldr r1, = (1 << 5) |  (1 << 1) => 5. und 1. Stelle eine 1, Rest 0
        //(1 << 27) | (1 << 24) | (1 << 26) | (1 << 15) | (1 << 14)
        ldr r1, = (1 << 14) //XXXX0
        cmp r0, r1 //z=1 bedeutet sensor leuchtet
        beq A

        ldr r1, = (1 << 15)  //XXX0X
        cmp r0, r1 
        beq B

        ldr r1, = (1 << 26)  //XX0XX
        cmp r0, r1 
        beq C

        ldr r1, =  (1 << 24)  //X0XXX
        cmp r0, r1 
        beq D

        ldr r1, = (1 << 27) //0XXXX
        cmp r0, r1 
        beq E

        ldr r1, =  (1 << 15) | (1 << 14) //XXX00
        cmp r0, r1 
        bne 99f
        b F
        99:

        ldr r1, =  (1 << 26) | (1 << 15)  //XX00X
        cmp r0, r1 
        bne 99f
        b G
        99:

        ldr r1, =  (1 << 24) | (1 << 26)  //X00XX
        cmp r0, r1 
        bne 99f
        b H
        99:

        ldr r1, = (1 << 27) | (1 << 24)  //00XXX
        cmp r0, r1 
        bne 99f
        b I
        99:

        ldr r1, = (1 << 27) | (1 << 24) | (1 << 26)  //000XX (X0XXX)
        cmp r0, r1 
        beq D

        ldr r1, =  (1 << 24) | (1 << 26) | (1 << 15)  //X000X (XX0XX)
        cmp r0, r1 
        beq C

        ldr r1, =  (1 << 26) | (1 << 15) | (1 << 14) //XX000 (XXX0X)
        cmp r0, r1 
        beq B

        ldr r1, = (1 << 27) | (1 << 24) | (1 << 26) | (1 << 15) //0000X
        cmp r0, r1
        beq E

        ldr r1, = (1 << 24) | (1 << 26) | (1 << 15) | (1 << 14) //X0000
        cmp r0, r1
        beq A


        //Falls kein Fall eintritt
        
        b loop

A:      //XXXX0 410 / 440
        ldr r7, =#410
        ldr r4, =#32
        str r4, [r2]
        ldr r4, =#4
        str r4, [r3]
        ldr r4, =#0
        delay
        str r4, [r2]
        ldr r7, =#30
        delay
        str r4, [r3]
        ldr r7, =#4500
        delay
        
        b loop
        
B:      //XXX0X
        ldr r7, =#428
        ldr r4, =#32
        str r4, [r2]
        ldr r4, =#4
        str r4, [r3]
        ldr r4, =#0
        delay
        str r4, [r2]
        ldr r7, =#12
        delay
        str r4, [r3]
        ldr r7, =#4500
        delay
        
        b loop

C:      //XX0XX Vollgas
        ldr r4, =#32
        str r4, [r2]
        ldr r4, =#4
        str r4, [r3]
        ldr r7, =#500
        delay
        ldr r4, =#0
        str r4, [r3]
        str r4, [r2]
        ldr r7, =#4500
        delay
        b loop

D:      //X0XXX
        ldr r7, =#428
        ldr r4, =#32
        str r4, [r2]
        ldr r4, =#4
        str r4, [r3]
        ldr r4, =#0
        delay
        str r4, [r3]
        ldr r7, =#12
        delay
        str r4, [r2]
        ldr r7, =#4500
        delay
        b loop

E:      //0XXXX
        ldr r7, =#410
        ldr r4, =#32
        str r4, [r2]
        ldr r4, =#4
        str r4, [r3]
        ldr r4, =#0
        delay
        str r4, [r3]
        ldr r7, =#30
        delay
        str r4, [r2]
        ldr r7, =#4500
        delay
        b loop

F:      //XXX00
        ldr r7, =#416
        ldr r4, =#32
        str r4, [r2]
        ldr r4, =#4
        str r4, [r3]
        ldr r4, =#0
        delay
        str r4, [r2]
        ldr r7, =#24
        delay
        str r4, [r3]
        ldr r7, =#4500
        delay
        
        b loop

G:      //XX00X
        ldr r7, =#495
        L100_RX
        b loop

H:      //X00XX
        ldr r7, =#495
        R100_LX
        b loop

I:      //00XXX
        ldr r7, =#416
        ldr r4, =#32
        str r4, [r2]
        ldr r4, =#4
        str r4, [r3]
        ldr r4, =#0
        delay
        str r4, [r3]
        ldr r7, =#24
        delay
        str r4, [r2]
        ldr r7, =#4500
        delay
        
        b loop


/*Falle
----- Geradeaus -----
X00XX         = 95 / 100
XX0XX + X000X = Vollgas
XX00X         = 100 / 95

----- Kurve -----
0XXXX = 10 / 50
00XXX = 20 / 50
000XX = 30 / 50
0000X = 30 / 50

*/
        

        




         
