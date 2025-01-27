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
        ldr     r0, =#0x41004408 //ladt dirset PORTA und zahler fur delay
        ldr     r1, =#0x41004488 //ladt dirset PORTB 
        ldr     r2, =#0x41004410 //ladt out PORTA
        ldr     r3, =#0x41004490 //ladt out PORTB
        ldr     r4, =#32         //setze PIN A 05
        ldr     r5, =#4          //setze PIN B 02
        ldr     r6, =#0          //ausschalten
        ldr     r7, =#1000       //schreibe Dauer des delays hier rein
        
        
        //setze DIRSET, danach kann man r1 und r2 verwenden wie ich will, wird nur einmal gemacht
        str r4, [r0]
        str r5, [r1]
        ldr r1, =#0
//beide rader gleichzeitig
/*loop:
        //schalte PINS an
        str r4, [r2]
        str r6, [r3]
        ldr r7, =#310  //HIER PULSWEITE
        delay

        //schalte PINS aus
        str r6, [r2]
        str r6, [r3]

        //verzogerung 20ms zwischen Pulsen
        ldr r7, =#4500
        delay

        b loop */

        //drehen
        loop:
        //schalte PINS an
        str r4, [r2]
        str r5, [r3]
        ldr r7, =#0   //pulsweite kurzen rads R
        ldr r1, =#0   //pulsweite langen rad L
        subs r1, r7
        delay
        str r6, [r2]  //Schalte kurzeres Rad aus
        mov r7, r1
        delay
        str r6, [r3]

        //verzogerung 20ms zwischen Pulsen
        ldr r7, =#4500
        delay

        b loop 

        

        
        

