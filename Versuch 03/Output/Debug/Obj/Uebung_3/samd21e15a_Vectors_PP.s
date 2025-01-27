# 0 "/home/labasm20/Documents/SEGGER Embedded Studio for ARM Projects/Versuch 3/SAMD21/Source/samd21e15a_Vectors.s"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/labasm20/Documents/SEGGER Embedded Studio for ARM Projects/Versuch 3/SAMD21/Source/samd21e15a_Vectors.s"
# 61 "/home/labasm20/Documents/SEGGER Embedded Studio for ARM Projects/Versuch 3/SAMD21/Source/samd21e15a_Vectors.s"
        .syntax unified
# 73 "/home/labasm20/Documents/SEGGER Embedded Studio for ARM Projects/Versuch 3/SAMD21/Source/samd21e15a_Vectors.s"
.macro VECTOR Name=
        .section .vectors, "ax"
        .code 16
        .word \Name
.endm




.macro EXC_HANDLER Name=



        .section .vectors, "ax"
        .word \Name



        .section .init.\Name, "ax"
        .thumb_func
        .weak \Name
        .balign 2
\Name:
        1: b 1b
.endm




.macro ISR_HANDLER Name=



        .section .vectors, "ax"
        .word \Name
# 116 "/home/labasm20/Documents/SEGGER Embedded Studio for ARM Projects/Versuch 3/SAMD21/Source/samd21e15a_Vectors.s"
        .section .init.\Name, "ax"
        .thumb_func
        .weak \Name
        .balign 2
\Name:
        1: b 1b

.endm




.macro ISR_RESERVED
        .section .vectors, "ax"
        .word 0
.endm




.macro ISR_RESERVED_DUMMY
        .section .vectors, "ax"
        .word Dummy_Handler
.endm







        .extern __stack_end__
        .extern Reset_Handler
        .extern HardFault_Handler
# 163 "/home/labasm20/Documents/SEGGER Embedded Studio for ARM Projects/Versuch 3/SAMD21/Source/samd21e15a_Vectors.s"
        .section .vectors, "ax"
        .code 16
        .balign 256
        .global _vectors
_vectors:



        VECTOR __stack_end__
        VECTOR Reset_Handler
        EXC_HANDLER NMI_Handler
        VECTOR HardFault_Handler
        ISR_RESERVED
        ISR_RESERVED
        ISR_RESERVED
        ISR_RESERVED
        ISR_RESERVED
        ISR_RESERVED
        ISR_RESERVED
        EXC_HANDLER SVC_Handler
        ISR_RESERVED
        ISR_RESERVED
        EXC_HANDLER PendSV_Handler
        EXC_HANDLER SysTick_Handler




        ISR_HANDLER PM_Handler
        ISR_HANDLER SYSCTRL_Handler
        ISR_HANDLER WDT_Handler
        ISR_HANDLER RTC_Handler
        ISR_HANDLER EIC_Handler
        ISR_HANDLER NVMCTRL_Handler
        ISR_HANDLER DMAC_Handler
        ISR_HANDLER USB_Handler
        ISR_HANDLER EVSYS_Handler
        ISR_HANDLER SERCOM0_Handler
        ISR_HANDLER SERCOM1_Handler
        ISR_HANDLER SERCOM2_Handler
        ISR_HANDLER SERCOM3_Handler
        ISR_RESERVED_DUMMY
        ISR_RESERVED_DUMMY
        ISR_HANDLER TCC0_Handler
        ISR_HANDLER TCC1_Handler
        ISR_HANDLER TCC2_Handler
        ISR_HANDLER TC3_Handler
        ISR_HANDLER TC4_Handler
        ISR_HANDLER TC5_Handler
        ISR_RESERVED_DUMMY
        ISR_RESERVED_DUMMY
        ISR_HANDLER ADC_Handler
        ISR_HANDLER AC_Handler
        ISR_HANDLER DAC_Handler
        ISR_HANDLER PTC_Handler
        ISR_HANDLER I2S_Handler


        .section .vectors, "ax"
_vectors_end:
# 243 "/home/labasm20/Documents/SEGGER Embedded Studio for ARM Projects/Versuch 3/SAMD21/Source/samd21e15a_Vectors.s"
        .section .init.Dummy_Handler, "ax"
        .thumb_func
        .weak Dummy_Handler
        .balign 2
Dummy_Handler:
        1: b 1b
