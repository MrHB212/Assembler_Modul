/*
 * Component description for DMAC
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2019-11-25T06:52:33Z */
#ifndef _SAMD21_DMAC_COMPONENT_H_
#define _SAMD21_DMAC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DMAC                                         */
/* ************************************************************************** */

/* -------- DMAC_BTCTRL : (DMAC Offset: 0x00) (R/W 16) Block Transfer Control -------- */
#define DMAC_BTCTRL_RESETVALUE                _UINT16_(0x00)                                       /*  (DMAC_BTCTRL) Block Transfer Control  Reset Value */

#define DMAC_BTCTRL_VALID_Pos                 _UINT16_(0)                                          /* (DMAC_BTCTRL) Descriptor Valid Position */
#define DMAC_BTCTRL_VALID_Msk                 (_UINT16_(0x1) << DMAC_BTCTRL_VALID_Pos)             /* (DMAC_BTCTRL) Descriptor Valid Mask */
#define DMAC_BTCTRL_VALID(value)              (DMAC_BTCTRL_VALID_Msk & (_UINT16_(value) << DMAC_BTCTRL_VALID_Pos)) /* Assigment of value for VALID in the DMAC_BTCTRL register */
#define DMAC_BTCTRL_EVOSEL_Pos                _UINT16_(1)                                          /* (DMAC_BTCTRL) Event Output Selection Position */
#define DMAC_BTCTRL_EVOSEL_Msk                (_UINT16_(0x3) << DMAC_BTCTRL_EVOSEL_Pos)            /* (DMAC_BTCTRL) Event Output Selection Mask */
#define DMAC_BTCTRL_EVOSEL(value)             (DMAC_BTCTRL_EVOSEL_Msk & (_UINT16_(value) << DMAC_BTCTRL_EVOSEL_Pos)) /* Assigment of value for EVOSEL in the DMAC_BTCTRL register */
#define   DMAC_BTCTRL_EVOSEL_DISABLE_Val      _UINT16_(0x0)                                        /* (DMAC_BTCTRL) Event generation disabled  */
#define   DMAC_BTCTRL_EVOSEL_BLOCK_Val        _UINT16_(0x1)                                        /* (DMAC_BTCTRL) Event strobe when block transfer complete  */
#define   DMAC_BTCTRL_EVOSEL_BEAT_Val         _UINT16_(0x3)                                        /* (DMAC_BTCTRL) Event strobe when beat transfer complete  */
#define DMAC_BTCTRL_EVOSEL_DISABLE            (DMAC_BTCTRL_EVOSEL_DISABLE_Val << DMAC_BTCTRL_EVOSEL_Pos) /* (DMAC_BTCTRL) Event generation disabled Position  */
#define DMAC_BTCTRL_EVOSEL_BLOCK              (DMAC_BTCTRL_EVOSEL_BLOCK_Val << DMAC_BTCTRL_EVOSEL_Pos) /* (DMAC_BTCTRL) Event strobe when block transfer complete Position  */
#define DMAC_BTCTRL_EVOSEL_BEAT               (DMAC_BTCTRL_EVOSEL_BEAT_Val << DMAC_BTCTRL_EVOSEL_Pos) /* (DMAC_BTCTRL) Event strobe when beat transfer complete Position  */
#define DMAC_BTCTRL_BLOCKACT_Pos              _UINT16_(3)                                          /* (DMAC_BTCTRL) Block Action Position */
#define DMAC_BTCTRL_BLOCKACT_Msk              (_UINT16_(0x3) << DMAC_BTCTRL_BLOCKACT_Pos)          /* (DMAC_BTCTRL) Block Action Mask */
#define DMAC_BTCTRL_BLOCKACT(value)           (DMAC_BTCTRL_BLOCKACT_Msk & (_UINT16_(value) << DMAC_BTCTRL_BLOCKACT_Pos)) /* Assigment of value for BLOCKACT in the DMAC_BTCTRL register */
#define   DMAC_BTCTRL_BLOCKACT_NOACT_Val      _UINT16_(0x0)                                        /* (DMAC_BTCTRL) Channel will be disabled if it is the last block transfer in the transaction  */
#define   DMAC_BTCTRL_BLOCKACT_INT_Val        _UINT16_(0x1)                                        /* (DMAC_BTCTRL) Channel will be disabled if it is the last block transfer in the transaction and block interrupt  */
#define   DMAC_BTCTRL_BLOCKACT_SUSPEND_Val    _UINT16_(0x2)                                        /* (DMAC_BTCTRL) Channel suspend operation is completed  */
#define   DMAC_BTCTRL_BLOCKACT_BOTH_Val       _UINT16_(0x3)                                        /* (DMAC_BTCTRL) Both channel suspend operation and block interrupt  */
#define DMAC_BTCTRL_BLOCKACT_NOACT            (DMAC_BTCTRL_BLOCKACT_NOACT_Val << DMAC_BTCTRL_BLOCKACT_Pos) /* (DMAC_BTCTRL) Channel will be disabled if it is the last block transfer in the transaction Position  */
#define DMAC_BTCTRL_BLOCKACT_INT              (DMAC_BTCTRL_BLOCKACT_INT_Val << DMAC_BTCTRL_BLOCKACT_Pos) /* (DMAC_BTCTRL) Channel will be disabled if it is the last block transfer in the transaction and block interrupt Position  */
#define DMAC_BTCTRL_BLOCKACT_SUSPEND          (DMAC_BTCTRL_BLOCKACT_SUSPEND_Val << DMAC_BTCTRL_BLOCKACT_Pos) /* (DMAC_BTCTRL) Channel suspend operation is completed Position  */
#define DMAC_BTCTRL_BLOCKACT_BOTH             (DMAC_BTCTRL_BLOCKACT_BOTH_Val << DMAC_BTCTRL_BLOCKACT_Pos) /* (DMAC_BTCTRL) Both channel suspend operation and block interrupt Position  */
#define DMAC_BTCTRL_BEATSIZE_Pos              _UINT16_(8)                                          /* (DMAC_BTCTRL) Beat Size Position */
#define DMAC_BTCTRL_BEATSIZE_Msk              (_UINT16_(0x3) << DMAC_BTCTRL_BEATSIZE_Pos)          /* (DMAC_BTCTRL) Beat Size Mask */
#define DMAC_BTCTRL_BEATSIZE(value)           (DMAC_BTCTRL_BEATSIZE_Msk & (_UINT16_(value) << DMAC_BTCTRL_BEATSIZE_Pos)) /* Assigment of value for BEATSIZE in the DMAC_BTCTRL register */
#define   DMAC_BTCTRL_BEATSIZE_BYTE_Val       _UINT16_(0x0)                                        /* (DMAC_BTCTRL) 8-bit bus transfer  */
#define   DMAC_BTCTRL_BEATSIZE_HWORD_Val      _UINT16_(0x1)                                        /* (DMAC_BTCTRL) 16-bit bus transfer  */
#define   DMAC_BTCTRL_BEATSIZE_WORD_Val       _UINT16_(0x2)                                        /* (DMAC_BTCTRL) 32-bit bus transfer  */
#define DMAC_BTCTRL_BEATSIZE_BYTE             (DMAC_BTCTRL_BEATSIZE_BYTE_Val << DMAC_BTCTRL_BEATSIZE_Pos) /* (DMAC_BTCTRL) 8-bit bus transfer Position  */
#define DMAC_BTCTRL_BEATSIZE_HWORD            (DMAC_BTCTRL_BEATSIZE_HWORD_Val << DMAC_BTCTRL_BEATSIZE_Pos) /* (DMAC_BTCTRL) 16-bit bus transfer Position  */
#define DMAC_BTCTRL_BEATSIZE_WORD             (DMAC_BTCTRL_BEATSIZE_WORD_Val << DMAC_BTCTRL_BEATSIZE_Pos) /* (DMAC_BTCTRL) 32-bit bus transfer Position  */
#define DMAC_BTCTRL_SRCINC_Pos                _UINT16_(10)                                         /* (DMAC_BTCTRL) Source Address Increment Enable Position */
#define DMAC_BTCTRL_SRCINC_Msk                (_UINT16_(0x1) << DMAC_BTCTRL_SRCINC_Pos)            /* (DMAC_BTCTRL) Source Address Increment Enable Mask */
#define DMAC_BTCTRL_SRCINC(value)             (DMAC_BTCTRL_SRCINC_Msk & (_UINT16_(value) << DMAC_BTCTRL_SRCINC_Pos)) /* Assigment of value for SRCINC in the DMAC_BTCTRL register */
#define DMAC_BTCTRL_DSTINC_Pos                _UINT16_(11)                                         /* (DMAC_BTCTRL) Destination Address Increment Enable Position */
#define DMAC_BTCTRL_DSTINC_Msk                (_UINT16_(0x1) << DMAC_BTCTRL_DSTINC_Pos)            /* (DMAC_BTCTRL) Destination Address Increment Enable Mask */
#define DMAC_BTCTRL_DSTINC(value)             (DMAC_BTCTRL_DSTINC_Msk & (_UINT16_(value) << DMAC_BTCTRL_DSTINC_Pos)) /* Assigment of value for DSTINC in the DMAC_BTCTRL register */
#define DMAC_BTCTRL_STEPSEL_Pos               _UINT16_(12)                                         /* (DMAC_BTCTRL) Step Selection Position */
#define DMAC_BTCTRL_STEPSEL_Msk               (_UINT16_(0x1) << DMAC_BTCTRL_STEPSEL_Pos)           /* (DMAC_BTCTRL) Step Selection Mask */
#define DMAC_BTCTRL_STEPSEL(value)            (DMAC_BTCTRL_STEPSEL_Msk & (_UINT16_(value) << DMAC_BTCTRL_STEPSEL_Pos)) /* Assigment of value for STEPSEL in the DMAC_BTCTRL register */
#define   DMAC_BTCTRL_STEPSEL_DST_Val         _UINT16_(0x0)                                        /* (DMAC_BTCTRL) Step size settings apply to the destination address  */
#define   DMAC_BTCTRL_STEPSEL_SRC_Val         _UINT16_(0x1)                                        /* (DMAC_BTCTRL) Step size settings apply to the source address  */
#define DMAC_BTCTRL_STEPSEL_DST               (DMAC_BTCTRL_STEPSEL_DST_Val << DMAC_BTCTRL_STEPSEL_Pos) /* (DMAC_BTCTRL) Step size settings apply to the destination address Position  */
#define DMAC_BTCTRL_STEPSEL_SRC               (DMAC_BTCTRL_STEPSEL_SRC_Val << DMAC_BTCTRL_STEPSEL_Pos) /* (DMAC_BTCTRL) Step size settings apply to the source address Position  */
#define DMAC_BTCTRL_STEPSIZE_Pos              _UINT16_(13)                                         /* (DMAC_BTCTRL) Address Increment Step Size Position */
#define DMAC_BTCTRL_STEPSIZE_Msk              (_UINT16_(0x7) << DMAC_BTCTRL_STEPSIZE_Pos)          /* (DMAC_BTCTRL) Address Increment Step Size Mask */
#define DMAC_BTCTRL_STEPSIZE(value)           (DMAC_BTCTRL_STEPSIZE_Msk & (_UINT16_(value) << DMAC_BTCTRL_STEPSIZE_Pos)) /* Assigment of value for STEPSIZE in the DMAC_BTCTRL register */
#define   DMAC_BTCTRL_STEPSIZE_X1_Val         _UINT16_(0x0)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 1  */
#define   DMAC_BTCTRL_STEPSIZE_X2_Val         _UINT16_(0x1)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 2  */
#define   DMAC_BTCTRL_STEPSIZE_X4_Val         _UINT16_(0x2)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 4  */
#define   DMAC_BTCTRL_STEPSIZE_X8_Val         _UINT16_(0x3)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 8  */
#define   DMAC_BTCTRL_STEPSIZE_X16_Val        _UINT16_(0x4)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 16  */
#define   DMAC_BTCTRL_STEPSIZE_X32_Val        _UINT16_(0x5)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 32  */
#define   DMAC_BTCTRL_STEPSIZE_X64_Val        _UINT16_(0x6)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 64  */
#define   DMAC_BTCTRL_STEPSIZE_X128_Val       _UINT16_(0x7)                                        /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 128  */
#define DMAC_BTCTRL_STEPSIZE_X1               (DMAC_BTCTRL_STEPSIZE_X1_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 1 Position  */
#define DMAC_BTCTRL_STEPSIZE_X2               (DMAC_BTCTRL_STEPSIZE_X2_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 2 Position  */
#define DMAC_BTCTRL_STEPSIZE_X4               (DMAC_BTCTRL_STEPSIZE_X4_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 4 Position  */
#define DMAC_BTCTRL_STEPSIZE_X8               (DMAC_BTCTRL_STEPSIZE_X8_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 8 Position  */
#define DMAC_BTCTRL_STEPSIZE_X16              (DMAC_BTCTRL_STEPSIZE_X16_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 16 Position  */
#define DMAC_BTCTRL_STEPSIZE_X32              (DMAC_BTCTRL_STEPSIZE_X32_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 32 Position  */
#define DMAC_BTCTRL_STEPSIZE_X64              (DMAC_BTCTRL_STEPSIZE_X64_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 64 Position  */
#define DMAC_BTCTRL_STEPSIZE_X128             (DMAC_BTCTRL_STEPSIZE_X128_Val << DMAC_BTCTRL_STEPSIZE_Pos) /* (DMAC_BTCTRL) Next ADDR = ADDR + (1<<BEATSIZE) * 128 Position  */
#define DMAC_BTCTRL_Msk                       _UINT16_(0xFF1F)                                     /* (DMAC_BTCTRL) Register Mask  */


/* -------- DMAC_BTCNT : (DMAC Offset: 0x02) (R/W 16) Block Transfer Count -------- */
#define DMAC_BTCNT_BTCNT_Pos                  _UINT16_(0)                                          /* (DMAC_BTCNT) Block Transfer Count Position */
#define DMAC_BTCNT_BTCNT_Msk                  (_UINT16_(0xFFFF) << DMAC_BTCNT_BTCNT_Pos)           /* (DMAC_BTCNT) Block Transfer Count Mask */
#define DMAC_BTCNT_BTCNT(value)               (DMAC_BTCNT_BTCNT_Msk & (_UINT16_(value) << DMAC_BTCNT_BTCNT_Pos)) /* Assigment of value for BTCNT in the DMAC_BTCNT register */
#define DMAC_BTCNT_Msk                        _UINT16_(0xFFFF)                                     /* (DMAC_BTCNT) Register Mask  */


/* -------- DMAC_SRCADDR : (DMAC Offset: 0x04) (R/W 32) Block Transfer Source Address -------- */
#define DMAC_SRCADDR_SRCADDR_Pos              _UINT32_(0)                                          /* (DMAC_SRCADDR) Transfer Source Address Position */
#define DMAC_SRCADDR_SRCADDR_Msk              (_UINT32_(0xFFFFFFFF) << DMAC_SRCADDR_SRCADDR_Pos)   /* (DMAC_SRCADDR) Transfer Source Address Mask */
#define DMAC_SRCADDR_SRCADDR(value)           (DMAC_SRCADDR_SRCADDR_Msk & (_UINT32_(value) << DMAC_SRCADDR_SRCADDR_Pos)) /* Assigment of value for SRCADDR in the DMAC_SRCADDR register */
#define DMAC_SRCADDR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (DMAC_SRCADDR) Register Mask  */


/* -------- DMAC_DSTADDR : (DMAC Offset: 0x08) (R/W 32) Block Transfer Destination Address -------- */
#define DMAC_DSTADDR_DSTADDR_Pos              _UINT32_(0)                                          /* (DMAC_DSTADDR) Transfer Destination Address Position */
#define DMAC_DSTADDR_DSTADDR_Msk              (_UINT32_(0xFFFFFFFF) << DMAC_DSTADDR_DSTADDR_Pos)   /* (DMAC_DSTADDR) Transfer Destination Address Mask */
#define DMAC_DSTADDR_DSTADDR(value)           (DMAC_DSTADDR_DSTADDR_Msk & (_UINT32_(value) << DMAC_DSTADDR_DSTADDR_Pos)) /* Assigment of value for DSTADDR in the DMAC_DSTADDR register */
#define DMAC_DSTADDR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (DMAC_DSTADDR) Register Mask  */


/* -------- DMAC_DESCADDR : (DMAC Offset: 0x0C) (R/W 32) Next Descriptor Address -------- */
#define DMAC_DESCADDR_DESCADDR_Pos            _UINT32_(0)                                          /* (DMAC_DESCADDR) Next Descriptor Address Position */
#define DMAC_DESCADDR_DESCADDR_Msk            (_UINT32_(0xFFFFFFFF) << DMAC_DESCADDR_DESCADDR_Pos) /* (DMAC_DESCADDR) Next Descriptor Address Mask */
#define DMAC_DESCADDR_DESCADDR(value)         (DMAC_DESCADDR_DESCADDR_Msk & (_UINT32_(value) << DMAC_DESCADDR_DESCADDR_Pos)) /* Assigment of value for DESCADDR in the DMAC_DESCADDR register */
#define DMAC_DESCADDR_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (DMAC_DESCADDR) Register Mask  */


/* -------- DMAC_CTRL : (DMAC Offset: 0x00) (R/W 16) Control -------- */
#define DMAC_CTRL_RESETVALUE                  _UINT16_(0x00)                                       /*  (DMAC_CTRL) Control  Reset Value */

#define DMAC_CTRL_SWRST_Pos                   _UINT16_(0)                                          /* (DMAC_CTRL) Software Reset Position */
#define DMAC_CTRL_SWRST_Msk                   (_UINT16_(0x1) << DMAC_CTRL_SWRST_Pos)               /* (DMAC_CTRL) Software Reset Mask */
#define DMAC_CTRL_SWRST(value)                (DMAC_CTRL_SWRST_Msk & (_UINT16_(value) << DMAC_CTRL_SWRST_Pos)) /* Assigment of value for SWRST in the DMAC_CTRL register */
#define DMAC_CTRL_DMAENABLE_Pos               _UINT16_(1)                                          /* (DMAC_CTRL) DMA Enable Position */
#define DMAC_CTRL_DMAENABLE_Msk               (_UINT16_(0x1) << DMAC_CTRL_DMAENABLE_Pos)           /* (DMAC_CTRL) DMA Enable Mask */
#define DMAC_CTRL_DMAENABLE(value)            (DMAC_CTRL_DMAENABLE_Msk & (_UINT16_(value) << DMAC_CTRL_DMAENABLE_Pos)) /* Assigment of value for DMAENABLE in the DMAC_CTRL register */
#define DMAC_CTRL_CRCENABLE_Pos               _UINT16_(2)                                          /* (DMAC_CTRL) CRC Enable Position */
#define DMAC_CTRL_CRCENABLE_Msk               (_UINT16_(0x1) << DMAC_CTRL_CRCENABLE_Pos)           /* (DMAC_CTRL) CRC Enable Mask */
#define DMAC_CTRL_CRCENABLE(value)            (DMAC_CTRL_CRCENABLE_Msk & (_UINT16_(value) << DMAC_CTRL_CRCENABLE_Pos)) /* Assigment of value for CRCENABLE in the DMAC_CTRL register */
#define DMAC_CTRL_LVLEN0_Pos                  _UINT16_(8)                                          /* (DMAC_CTRL) Priority Level 0 Enable Position */
#define DMAC_CTRL_LVLEN0_Msk                  (_UINT16_(0x1) << DMAC_CTRL_LVLEN0_Pos)              /* (DMAC_CTRL) Priority Level 0 Enable Mask */
#define DMAC_CTRL_LVLEN0(value)               (DMAC_CTRL_LVLEN0_Msk & (_UINT16_(value) << DMAC_CTRL_LVLEN0_Pos)) /* Assigment of value for LVLEN0 in the DMAC_CTRL register */
#define DMAC_CTRL_LVLEN1_Pos                  _UINT16_(9)                                          /* (DMAC_CTRL) Priority Level 1 Enable Position */
#define DMAC_CTRL_LVLEN1_Msk                  (_UINT16_(0x1) << DMAC_CTRL_LVLEN1_Pos)              /* (DMAC_CTRL) Priority Level 1 Enable Mask */
#define DMAC_CTRL_LVLEN1(value)               (DMAC_CTRL_LVLEN1_Msk & (_UINT16_(value) << DMAC_CTRL_LVLEN1_Pos)) /* Assigment of value for LVLEN1 in the DMAC_CTRL register */
#define DMAC_CTRL_LVLEN2_Pos                  _UINT16_(10)                                         /* (DMAC_CTRL) Priority Level 2 Enable Position */
#define DMAC_CTRL_LVLEN2_Msk                  (_UINT16_(0x1) << DMAC_CTRL_LVLEN2_Pos)              /* (DMAC_CTRL) Priority Level 2 Enable Mask */
#define DMAC_CTRL_LVLEN2(value)               (DMAC_CTRL_LVLEN2_Msk & (_UINT16_(value) << DMAC_CTRL_LVLEN2_Pos)) /* Assigment of value for LVLEN2 in the DMAC_CTRL register */
#define DMAC_CTRL_LVLEN3_Pos                  _UINT16_(11)                                         /* (DMAC_CTRL) Priority Level 3 Enable Position */
#define DMAC_CTRL_LVLEN3_Msk                  (_UINT16_(0x1) << DMAC_CTRL_LVLEN3_Pos)              /* (DMAC_CTRL) Priority Level 3 Enable Mask */
#define DMAC_CTRL_LVLEN3(value)               (DMAC_CTRL_LVLEN3_Msk & (_UINT16_(value) << DMAC_CTRL_LVLEN3_Pos)) /* Assigment of value for LVLEN3 in the DMAC_CTRL register */
#define DMAC_CTRL_Msk                         _UINT16_(0x0F07)                                     /* (DMAC_CTRL) Register Mask  */

#define DMAC_CTRL_LVLEN_Pos                   _UINT16_(8)                                          /* (DMAC_CTRL Position) Priority Level 3 Enable */
#define DMAC_CTRL_LVLEN_Msk                   (_UINT16_(0xF) << DMAC_CTRL_LVLEN_Pos)               /* (DMAC_CTRL Mask) LVLEN */
#define DMAC_CTRL_LVLEN(value)                (DMAC_CTRL_LVLEN_Msk & (_UINT16_(value) << DMAC_CTRL_LVLEN_Pos)) 

/* -------- DMAC_CRCCTRL : (DMAC Offset: 0x02) (R/W 16) CRC Control -------- */
#define DMAC_CRCCTRL_RESETVALUE               _UINT16_(0x00)                                       /*  (DMAC_CRCCTRL) CRC Control  Reset Value */

#define DMAC_CRCCTRL_CRCBEATSIZE_Pos          _UINT16_(0)                                          /* (DMAC_CRCCTRL) CRC Beat Size Position */
#define DMAC_CRCCTRL_CRCBEATSIZE_Msk          (_UINT16_(0x3) << DMAC_CRCCTRL_CRCBEATSIZE_Pos)      /* (DMAC_CRCCTRL) CRC Beat Size Mask */
#define DMAC_CRCCTRL_CRCBEATSIZE(value)       (DMAC_CRCCTRL_CRCBEATSIZE_Msk & (_UINT16_(value) << DMAC_CRCCTRL_CRCBEATSIZE_Pos)) /* Assigment of value for CRCBEATSIZE in the DMAC_CRCCTRL register */
#define   DMAC_CRCCTRL_CRCBEATSIZE_BYTE_Val   _UINT16_(0x0)                                        /* (DMAC_CRCCTRL) 8-bit bus transfer  */
#define   DMAC_CRCCTRL_C��j�Q7��NE4���[��r�Q���.FL�4��ش�Fb{ڋϫ:�����+�#A�?�k?�@��M���� �n[�ɧ%Ev��D룁��C��{�<h.4K�� ����y�?:��b�zsj���J��Ej���j|o@��K��Fj����wpN]���Q)��>zq~n�-������ɨwn Ǘ�Z� �-(��tl�`   (�%Z����iw$DJ���zfjs�H�xi�a&�v�fj���vm����  ����� H{lNW�ĸIH�%b�$sx��!k�I��j��|zs�/$�M��j���"�o&Wn�4(�fj�,_��o�)VL(� ��p\ɇ�4m����a�Uq��f������  /�Uye�
�Ęa���Q����ri�:�l(�)�%bʩ+pi�O�H�I�ejʛ.�jw+pB*2���zS
��vg�ϥ�JI��Y����hw I���J)�fr�;�ueb�>�j��z�߮iw�Ae�I��z�.NUpf$c���(�fj*��gr'p�Vl�fr.��uh�-�:�Fj����zl���L��I�fr�_�ave���*���r���[sfM�jd��K�b��'�f��)THQ�ac�v]ʰ2W[�tl� �}a��?��#�O� �7�uO>X'�Bm�CI����JCM6��7�)��z/�M�LE�I�T�)��r�^��NF��ks���r���=HMI��m��gj����RJ�l�{�)�fj�\�TJ�S�)M��zfj��77SK!A�v�)��r=�SK�����)��rz��MR9m1
){�j�X� UJ�rmK�)��r�7��TMh{�Xrj��j��h�VO��n��		{�j��^K��I��!m�GZ���I�1th0�� K�|W͡`9�ܨf��`_e���n�#8�	j� ���֑W�_۬�>3��(����h\�M��WHM�Fj����k[);�X9����r��fZ��6Bٱ,��z����]h&!�"��j�r��h`�X�K��)�K���na.�n���	{���mnd�H�v1�˓�r%6+dsb��Vb��{h���re�ͺ��:ʓ�z�}1pg��N	t�i��r�:7�sk��J�n���z,��{rnkvV����z���[�u����l��Z�z?G�x�B�Mo͡ �t_U�|� AЀ�l� �i�����V��a �/=���rL7)M+��z���ܕ����WI�(���6_��R�P���z���'���6/:���(��,w��ɟ�iN��J���{���)�q�Da�j��������v��J��*�Ɥ�[��ʺ�� �(-��#Ӵ ���	��
z��)������e��Is��
�(��u��w�{9��웨r���"����`�d�
�}�JC�����w7e*�Z��?�ëyw&V�n����pƫ"GV�@�l� ��E-�v�?{�%�a��=�p}� 	�j�fj�N�$fre1%�͛�j����sah�tR���	{�+>�bj(ra���)��>��fk�$h�"2�
�^�Am`ܶu��˓j�����`m!ɲ#��˓(��Z\zpa5_�$�!p�5%�r^���U֠
���p]���BO� ��7�kn^uܓ4�N�)���pc�S��	���?���g^m�F�R�
���z�o`Nk�&hJ�
�M"z�d�������j*�h\�g�BE�ދ�  �z��]�'�3�/́�WZf-�TPI���)�]^TY^c�m��I�J��+��^c�$
'i�
��˪�f]�Wvm�r-�̓�_A�g_Ҍ!Z=m��H0��k^�q'(����r�n�Rh_���[{�
�:���an��욱p
��1��m_����|̛I����ka��z7�����ao�2Aش ���=�cr�1-��
�_w'�tc���ۍ �����ft���6p�=8b�(�pɟ�����dI.��b�w�	0�� o_7m�H̿�bN0,��'=��_T���������r����XQ��:#h�
�]����YR��r��N��)��*�/X]ж�#aj�	��K��Y^�H���˓�z����Z_���X�uj��r�S��\a�$M¦�k��z��/]b�4	h��)�-.��]b�DH� `�
�(��]b�I��A���z�ࠬ]b��i�u���z�k��^cGh�m�>��h���_d��	�&lj��z�~w_d�
m�̓*�1�y]�O��?�n�Gb.�KRV�X��iӖ�  �Z6��ptϕ'��Ay�K�mB3��0LGZ �e�P�`y�$|>t� ��%�cm��ƍP�	{UVZ|m]l�5$'a��r.��_h\wڕ�����]"!� i[���W��j�����ia�D�EID˓�j��gl�&r�mM�)���ne�ʵESV��z�TT�cqJ��6룆r����fp�m�8�i��z��Рrh.�R<�������n�Q)a��{����u�9@L� �B�|�_�$	*4�!]��9�d�����?�(�����h'�I�$E�"y�
Ɓ�-�  �  	6د�������i�Z ���������z���ݏ�(��cj������ۏ���A㖔ʓ)�*/	��q�O��j��p�����čM�$P��C˚���	 P��>�-2������f�˓�z��ب��� ��*�j�)���
b��9� `�	{���ը�MZ�.�a웨j�������ٛ5�	��j{�����{�/a��Gb^_5E΢;�,U"�Ar\�u�q�̟���}����q��?.̀0QE7��sɳ��C�P�� ���ԁh���b[��&Z���qdh̷|��j�gj�̢�fr�XH��dj��z���nf9���Nj��r<R�mb�6:j窓	{����bo�-������z��erö���j�����pe1�m��n���z���`dr#FNɦ����/��pfl���I���)��-gt��a�82��8�W�ta���-A˓k�+�Mdo ۍS���Gb  B�_�1j0)�a h��b��<I�$��b �&���c��I�$�c u�b��X|>�L�A�W]g_�L�7 ��dA����c\-���N�����-�f\%�q/I��������Ij]4Yr.a��)�<f�Sj`��H�̛�z^�_�j]�S��g���-}�?/l`��������z뺔&o`�C5�V˛j����~r`���aڊ��r����kb����P�5y��cph�&(���_�vdei��p�m�VV�}lv���@��	��&~�sI�0���  �x޷�n �͟���m����o������f��@EϿ�OL�%�nB�� 5�VSPg�F�"�0�  ����X]0	��LJ��r ���V[���cҐ� ��m�QY^+pҨ�j�{(��Z_�8�"�rj��r��r�]b�I�$I@ ���ۏ\a�@�6M���r����]bm$	��	�S���]b� A�I����]b��M�&m���z����^c ���(���	{}�.�_d4��I 𭯪��fM�4I:0ϼ�j��E�SϑC$@-�a�|_��m����$'�!u�6��n��y�'b��(u�J?l�m�6L��&Z  m�X`�l���`>0,�A��um~ܧ�=�,��ru���rh�T$-I)�gj�j��q`�Kw�+,��j����n`�־��i��r^���gl�V�+�I��r���(eqc��	�@ ������2W���jp�*�Cmi��z���
sc|ņn�aI��z-]U�sf�=�^�9j��z}�p�nf� �<H���z����vi7�PvZ�i��z?�/�yj�Ʃ\V��j�Ehɂ"%J�4��a{^WU�n ������b�U��u��|I�$���(�Z�?�t۠mԖjFb �Xs��>J%.��A�7�uQ<ۆm��CL��I����QJO��wi��r&bb�ʪEQ%�!'��rFj/�?�EK��]���zEb�`bGL�m�A�rZ}�+bEJZ�#9��r�Qnzz�FL�qCحfr�I}��"OF�l�!|�r�Y����MFm<	��r�Q���VCN��ܖm�r�Q긚�NCO�����Q�.�9��$I� !I��Q�:/C�6ϐA�Ii� �|_��s� ��'��!�}��u��;�����`8i(�p�i�4X*,�A�^k��r���X.,�z 
 �w6S�d}��%b��
~sv\��a�frv,*�{t~��접��ry/��zs�?�Q���zw��iyn����Ӷh��z����nxƒL�$H��j�j
�xq��q	,�zfb��t�sx��m�X�(��j����{n[�$�M�zfjX��8|u�o'GNH��r��+.t��qc�$i��rR��_�v��-	2H�fb���>q�&,P�4�� *�z^�i�$�ү'h�A�e�6�o����?���@UI<��k�`i��X��! V[n��m͏�C��i�  �=�|n���X{���r8�vk���m��r);��mw��بMj��z�?^�nx��!̪�)��Y�(��xj�?�_��fr� �ndvB9rK�v���r�{��xk�VNU�i�b��K�xf��;`�y(�Fj���{g�څ]��zFj�B�(kp��a#GN�Fj��'yj!�s�@p��Y����oq|�m'�ʣfr����k�)dh
� ��|_k�iӆB�� ���?�rʑ������@(��8��q�0L���CW_w��=��#��� �uOA4)����&Z����KDu�lk�K��r[ױ[LEfD۠GrJ��r��x�HPIP$9����r�j޻JOj;&DS��z�r,
RI+�eʶI��j�~�.QHLh;�)��r%���KQZ@v��){�r�V��MR� @����z�j��/*MRܨ#[��z�j*�"�VO�If#�iJ��j��@@]J$G��!��rUU�=�G�9tHm���r\W�lРa&�� ߷m�o���O��ų w� ��q�pA��D��B^y���a�#��	t�a]UW�bϟ'N���a���%mc&[�,mrM��z�}T�m]�3Ɯ,l��r�y��f\��i�˓j����H[h-˦Xٴ 9�=��hBka,Q����r��ʲgl�0�¨I-�I���ucq�D�1˓�rh���qf ���˛�����mfd���Ȱ
����wh6q�1�n�
�>����rO��j�l��z��'�u��C�
�-b�t_�`� ���&&�b�u�'�jX{�~���A e����g��B���F�C�{�ő���@�`� �6��m��+mi�Eb���靎O��l9��炨�����l{���
�="�����+��l���i�/-	˚�7]``DN��z��������� ˓	��`�������ڒ˛J���&7���(�9�  �������yb���R���r�:j���i9�h�	{��uu��Igr�4웧j��'�����w����Q��J���{%D���(�>�sr�m�6m�P�A\����t������c�����q�~b�/� ��O?�sy�<z=룂��-�h��	�r��&b�5�Fcrä�3����z�Ѽ�rf?���Ԑ��2�of�ڢp�*j��rx�lc�L�A�ذ
��� .rb�Z���@ �����oe�R
� j��m#+oh�ϱUim  ����rcM�z)l��)���zfp����J�?���gt�@��F���ί��taq�{�+�P����r�a�k۷���&Z �@��_O�F&�bj��=�b0���a���8W����c�ə$�c ]u�b�XO���C�,�!�%��g]Z��<��z����]b"�l��-���+.�yf_6V���Ǝ�j���krj]&��%��)�ϙ~_ja�n� �~�.k]qz�6���=ݼ��n`����m����z�.�	o`K�����˛j�a���s_v�?�����r���.ch� I�"i��*����rpbw�7���
�;�vc#'�#�
�|���ly����뛥Q*�j�rϐ
4��  x޷��n`� �1�� [&���n1��?'��0QL���Oɿ��C�� �%�\_Pܨi�@P�Gj���rW]��rP
�*���W\�(�bɍ�
����TY^��[��
�����[`���4������]b��	��II��r�=��\a�H5m  �-��%8\a��q�Fi��	�T}�7]b�4	�4m���z�y:�^c� @iJ��r��( ^c &�#�� �Zꂊ^d�(
Sp ���*#jM��$	 !�Fb��OQ�U9H��n�Ax_���m����$�!]���sg`Z������q?����g�ɗ��ܣ }����t���0lGZ }�P�aI��{���� ��qeW���o��	���[�g^�5;K���I���_k�&i60��+j"�pb|��w���j�o=��ree����@@ �y. �et��v�)����Vhu�:njȂ����H/�vfuS�!�	`���o�|n���1Q�.��a��?�ry�D��a,� 
B�vc�M�0�����Q!Z�!�`h�����`��a5m��rc Mkɖ|a��i �^�sj�Pg.����Y~���a7�\����@`���tZ	�A�� +��[��O��w�
�fj��pi���C"øqI��j������Zt?�M��)�-')�����x�9�˓j��mWU�����Y�˓�z"�j����6n!)�˓)��ị�����.ق��J�8������%IN�)����o���l�6���z�����zn�i�I��j褸ྦྷ���/Q
-�&Zi��̝ܸ�#A"M�!bX���l�̟�E��/C�}t�i��A�� ��߀s Xri�ۄ�!I/���q!���?/��8SG��s��@S���  *����i���ۉ��Z��*�uj�.�N�a˛�j���ese��"������r)���`l��$S6���j�趭cv��#�&̛�j����uge����b���r��P�vg�J:��i��z��y}vjol�D���	��%�uug��M�I�����vj�c��a���z긘�xllN�����r��
B�fy�9t)˛�(�h޶�WX��ɟ�	�`-���j_%r��?���i���bkb+�:hh�z>jU�c	��y��܁(t�K/�aL&��Ţ %�WYk`�/����ϴ�Y����^c�8��D�n��r���e^�or�� N�{x��jja~58N���r���na�!�s�̓�z��zob���m�	{��Oqdnq�e����z����q]�מ�������tb���򃒰�sO�va9|�!L�����vh��&a̛�j*�C�sy�0�,�A�z�'�n@����'��@ �3��|n@9�|�?��@ ����{r�riy��iIx�{��nO�������@O-�U�Kp8�L�a5UTR�J�m۷��L�a���Y^�DRI�$j�Fb"�.!Z_�$`�H���	�\X��\a  `�6M��M����\a�l�(����z����]b���I���r���]b 4AҴm��gr�⨢b[-ɶ I*���z���^c� i��m���z����_d�M$7n0�����A�++MeM�6m����z_W�7�L�!T웁�p\��c�.<x�<��!�=��q`���3��aa��}_rb"��.i���cY ����b��� �CI\s��d�m�6K��#�bUW]t�f���X>,��A�5�wi>W5����j��~prccC���i��r��}|kbzה$9�I��r��"-cn`��c��i��z��:�xfin1�i�{�~�wi.S'}�ai��z&���ul��HרH��r��z*wh��]p�H��r()
�wk�-��)yI��z�ݵe|kO�r嶡O��Q��?K�rI�FL��  c�v]�m�0���&��#�u�}l
p��� �aaqTW]}tD�]�� �"I(>�}�n�����D��a^m5U�s� i�C��  �^z��:x.<<	����7��p=�ݶi��K�#9����IT[WhTn�Z兯RG�_:�:
�zb����RH�c�.�T�r�Y �BNFv4fr�a���REtj�l���z%b7Ok�NFd�ri��Q���QH �l5��r�Q7'/NE!��#�mj�gjUU�7��$I� !I��A���s�6ϐA��Iʣa�|_W�p ����"�b�u��o����_?� 0����xm�rM𺀒!Q��b}�pvp7����`0+�?��s�TL)��  �Zk��vϯ�#�H� �*)�x��FR���炤Y"8.$�y}R�#�i��Y�:�J~t�سM�i�Fj�.�|q����6	H��z�+Q�s~�6���i�ǂp��}u�e��&H��r=}rmw� )��r�7�ʃsvڛRE(��rH߁zO�g&��fj��.�y�J�%�"���Q��7�r�9tH����cXV�_$Ȓ�� ��9wep��o�Á8����ve�6m�� zdY"���glp�nW���AQ�'�}�h�`H1�$ԄV[|��s����I� �u}s���ĘA,�%b��W�}p�S߬;�j��Q����|l9U�$��)�Fj	�>zjS�� V)��zx�~>kw1�-I��rx_��{o���$9i��Q����~jܷ�tɡ(��Y�j�}j�o��N��zfj��H�}iϛ���A�fj�����r��j������������7p�&,X��K���r\W�nРa�"=�� ���=�jH����?$��aEQTUlxk���*�@��a-��W�p�;���@܁0c���o�PL)���C�]t��A�'�#�p͂�5�UAN�֌i��pըrUUTYPG���o�*��r*��TPIW�b.��	{�rʪ��TM���}肧r�7�_RJ��a��m)�Fjj��RKvR��,�)�Fj6��TJ~���){�r ���UN���6�)��r�x�VO�]d��a)��r���+ZFܶQ�!��Gb�7�H�9p@���(zZTU�[ЀaÎ%��� U�u=�]������g�bQ���q`Q�N7���a��UtgP/�k�b� 0J*��nÔaɐd݃_}���f�#��	�  }�ײaɓ�~��� ���pc�o;rO؎�)����re^1��ag˓j�K2�l_v����b�)����oaf�����rz���te�7:���z� �te9��%�u˛����_ug�J�CÔ����R��vemH��8̛�sz�|o�y&H��b��r�
4hڴ� ��t]a�i�f�����?�`�{�o;���X����cqḶ(	����q �W�jy!,�����i7�UU�a����ǻA�h��ƛM"&3hK�@�/5����j��6`�fj���Z��oH<?�I�炜-�����Pq(���I����]��?�<	�˓j��[Uե�q�� �˓�z������w3��8@��J�7�&"���m�fk���J����~���T�$�M�)��{|[���1vcYO���z�������$m�86	{&Z��`�����an��(�:�co�m�6m�K�"X����l������D���P��rA����Az�(����r���-�� A�+�l�u����R��0�Qg��sy��h4�z  
	�}jvηZ���j��/}ju� I֐J��j���se�O�Z�Њ��j �gk`c��0���jh��+vg)���N@j��r��hv\�`�4���r?:��tgT��s9l̛	��y^_vg}�9�ڑ��	��	��ui�o;����k���wkg�'F̓�z����xi|C��P웇b�*�p�W�qc�"=l�� n޷=�Zȟ?����ÀI���k_DGN��Ǣ�r""�Xbkk�a&$�z�_U�g)�O�$�܂ ]t�K�`I��`R0��� ��_j��	�J��)�{��`^cҨ��V�n��r04��i^~�n̓�j8@h�la���-k��j��"(na1صh��˓�z��n�ncM��GQn��z�i�Sq]$�)c�˓)���Z�t^e|�|1j�	{"�*�sa�c��Y��	�܅S�ve�{" J���z�::o�i�������Q���p�sϐ
4+�az�'I�oh�����h�bQFYVn|9�Xa�a�0��}u�p������@w_��n)��?��`(SK-��K��@3���a�UTaJ�&I�A,�� ����`Y�m�9���=
?��Z_��$�2��	��Vm�\a�$L� Mj��z�y�s\a؆i�M���z���]b�$A��M���j}� �]c�&H��I 1�<���\b��$ˀJ��z��_d  �J��z0"��_d�(�ԑ�
������L�k׶Sδ&b~�/O�LϐA��˛�p\�5�b��'Ο��9��q`D�c*�"�i�__Wq_9���Ԅ��Yן��yd��O�AԡY?�UU�j����c��OɄ��a�4l�j  i��p�g�S����́ �_�ar��L0� � U�dI�<I"ϴ!�  U�d����/	,� *  U�hɟ$I" δ �
 U�my��� ��A0  �p@ ` L�A  ��rO�$� @�����������J �U�q�D� H2� �p�m�vÄ8,gb [�5M�^���O�<c�?���lb�� ����q�^U]mdY��E��Y�ɯ q]vq�őEz�a���tf'7쩞6`��i}���g�����$� L0ʪ�{R��B��A)��Q��������&b�_�7����I�m��r������`���
q˛	{�[�Q��y��.Y�)�^����IK�P�	{�o��NK��6m�	{{}}�����n9
���r{�}�����5)	L�FZ���(¨�}�v�,��jjz�ȳ)]����	� BPԕ�o�����F�1�=�q{s�&�`C���8\�]Wvn�e��aA���iumK5C"l�bQ�Z^U~p�TR�f����8'�]U�r)���ɫ�(Sn9e�s̃%�B`L� �����o�����˓gb����yf˭�C;a���j���iv$m��6���r'$�}o~�
c�6j��r榸Umzݰ�c�$)�gj �_r������j��z���k�C�6A���z�
�Elv&I���肕�{KrYom��j��Q.�/k�uy�dɐ���� ��^��[�'M�$L�!�-��f\��m����a����^d�֌��h�rs��_l_��>��fz�i���^nf�@�.ט�bYk���gI��I��h�a d�k��\ˏ%�rc��A��yl]1�u�Q��I���h_]˶t��T�j_� `p-�E؆�t�)�UUu ram�q#�ޤQ��� cpl�@�m4އr�_U q`@�
!Ⱦ�	�UWU ta#�� ��3�)�UUU iw���lCt�	�U_U xi�0�����)�U�e`�o��!D�� �|�&�m@����?� I����e�ٮ��Ú�a��Y;rh3̒f�Dz�YVv��xg�F�����i"Q��
 n��R������@__��k>������0C-�*�Jh.0�	+�a��SM��$I�I,�R��d]y\�nᲫ��z�w��d]��u�ޫ��z��"�c[l=���?˓	�UV�5aVۤID7-��z��_�ScmۦI(@��z��^.cN�4MT'��	�UUU�fP�$I��,�Fb��dN$𴫓�j�/�L�N�1dHL�� �p[�a�<5j�����(յ��p`)��i;	��i\���m^��@C���i�xVWj`Mfs��~rbY`|z�ob�7�X^��z�YM%�]�a��������0�C;�n�CƼBUW]t�mO��#�O�A���uxi�.s��1r�CA����_p[�%�Aʓ�r��p`�Fv����z�U)jdq$��m����r�U�iwl*.#��L�fj���r�o������r�W��q�����	h��Q��~�p�������cA�/zU�ry�'6l1� r�u_�l�0���D��u�?�o���?��b@ɲ��xn;r$�p!��YTWUU{k$�\lCj�aA�"��u;u��x�QI˯�W�p�����߄�AQ�M5��}�I��BEģ W_}�=��m�6i�A�m�B��$I ���Ģ(���W�<�m�I"i�cA���:��$I �$H�ZU W�=���I I��I�] ׯ;���I I��(�� W�>���� H�� ��(U�B�'I" �dI�+XU�KI�$� I��  _��@ϐa�&II� �o^��r ��'���m&m}A)�7M��0����xl=�Mm��q"Ix���ph�@`��ła"Q�@K�kul°��"Q A|��Ȝqq��ɛ�"�@ K���x�@H!�� �Xa�s̓�A�І� ��-��s)����Fj_��s9l�$���r�}W �q-In���l�fr�U �r丒�$K�fr�U��r��I��+�b��W
y���5� +�fjU���rvɚ�3��Fj]*��s�[�IN-�CA�� W�~I�\/$L���(�PW]�d� �B>��B�u�~_������ �Qm�t_la��>�$zBQާ��drҢIبm�ibYm\{�uj��
/��rBI/�ZH�qo�0v�t�ˡ0�7��u�ph1�%�A�SL��sK�%��	�  �?���v��I���� ��Ջs�m�w���&b�U U�rN�t6 l�&b���U�qa[�+M`��Fj�_(�m���t*@��bk��u?��	M ���I�� W�v��Ӊkʣb�u���y����m�%j�5�W�r�/DhK�� B�wZ�sФI.8E�AW�e�q��<y�$�!A�q��sj`�ʹ۶�iCQ��z�kw3�k�M�i"Qj���kx\C� �q�aDQ�k��on�2o{�B�AQM�UU�o�PL��DăW_|��D��#�2�� ��UUUH���h_>�� ��EQ,ɴM& ��Gb�W�UEQM�&mh��&Z�U URK;M��L�R�} UUK$�I4�$��Q�� UTM�vt���Q�� UNX�1��-��Q��UZO%�qN*`���0�� W�H�9`@3� ���}�c���Â=*�!ߗe�Xx�����*� Q����l^���A�EQp���k^�ߧN�Ez�ak�j�q`!Z�������Y5���zd^}A��B�ܠYO?UU�j��a��_�ݣ _���j�#� I,�A}���f��?�ޢ ��W�aO��~I� `
��c��'�/ ��A ��d����/��  ���U�i���I" �� � U�pI�<I" l�
��pɟ'� l�a�
��tɟ$� ���0�
zU�rO�IR�Ar�u[f�iӆ�
�!��m�_���I�����qE�^Wlb\�$q݀��i|WU�m^�1�'qe��i����q^�8N�:�#r�Y*��ktg䌙���c��a�}��p����E�ASLjɠL���~Lh�A
)����L2����cI���	����i�:I�)�}Y�h���c2�n��)���xV���s��D�
�G_�}觠!ϕ J��	{�_]+���ݶ$Im�	{^�_(��  I�6���jޮ_�����.)���r��u�«��W�0`뛡 �(�h�q���n6,�z PԵ��o`����f�BI=GQ\yp &�Z�6�a�0����tm���b#5DzA=?'�zh$aN�{ÂA��_q�R%Gt���8�7WU�v�O�
�a �[��sy�$X�˛A�+�&p���i%�PJ�gb*�39yg��ۨ+�˛�j�?��iv����&���r���_~p���ω)��j!�~n~n��M)�fj���~swR�X�m���z�����k}���(����z����xld�M��m,�Fj�o~r�s�-�Ҋ��I+�Z�j��<4�zb�p�G�[x�$I�$m��Y�MQTf\脷Kӥ��i#?-'_eh�*�h�r\~vWk_�w[f��i����oe�@P$�	�Q'����h)�I��h�aYd�k�]�#b쮴A�-��h__K�^6u�j���	`l�"i� ވj��� o`�i�n�а
�] ra9n�֔��
�
p`[�B���zw�U tcr�	]�|0 �U sa��r �XS�Q��� wi�8n�&��	�UWU��o����Z��sp�u	�9@�x�'I�m�����'� ���{f`+�uL�Ò�a����is���CMrcQ�_�xg�&sM�$rbYU�+��n�P?��az�@�w� �l��S�?��@RK;��J���2aͼ�����eW$�_��&Z���%^c $hc�.j��z7��]b�4m\�Q���z+��\b�Dr!+������bU�6i��>��r����Tbm۴	HL��zW�W+eM۴I�����zUU]�fR�4i<,�Fb�߻�vN%Y�%M�Fb�+j[�NO�B�i,�  �x߶�`�����?���05���ap�H�+a��a�=��^mk%M�i���i��]Uj]�gv�Er�a��/ta31~��j�Y��Ko|[56c��À(/;+O�s�K�fH/� �}_˪�ֶ�:� �U��̡�@���$)�  �U��̢�Ԗ��$J� �U��ǣ @���){ �U��ƣD���<)� �U��Ǣ�D��?�r!�U��Ğ�4n �?j�aWU�
��mK�I@M�� UU��ĪKv�aU��J�h�#?�#?Ż �&�ib؂UPK-���qty�|n`%��Ur�Y� H�mcy��҆��i����neiA�Cj�a��h|iuǊ(#��q�Y(�W�q7������a��E�w������ �6eYǔøI �'N�A�uU�ʇ$)I �?i�a U�
ɉ�&I �$J�  U/  �
2�  �U����m۶I ��A�U�
� @	��!    �qϼa�U� ɋ��m ���Ձ�U�
ǔҶm�C��A�UZJ�w�"<�/,�!e��u�ufC�XK��� A|vw\yp�b�"I�8����xpȇڷ_�bQAu)5uktF[�7	�a"I���z~s�`
��m0 ���o���~�v@b۰-��@7���w��O�t�� y�}[�o�/���$�� �Y*�d�O� �<�)��U*�b��m ��p�)�_� �c��m �$��C9�U� �h�/ �'PեI*UU
�n� �$��D1�Uu �q�/ ��0�) U� �vy ��$�ā�U� �v� ��d,�� �UO �nD�&�&��Agٚ�i]s=�;�@Q����dZ���|)����a?%��g\fI�-󷦊r��yUf^
˱|e�%z�5��i_�p�.$�f�r�K�Ptf.��|��'�"z���i�q�9�B+݂(��e�xK�q �hbۃU��qI�m @�eA  U��tI�I @�gb!U�UW{� жI�mdA  U U��|O"I жD9 � U��� жI�m#1 5����I.I `��AA`�U]Ѐ�#I `ۅI ->U��� ضI)��� �o]M�u��&�3�I� i�}}h`M:�����@�U��ne�Ʋ�#���Y�z�fsڦA,��e��Y��U�ve�;�3ћ$zbQP��jx@�5��6�i�Y�����rNw<����0*��W�s��dϑ���@ g�m�UX"�,k�j�  ���O� �$$)IL�� �U7 �OI" m���� �U  �SI. ��� �֪ �\I. ��$-�A
U  �`� ϟ$O� �U���[� ��$��a�U���\-	 ��$��(�U ��g� ����݁�U���y�8-�C�L�A�mi�}l�/�p�դ�@(����rcL�=d���cY��`�^i�6`��-$z�a����_iظ�Ҙ�jbY���Wco(�D�@��qBQ���]wf[N�!� I����m�����`ȫ ؓI�O�M��?i���T���I$� �� �U� �J$� ����_U���L� I�$�  �U� O�m�$   K�  @�T   �+�aU� �U  II�$��@U��
�R �������aU�� �S  	��?(�  U*���h��I�`��A�ń�ux�?���C� ���yo��@��!Q��{^}s7�dIBQ�@�'�}t~Z��j�ba"I���V�tg�pq�bYIV|��IO���y�8���x~�gO�C��a(��dǶ��8?��@�X����M��m;	�z �U�
͕ ����$��  �U� ˏ �m��<�aUU��ɏ �m��$�AUU� Ǉ  I����aUU��Ŋ  I��$��AUU� Ĉ� H��룂U��Ȑ��m���!U���ǚ۰�"LI�a�I$��q��������@(����lv�R2�PN ��Hx~`tlҁuڻbYA���"rf����8nbY�@l�vg/�R/�IcY�H�.�{m-�^nS!Q�8P����u����`0kO�ʣ"ű�!ǂ �pz�ʐ�/��$b!��U�ˋ�-I �$FbA*�U ˌn+ �fj��UUˈ$'I ��ǂA�wU
��dp � PU�̍�P��$�Y�_WU Η�D� ���Ya�W�
̡�Ė����Q U? ʚ�ɚ2M�@�eG֤d�c?�?�#� ����pb~��d"�`�BQr^rrl_9��ؾEzAQ��imaK�QS�qbY�.T�qd�5W%@r!IH��~|n���s�YA2�Us�(M�$!bÀ(QO�ʗgq� 8�� �S��ȍ �m �$�r �U�/�~ 0I �'j� UU�*�|  I��$˛AUU���x  I��<�ġ UU��v   ��$�� �U� �v   Ӗ$+P����t   ۖ'ʣ  ��  �v�  #�$��1]� Ȧ"Y"P�AW��Z�vh�$���C�a6��&um�
�X����a��`ruj���)�m�aA)�� vj����N��qBQ�=��ykn���xb�a"Q����~rWY� rBQ����o�?�C�"ImGi�ȥ�@� A)3�a�rW�Ȗ�- �'gb�hU��̇m+I �'dAa:� �˄���$D9a*U �|��%�$�Q��U��o�&  �'�Ia�U���`�  �?'b �U��`   �$�j@P��`  ����a�U/{ͬ���2sxL�Aإ�[�d�o�v"?F� '��7mc�����b`�$rzR^_\g��JEz�a��f[/��K�ez�aj���m_N�[�Ez�a���Kub���[j�Q�n��p�}7w�@ K�J�ˆ�mՄ	��@{A��ǧ�@��0?� �U��̡@���$GZ  �U  ˢ�Ԓ��$&Z �U  Ǣ D����I�P��ƣ�D���'�z  �U�"ȡ�D��'gb�
@� ĝ@P�狋�`�Ơ�Fr���M� �ǒ۰i�a�a��ҵgp�'�'��&��ha[" Y���a���Zoc&g��|#%r�a�h��meZS��f��iwtzpe���ۀ�i�a88X?tk^�S"��i�Y�?���q&fRO���À(�Os�wtC0@M� yM]�Ȕ"�M �$��a�]U�ɇ$'0�
@�ȉ��$j�   U� ɉ�&i �$3�`#���
" ��
#� �
�
 ���
@� Ɍ 1����
�+��ǤIr"��ArՔR�wP����%��!��~uZ�� ��i�8x[S�xpX�c?��
�]彯�ouZPr$I��YA��)-|kI�w~�R�aA��`Zy~[����H�0���z�v�^��B��` M�E��~�I� �t���a_��n���ږ$˛C1حV
�b�O� �'�
���U
�e��m �'�
�W� �d��M �$��D9�U �h�/ ��qեI
UU�n�# ���#1�U] �s�# ��$P��  �
 I ����� U���v�)	����� �U�B�d��?��?�a4�7j^��<�/�a�BQ�⊂bYj4� ����i���f\,rd��e��i�鸿h^��� �e�%ziM`�pa)�g�ۆ�r��|�vg�`zo��'��iE=?O�r1��TIp݁ yG}Y�uO2n ��gb  ��U��
��A _ U��uI2I ��Gb!U�UUϐ
�&Z U�U}�}I�
au U�̀ ��dA -xU^��/I `�d9 P�W�Ё" ���I KU̅	!I�dh�� mS�sp�<{=$� ��gv�VB��M!��q��`Hof[ݺuЂc��Y̞_�tg��|+�E��Y*�U�ven�t'frbQ����|k�f��Pn!rBQ*��_�s1�r�����` ��ow�s��L90��aYEm��TK�m����  �m� �OI"	$�����(�U� �OI.m�����U  �T�/ ������ �`I ��$��@��*�a� ��$M� ������   �[v ��$� �U*��]%	 ����� �U ��m� `��|��A*U@��x�%r�=� E�yjx�T���CԀa���Vo`����т��ap��{i]`��fKz�a��kkh^7�6Q�%r�Q��y�cu��P+m���aUU�/�i���t	B����|[�z ��#'μA�u�|��<���S�Q�����{�S�}���*U�u�~ikpNuҵ�˓��WU�z�-aj���˓
]UU�{L��ĖT�r�~������*I���FjU���q-�����)�(uU}����~e��ݪ�(UUU������������[���k�#��
��  m��h�ey�$M�&���0���pd[C�*�raa

�cq�N+�iEz�i~��[qa�q��S�$z�i�^�kwdܰr�[���@��?�qI���c� C�y�a��3'�a�u�z_�L���ߐդQ����_l(�L��uqū���__p_OB�ȭ0��rn��nby^tjq�I�(UU�se��5�Rq�	{�UuutbN�
⤒���r*U��zkn�U�Im��j����}o��	�Pl��r��WW�pO�ǿ����C9�˿��u�C��a�W\r�m���X.,��B�K�5}u��>�c�������zs���=�bQ�8/��zqm�-��Y�@⪒�u7�b��)���8UUU�s�D�	� ɳl[�d(���?,�@���/wd�,���<ϴ�A-��od�\����j��se�P/u�,�J�_��ssi@~̸���z����te�Pnv�ܫ��j�
xj�	/���J���^J|k��l��-�I�/۽_|i�mn��n��rw��}pC��.�w-�gjpb���ob񇊋!t�H�a�   �
���(�ɥ�m\�
�:8���a����i]m9���fz$r����\h*�K+�fz�i>__�j_uށ%��r��u�_��Og�B�k�t�F� a�.>)� S����E��'I�$��0W���KDw�&ױP�)U ��MDMI�����IU ��ND�YǑ�1] ��GL� h$I�/̈́IU���OD�3N{Q7�եI���BP �6b����j����?Q�&mɶ＇j_ ���C���O�$p�dA�X�*B�i�4J
%�� ��_|l�@ !�*�!��uzh���Cڅ��qUWVxsgvl�/�r�a
���ul�㶦VBrbY��ks�j!�r���a�0��xP�q��'O�@�r  w�%I[�J�J�  P�  ���/wZ������w������d\I��$��P���~��c[6�f��J� ���e]���{�P����������z��]U_d$�m�	n�j��8�f\`�����-�)�(^�\ae:��F`��J��{�_e]�֟�,�gj*�� s^6aSiy�m�(���{�m�`
0  ʣ@�x�
�l�#�3�ĚA�/�wf]9��Z�C��@�?��p`L>��zbY�zbdi���ڀ��aI莶bjvІ1R(�a�0"�p�h��?�G�  �5M�F�"���?l�AS��=[E�����?ͼ�Q���LC�:-۴m�	{(_W�RE5�Rn��L��z��W�SH��MĶ|���r|eޭKUjZ��&lI�fb&��Q\ڢ��mi��jR"w�]V%er5�(�Fjn��7Z_L3�R�(�%b�]bl���&hʛFj���P��\�?ʛ� ~��*�_���A� �&�u��4M�l�� ���H�wq��m"Y�@�Ͻ�y~� `c�$"Q�8��~c�z�/Rr`Y�@�%�E�}��?y�F��8�Gz�h�4i�t�rASԵ-ǈP=�O�'���Y�%����H�m�b���I� Y���� �ÕO�I� ]���r7[n͉� U_W����q�9������_U�|�#�=��ݧz��U��e��(���z
����x���!(�������~�@���?��j�*��Łtɛ�P� ����op< N 鳁���X~n~�?W�ȅà@���\qi��M� �qA����tkn�%[�bYI��8�rht�z�  �qI���l�����@�a(��q�oϔi� ���b�w]W�Z��}�$�ā �5�l^h����N�I�U�}oeW�3M8nS�I�/W_]fY�3O�Hlp��z ���ePɿ���o�{����aQy)I�0M.��z ���gV�3���v��i��wUUhW���e+�.ņr�#��x\6����$.�fjx ���ctɕ�K��]Vx��lp"8,��!�uՄh�};����� ����dr��zA����me��7QbY!I
(�Ois �1�1�a"Ib_�ޗm��߿f� �?Ǳ�r�
4���NQ���sh����'NՃI݇��yo����O��z WWnz"�4#	t.��Y����}u�_喷,�fj �]��v�Kġ'L�fj�U�}}uEAe��)�Fj`���s�mӲ+*l�z&bU�*Å}�n��d)��Y�����}m��qc��Gj����v)��?˛ B �t�3,f'�A��Z�qO�?ɏ�(��@~\SIoz�IK��Y!I
�vn�U���aBQ(��mzB�S.�YI���zn��$	� !���@U�5��h�tI� !ԃ|T�U�N��Ο��1U��PbЦm۶��DA����aOq,�$I��)�
�Rb Ԧmے��z �W_aSyۤm���z
��}TaҐ$Iڶ��	{ �W]bU�?`�6nP͇j ���Ub��m˶��J��UUUaU�?lҠM�ͫ�'�Uu�L��?��  ��.�h�3�fL(�A�e�T�_���N����@ ��'m\CS�XJ���i]UT_i]�ϻH=�fz�Y��o{]k6b3nCz�Q���9xeN���{���aU�5K�j�C� A�B�l[��z�r�����(u�%�|X������j�+���{~
roٚ7��
U�]�z%�M&�53�˓ uUU�|�)��m�t抋 ��u�{)]B��rs�gr�_����A�J���b ����������)�
]�_��yW��h�ޫ�
UUUˌ��|�����)h����fr8Zȫ  m�ږe���ɍ��AYW\q�qes\���%rbY**9ld��6=�Ez�i����qa5�t��$r�a��J�wg#�k���8�?O�qI�!P�D� Dy��_���{�$O�`��%�ya�����p�Z)���k_c~�Fqū���WW`p �rWN��r [��ob��a�F�q�	{
Uuwte�a�Tn��	{�U�]yb)�	��vn��r
U�~l�OstQ�L��jp���sy��6r�	{6_UU�q1��?��(v���râa�`H��au�W\�m���ˏ�b�"��c}s�C۴�A` �)sy�	ۖRbQ�8+.{p�Y���Y�@xꤣt�D.=@��7��tϕH� ��" �l[��d���'�a�/wdXM۾�'ﴇj��jxod�K`)Y��	{����esl�b�2t�){V���gs��jZ���r��letmB��m̓)�w#�(|i��	���̛J���W�wk �m�mm��r�k}j��mu��M��rݹ.�pp?��߮��j�^���h�C��L)�!��H�aI��N�� A���%m][m�B��d��Y(
�i]�:��0fz�i����g_hƉ�XN���i���_i��PdCb��q�u�%�cI�1`@��Bs�dY�E(���'��a�u�5RDX3?�o���$9U��KDNz��&vP��(�
�CM�eLK��եIU ��NDqI��(���#1W��FK��1l�vP̈́IU���AN�Іc6n/�C9� ��BP �&L��0Ňj���u?Q�ք-�6�Gb� ���B1�I�$�� o�� �_ìa�H�Q i��P�lO��L�%I�(��rh����'`��iUUW|hr�ƍ!X�Ez�a�wuj��5�6��q�Y��Z܂tw�)���
��n�x^T�q�	�r  �'I�[ɩT	  ��1��%�d]����Պ����d[!]�CCV��I�__�c[&��J�1�"I ���d\��XRrū���WUf]�Жm�:����ܮU}]b��a��t��)��׷c\$�v����)����6e]��p��rm�Fj
���ud)w��m�Fb`*��r�L� ��� ��p��ly�<r9��a�˩�ewEl+��B��H�ϭ�qa�����zbY�_^X`mB�MK�� ��Y�u�7�d��G�p�ܣ��|]Ɂ�س$�բ W�5��w�se����Er�����y�}�.�t,��z*W��v)�dI��{�����{���L�M�J������{�vE��-�I�(�V��}�s;��A�������������������������������� �J9��h˛I�[����Vn?��z@�����I������sω����Is$�hj�)����u���a߷��m��Qh**��d#���JL� �\`�bɟ<ˏ%����Ͻpa�b6,�	��Q����tb7��h��i�R~��hɓ���B�bJ��o�b&���'pՁWW�5v`�{3wsױ� ����k_.�v�~δ���_UUkalS'c��J���{jac���	{d��bdoZ�u�i�	{�kWsei�wٮ̓){o���wh��|NP䀘�r����zk�`nq����	{����|r|a����I�gj��j@v�"�1���rFb��u��p��������1�?���q�CłUWXc�oɿ�X>��B�C��x�S�bL�������sO�n1�r�8�_7�p��Gϐf�ǣjZ�e0`�$��  ֵ�+s_�ä���P�Fj�/��i^h��S_�/��j����]gL�&�����r+�5ja�ڑ�д�){����m_��M��){��G�g_�Rl�v��Gb��P�ob�����r
���sh��n�l�gj�J`�hv̶I��	{���tm/p���j��r�6/�oU]bn�M��r���q�����  �Z`��[y�$h.�M�a��%�r_w�:p�r�rUUU\g^uf��`!��iե�2�[���ϕ���0/OST�C�>Z q�f=�Cp��I�$�Ձ 5���KD!�rQ{��r���~CHi�%1�-��j�vU�LE_I�ik�){gj�C`�GL"�	 ){gj៾�KC�8f�)�Gb$/-+FKPb��-j��j��`�ME�������j�HM\K��m�	{�vPH��\ڱ-�	{��U��?��������ZZK/��B��A�W_|�jI��`>,���(��=�ky,Ď�6���iUUWT�m1�-�z�(��j�sɟ?�i� (_�7M�\���',�a[�5cYi�`)���&b����]b�(i�2
���z����e^~���]8˛j��'
�^c�N�@-�������^c⺍+��)���d]�:r
��-�̛U���e\��+�6�I�8 8�f[�˾���i�\��eZNW���)�"�f�i^:�
�`��z�
�Ruc���?ʛ�r����k�y�<�  �`  �k͏& 3`�� �ᅖvdr2�K�Ģ I�՗xwc���%�	�q�(���~�jɟ?��@(_W5o�H�N�x�?��AYV�5WEP������"A���CH��n�(I��zB���EJ�M���(��o�MEo��F#I���z�$�QH���oQh��z��j�RJ��gYA��%b����OU -�*ii��zSZ��[Tq��ϛxI��r�z�Y^��i�$(i��z�{U_[`c��"����r鴴�f_�`������r~z��U��\�?{  @   �\���`3�6P�y���ɏ���8UTṠ}���V�Q@(���mpȒ$	&,�i ��	��v!V&��z qܶ=Ëؿ�ϟ'���Q5��蔆[�gL�����z������w+:�l��I�$˯���-����,�i���m����qw�k;˛'�E]����x��m����7��}Ÿ-?���b��6.�!�yC�t����/?�~B#�nײ����mw+�|\A���,�j�W+���-��7�����/�}ɀ��XI�$+��j蠀�nx< ^�ܢq�_�l�Ͷa��#�@ ����zo^L�6bY�8ؘ��l��������8��q�o	J� ���b�fY��VB�&M�$r� ս��eY8��V�էr��}�c\5WMnJ�룆r��}^c,�u[�`룆r�(b[� 6�*���%ݴX[a�tW��i��Л�\a'	#�V�H����e]�\nU�I��˿�i_qy�[۪��z6��c[m��+:ʛ�j�w��i\~���k�%b}���\t�����AW^{��ep.4*	��!'�u՟jI�����!� ����xiO�笋m�YI�����fik�vcd�  �'��kO�0�! �x���oh����$(�� !
��{fP+����Fj�ҭ�uk�M�<S�I��r���Kwilт�u�)��r�44xomg�-j�I�er���wp��>�N�fj�U,zo�n*��(�Fj����yq�P�D�m�Fj����s)��")��gj���j�x���&�)��r9����|,d)�v���z����y1�w�?�� h��*�tP"�pI��  5�X�oϟ����� ���|loHR� �iaQ^~���s���cb�IUU7��ojՠ�	�BcXV��L��͟�p�a�5�[a�MÀI��r���UZ_l�m�6���r.�zU[`4	 j��z$���Z_���l)��zs��<]b�  j������]b��@���r�C�\aEI� i���r##	]b���M�){�_Wc\nm�5b�̓�z�>nw\e�@n$ǐ���j���%�H)��?P�aXC�:�c�3�fLJ�!e�^�^��$σ����@����g_ͻ:b
���Y���`qඩ%I.A�aI�7M�jɕ `��d�|_��x��9����բ �5�#�w1��c˶��I��Y^w�vn[w�{.��r
U
�{k�$5�i���U����{w�?I9M�j�'`���|���;S-�I�Jaլ�~vlg<��j�}���~G�m��I�j�����b}��������`��m�)��sbm��u�r���)�7�U��w�?�� z�
*�d`"0V	�B=��^�c��'�����iUTQ�pa\�&$;� �dY����tf��b�AQ���n�hy�X�p�c����[�b��={�$�� U�5�_je���r��j��TU]j`�I�-������WUWjal�K4˓)�8:ia`�r6��	{�?��neES���W�){��ڕse�
.�u��r[��cwg��	��˛�r���zp&油˘��	{��k�r}X(�8iJ�FbhrzP�y�Ѣw���r&Zg���p1�|;͢ s�?��râa�`h�̂�UVX�o�����A��(VZi5v���m䘲AI�0!���p'�M"&1Bz�0z_��p�0���!�hZ��_ ���'�  ��+
s`x�����p�j�5M[W\i������gj�"��ha�����̓�r/*ڭkb���*���*{���el^`��v���){f��ok_$esa���Gb ���oc`�C6�M�j��S�tmj�ڦ���&b����ivٖa�Fv��	{��~wm�0��Ы��r.'���pp?���m��rvA_��\�3�`K��A5VX`�[I��͏�l�@ ���5m^���fÁ@rrW~
j\>�%�1��#zUU�7�[�X�p���(K�TU�C�
���'qբ WU�5RD�s�y�$��9��LE�貪m;n��r��~_CHm�&$H�-��r�U��FL���M){gbb��FK-Im��){Fj(�n�LD$�tD�j��j��EKTm]Hf���j�j�ME��ty�z���r{�<�PH%uY�,�)� yUWQI����ڮ��r:����?9��?� ~��*[���I��Gb M5�P�jI��̏%���Y|q�jy�ԑ\�&�i�ajZ���r��6�Yb�a ���p�v���ና@(׷MS�Z�?~�$μ��5aZǉ不���zr���]bS�I[����j��_��^d���죊�;�^c�0b� H-�����z_dp��-�J���+�f]�]iٖ-�̛'��[e$Cr�a�I�. �7f[q߷?Ub˛j���Zg�m�J��)����l_�V��v��z���Txc��
���ʛ�ru���o�ϐ���  6Zb��k��$`,	� ���vdNb�c-�!�@Q{����gI�?q�!ʘgY�}�`���W�5��~��h����b����z��P�B��)���ۋ�x���x�Q˛)��<./�y�vn��n,�����y��KR��NM�̛~�������j/-����P��|;-�Dj-����h���|Vm��1����Z_�.��k��ح��I�j������P��˛I�������a��R�)��RW����ŷvzo��z���������M�)�a={y�k�"A��J�Ae�X`�e��$��D��0��}�g������  ��4O�_80`�$�� [�=i\Hᐱk����8����j_�����-�j���°`e,�M�	�J�Ԟ&�_dYG�-W˛	{��H�ha�}�yWJ˓	{�p��qe��q����z~_��p`޼���-�)��oO�ub��n��˓	{���Btm�~�c�˓�j��jRxq\eVm�j�FbbxRPx�	.�I�jFbp�z!XnU��	{gb���/�r��߷��μZ���{M�Cp�A�VZk�tɯ�3��bs��u�q��g��)�` �FQ�e
4h�'�� Vl\�k�����&���f]D{���J��+�*g`w����j�UU�=f_eʴ�h�쓇j���ha��N!h���){<���j`CK�I���	{;	��m^�#�[K�j�gb\�߷cnЪ2������r?N�qe�0��M���b08��th\n&r��	{��j
l| $aB:�j��r��{nv��'0��	s/���sTۡ&�-�gb����{x	��\��A�\j��hO�?�/ȣ�C�7]��b��u�!
@���C$`��=�Q  c��=C�     ��(5��DI�4M�&i,�Fb����EJ�m�ij�Fj���EJT%�&�	{gj�?�JB�Ɓ��zFb����EJڈ���i�zZj���LC�۴qٶI��r���EJ#6��nk��z����JC�֥M�J�	{N~u�ME��/ys���z����OHX{�h�狋	{4B�~JO)��"a˓�r�**�A������PŤQ�C��E�μ ��^x�uɳ��3�'�Ba��u�l��?�ɳ@(_�6I�],���'5��(]W�5]h�8i�6I��Fb����^c��q�&������^d�4-�&	����/<�^c�Pn��q�˓{�!]b�0n�DRN�炪**�c[KE���r�������^d�8j�0 -�j�J���d]hﶁ�n����c�e[.E)Y�˛)�hJ��[e$C��b��r���)h`�G�J�,�)�����ak��� i˓(��Pp�doۂ��(�����z�l�I�$M� X`�
�rK��<��  ����oI�?yjb�@.����J&L8p�<�  ��=ZD���q}�Ö́I����KC #løIL��T]��LC���2n������MB��w��uj�{�J~JO�m�&Hi��r� ��LQ�� ��ʓ���WOT�(m�8����t�UWWNvA�d�R��fj����ZS7�6o(�fj�ߴ�X]�&���m肆r%7�\a�m�&m(��rR
��_d"M� ����j���^`f�&	�Qi��j���/�S��G��L�  B*��W��fM��
�@�ER�w��?�����0�Ö��x1tH�$��Y hڶ�ƄУ'Ο�1�"95͡���I�i�q+�Ej���ϔ������)�gr�-)���ɰ4n���(�	���D�40ʛ��|r����6�-E���(�꾾��wX%0P-�i�ǂ�njp�|����˛ǂ�+)�L5�$�ʛH�6�榌���^W�H��C�k�$���˛�  *-�|��	��\����
������:w�����<��~��X�?�@p�� �op8Z	ŊA)m7ܸh�m���E�(�+u��p	J� �%� �_��TB�&M�'o� �-��b[/�r)G�2打\WUU^c��I�6M���zV[s�^c$4i�i��	-��^c�(���i��z����_d�0�)��r�7�c[li�D+��z�b��\b��T
!˛i����e^wk��Ӫ��I��ʂe]�v�	v˛���Zc\���X�I���zB{��lZ�}'�Yr�zFj1.İm[1�ng����r'�y��b�����aW\r��q`2,&$� 7}�׵tI�?���"� �0ɗ�l��&,ƻC�z���j`��I�$i�� 9ph����m?�frK�^�sg>�a�z�%b����ui�ǚw|�)��r���ug�[_%	�	��z0�Nntj�ɘ�Gj)��z���]xk�F�Mڶ)��z_uvm5����zz�+roy##A���gj�.~o1aWN�{)�fj�z��x.v�7>i��r�)���y��j6�j��z��cU�}�P�/�֫��r�����v	�D��/�a`
*��uB#�ÐaO� ��P�o���K�E��0�)tQ�pOk֠��A�kZ��JB�̟��A�=�X]	G�����	{XVUUY^"G�	k��zW=��Z_�qlI��z��w�Y^�0m�QJ��z��Z_M�6H)�{����[`�iҤI̓����\a�$��`��	�[�{\a�&��(I���z�w�Z]b�a h�	�6���]b���n�	{�T[�^c�(���M͓*{���_d&@R'`���j��*
�L)��?ϴ@|�*�d�#ɐtH�� 9�X�gI�?���D�A��_�kI�!@`&�!0DQ��} >L���� �5����͚�4�j�xUUU�{Ib��вˣ(�i=��x��䯰�̓j�������Rni�,�j�.->���k�Lq�M�̛_��}���ۥC��M���z����|[�� Jh����Ј��|��w)Ȗ���VWsˊ�%���2����� ������pq�x˛I�o�����1a��}��{�<�k��<��ij��z�, ���1������  j����gX"�DIG�AE�X�e������$�I��W�mI�dq�)�  ��M��]&L�$/��0W��i[/�vk�2�)�q���ia�����'-������d`ed*j�8��j��g�_d*�l�Ȣ�?������bg�0ZӶ˓	{��k�pen�����r����l`����=rM�){o[S�hu�&� �l��I�Y���vom�xvǞ��gb����yp��
1j��Y�����yެo���jFb˖�!~��4R�m){Fb=�-�s1����,�� B:�z�M�&i��k�@�TP�t���p"��b؁�]�q~�0�K�`�fQT�a ��}�?O�a���*\h)YN�A�������g`�c�.����j�e�|Oag[�Q@�	{�nJf^K���M쓨j����ch�v�i��){�pz|j`��#�����z�r|l^v*����j�gb��7�nf��OU��j�/��qf s��ɫ��j����tlC���v���r���Bl|�&LHE�j��r**�}mn��F���r˯�8�zO�����M�FZm/���o�"a�pK){!��P@�iI�'��e�"��}�aO�\�`�!B��y�C�س'�բ _U�5UCH������&Z����DIФ�)M�Fb����DIkYn��mj�gj�_}EJ
�	Ҥ	{gj�A{JC���D�Z�rFb����CL3r�m�zZ��/+DI�vbíj��z���EJ���MJ��z��v�JCh��u��J�	{����OG"��q�����z(��HM!9��(����}�/zJP#+qR��	{3O.��@9��?� l��
W�M��I��	{ m��X�vI�<r8&�a(�a�]�l��gϐ�*�@ ׷MR�]�?~�$S��(V�5�^dR(M�AqŪ�aPW�^c��Q'@�����?�e^��j~�� �]���^c�@N�8n�i�(*�@]b�Hm��-��*
�c\�V�hg�������=e\m���c�N�j���*�d\c=�(c�-����P{�e[��b$I%˛�r20�hf[$FN)�T ��|p}�i`6��DŴ,�)�����jb���mp���Vܺqg�xS~{m���5�_�m�ɐdM� �X`��qI������ �(a'�|옣>Ṕ�w��~�X�D˥�ՄIᲨ�}�!n�ư�(�~p��|%C�d[���)����|�l��0R̛I�-/%�~�M��c�,�̓���@�"������)-�}n$@����z~���Aw웫���_U�~�3��� ���P��;�����2�a˛J�|������l��I���lZ����P��������K����.����r��믕���a�����	{����������FbsO.:ǎ�	��I0�a��[L�f'81�3?�݁QԵ=k]t\;H��q�&j����d\��e3�-�����ޜd]�j��m�j����hf_�;��E�웫�_���h_m�-m�-���W��jc~i�*ǐ˓�rz�0�jc�@jm7�˛�rƿ��bp�4m�(0�I�bX_XetH#��Vn��){�sg^kw$�P��mI�Zp@B�xl$�Z6N��Fb�n~^v�(%�l9J�j�Q)���y&�T�J��r%em}�||���ߦ�r&Z �~~�I��I���gb�]�ƕۀm�M����VkJ�f(�:�  ���?q\�:B3����r)B��i[���7a��	{5(6&Zi���n˓I���|�e\m�f~�̓I���f]�J�|����r
���d\�����j��r���p\��|vᖋ�Fb�`�n]u��@	���j�ݾ�nd�Hvu�z˓�Q*��jpgے����&b	��vl�뛊�ʋ�)� 
/nx�)�h��j�j��qvmG��A-�����>���r	�W����J���o�w��6%��	{{�>��|tH)���A�Z�:�W �B&�z!jP��@p����$��(5�DI��M� �j���fBK�6l3�I��Q��ڊEJ$� 	{gj�T��DI����$L�zFbbzZ�EJ�@bҶq�rFb
ˢxCHd�dmѴ�zFb?-�KDϛ�I�j��z����LE�h��Z�J��r����EJ�&a�(�k��z�:�LD���R���r���MFfX�6n˓�z�t}_MF�Ƒ!ز̓�r /QH.�n��I�oJ���Gϑ����m�d9pʊ*�L H��˛ ��{N�`��S?�aQ���vY��������I�骪\a!�Q�4L��j����]b�$l�
��j����Pc[3;���t�j����`e� N#�웊�@���^ch� h����խ��^c�$h�Ē�I�����d\�m�
U �����Vh_O��m��-�j����hZ����웊�w��l_��nB�j��v��d\2��1���zl��j_n����BN��r�k�k`��s�j��r�ǂ
sf%�vWL�	��+�y�n����R�D9^n:��Q:5J�<H�as���_B�������CA%ͣ�NEtm�)i���z���#MF��i�>i��z���LD�Ƃ���zX멨FL-92иii��rj���OGwwC��z���zh�[PI��DNi��z?���UN�M��[�I��r姃sXQ���j���r,��ZSq�	Pn	��r�O"�Y^Іi�m��r�7��\a�"9q�z�r����^cۄq)q���rGw_�d]v�R�h肧r!��ha���.���H��_/�{��Y��d�����YG[Ū��r�` r�AmW����������o͡(������6-���TUUU���J�M�ʛ%j���>��}M*C҉��r�
����:��ʛ(��Y���(�l`Fʛ��]����kԲ�����(����/�~�����剛�r��^z�|Na'eM�ʛ肟�4��{�t>���I��?��y���C}g�I�K*���~�S�������}�y�g+�O�(� �@���iFM�i���^z}�TJ�X	6�H�����1�W����� x�2�̟
5q"��i� �i���YB&���O�a�%��dYo��u�/�(�\�U�]b�6�$��ʛ(�*��^c� �& ����^c�
�P
,��z>:�W]b�&	��N���z7��\ad�m��,�(�Wӯ�d[o[�@��(����x_e���˛�z����`f¤A��˛i���r�`e� �Ɔ��I��Z��h^vS�dM�H��z!��f\�Fxdʖ�&b��`�d]�<��n��j��`pB���*�δ�z[}}�mC���� ^x���~�5	�$)� �m���eУ��'��@ �/��rdv�Qg���rpWU_le6+�@��-���>uf���PS���r�E�,rf�/���I��rcz�ph�P ���I�Ej�«�luڈ-9��������vj�߸��m�Fj��̖ypw�r�X��z�zc{R�yr���x��肆r>-/?{pmgm[`J��z7��|s��PL	��z���y~ฉ�ʍ��fj�
�|��
�����)�+�����e������	{`�{;�|��_��?+�&ZC+o���bKM���� ��\��MÂ�K����a u�`U�լ];��zPV��ZS�HR��7���z��_W\���j��zګ�aX]"��Q)��z�^��Y^�4LۆAj��z��1Y^���%a�F�I�	{����[`�4A�J��z����[`�m�8vj�	{b��a\a&i7j  �������������������������������������������x[��\a5mҨ5���z�/^c�H��a��	{��j:[`e��%ӱ���r  �J^c��	Fa���rp�e�eZe��첶J�fbz����N9��?웁 p��ȜC�I�PIm�A=�T��}���s��t�1U�?��Q�6p˔��*�����}�#ƍ�v�(�_\���|d�]$i���)�~��Ä} .NmH��j�%--�~��vt��-������N�}�:�V�-�̓~~o퍁k\�Z�����W�\��9qw1��웫���WU~��1T�m�j�������;����˛I��σ╃��wav��(�ꨲ���d�s�Ɗ�)�+?�ҏ���CŐ��z���k���VL�g�)�{~�=Č1����Ｂ x��
�v�#A�0IS�a}5V[�b#>|�'/�a�5-�e\3��w۶PŊ�����e\喂m
����~}7f^e�q�0n�j�����_eܸuX�q웫�����j^v��Qr�j����ib�nr�m���r�*ejl3�%��r�/�"qb�}�1�I�XVW�tf�S�ۺ���z �s�wl��j7I�Z+o����	{Zl�ھ�xlH�#���zgb�����}�i�0�)��j��{z�{fi���p�r&Z����ǀ)�ɗ�J��(H8�
Ʒ1���e�μA5�Z��g>��'��  �=/q[cC�`�>���rJ���[h��m#�4˓)��--b[47���˓J�����f[mٌ/�
���r��
jg]$ٷ/����	{���\hCl�6jJ�Fb  �zp\M��/ޒ��gjhX�6n^nj'��J��j��+3od׎�r˓�YJj��vg�}�q����z�,�wl�i�ً�*{�
xm��b����j��j�pu	;69�-�J��ݷ�s)�����J�l��[�w������n�J�����{�
	��q� ��{��G&���?	{A^��9]@H~۷����Z����DI�0J�AN��rHhrxKBn��ʲ)��Q�"4�DI��e�8H�zgj���uCH�6����zFj�^֗EJ4h�6��rFb�r��CH$�N!�6j�gj��=�LE�c�*ѶJ��z??��FK��,�MJ��r&*��LCm�6-�j��z���[LE�*���N���r�~�NF<�a�­˓�z�]WIN�4i��a�	�����QI��	����I���{�F9��?��)\�b��f��	����A�%^S�Y�?��'/�A��=/e\`�t�߱��Q����]b�& A�j���Z"]b��`)u�j���M�d[n��R�J�����e^��9\7�j���*^c�M$q��j�����^c� Q�X�)�/��]h$I�F2����]h�Md웊�����kZ���~�웊���"k_��ߤ=�̓J�{� d\��pP+���{�hp_i��k�n��r����ja#��`j��zw��yh��7M�)��
?^�v��a��2�  �z��}p�?r���dA����$W��mGM��z ���~X�nو�j�"�f��|eؖ#���)����~���m�$,̛i�?��������������j�ʆk�v)%M�̓�X�_}�$ʱ$3�쓋��Jp����]w�+����
ɋ������)�������y��v���i��蓄~`�t��i�{��x��ʹM4��)�_'n���@u���	��������i��܊�*�������6�@uq������9?ɕ�O��4�@lxxz�[�&p���1%��^c��6a��}^\Vc\�Y�6M�����N{^c#9��2�-����v�6bg$  $I˛j�*���j]-��l�r�j���/7ka��f���I����me`�v7�I��	{���gnc��N��L��	{��o:rj�3Xed��){_X__vhi��P
j��j����zqvfS=@I�&Z^tW}�z��y���z&Z��?�y1i�n�){gjRxx�{���!(��r&ZR�n��r�q���I��Ê��	�`
�@|xpr�dh�>r�'��1%���i[�^�:m�J�_PP^f_��V�R˓�z�&�j[��>[��˛I�����dZ��g�k�H��*��e\-�mӆj�	{�)�g^m^�E��˓�rg'��h]�׶��aj�fj�.�kb-�Pm�rI�Fb���mb)EX��aj�gjp�<hq[:m¦m��gj���uj{�.t̓)��%?]tj
E�@j̓�rJ
��zou��qa��r���yr���d�I����|�y�pO��̓*{�J�p�{��ɑPŨj�Qs{�E�?��>＂��5=DI-�&��J�x��~BG\�2��2��z����IB��q�q�Fb Ԃ�IBcɑd���gjV~p�DJ�(��Bm�r&b����KC��!�文r%b��.7FK�"R�Hj�fr-���JCd��M�j�fj���~KDfZۿo�J��rw���JC%ֆdǑJ��rˬ��LC�bd��̛�r����NGug�1�n���r�J�/JO��$M̓{��&OF�o��i���z~�*TJ@Zv�tn�%Z*z���L9�C9�@�at|||�\��x�����0=��]b����δ(��P�\a�r��q����SW�]b�4I� L���*u�[`eДM�v,�I��Y�^d i�m�j�_K�d]?�>7�����޽��g^Ѷ���I�����\hIK��Hb-��z�w^/]h�v�v�i�߸�g[�wW��j�"�
nam׷,�.����_�'\i�D�՘t�J��bB�h\6ن4�)�?u�coښ��8��
� ��ppg)�����z�����p�Gy�G��)�K�7�E��?��?/�)-%%%DI`�1c�pδ����kMF��$�Ǌ�	�;i��KC&;f�A��z*���FK+�d��I�)�]��QH~��5R�)��z���JO�m۶���肩���LQж�Z�mI��r�8(�OTi���(��r��h(VO�Hm�$	I��rC'��UZ�&,;�	��rK���Y_9�Z;2i�fj����]b��i�����z�Uե^cЦ�ظ�I�fj����c\�FR�����r�UUUh_�%�&���z�j�/'�ka)��&o7��r�b��·�N�DC4��  �&&&��#�u�H��(���nW�����#@����׎�.Y�o�ت��z��ь�㘎�H�ˣ(��u�ߍ�#;4޺���H�."������m=��i��zߚ��LX��(,��(��j��B:�����7���_�)�i��z;�݅y|I�e
sʣ�z*�\��y�B�C��ʣI�����z&c�0��I����x�!Ү��@��i�>ȈK\�@�ʛi������{�P	!]����kh(.���@��c��I�˫��ˎN�B!�Y \\\Th\����o�2�I�qs[[d\,aL1��ʛ(�%)i�d]%�Ѥ̭ʛI����^c� 	 �ʛ(�.��c[�lɶ��z+���\a#�1d��,�I�j��s]b�0	Ө-˛{ ���b[�А�&oʛ�z`�V^_d Qڦ)˛�r����]bk��ز���z 
��g`h�d��T���z`�	d]o�l�FQi��rr��hi^��u���z/�u^j�A��zfj��@`j��Ȁ��zͯוzffJ�lj��r�N���p�C<�C8�A��&&rh��:��>.�Fj����fk�4M�&�j��r��cgsclX��p���r/;
rgR��Mb���z���rgE^�g;���	�oo>jw�(5#�i��frb��wl-�c��(��r��_`rw�4m�I�FjЉ��ouh�m�$5)��z���uunב٨*��zU�	)zp{F��ǂ�p׎{t�$�ywWi��z�=���z�~�����z����z.E�mYN���:^t��.�ӏ�;��r����|_�-S�,��r7���Z�>(�B(��A��ԔW\j�V�R��&b����TY�@A�(M��gj�l SX�(q)N���r���zU[�.;����z|��W\R�q3����z���XY^��i�&Q���rm� Z_Ӹm�(n���r����Y^m�$ٲJ�	{���]b� 	����r���r]b��a�0@j��z"��)^c�&l�H���j�ھ�^c�0�����	{�<�]b�Fmڶ쓨j�^�*^c��� n�j��y��]b��#%F�	{����Qe$�l�Fn�&Z/.�oȜ�tL���ra����}H,ۈ��އj����~��2	�$qN��z����~������)�k���}Wv�D�+�)������}m]ҦB�j�%%�-�~ɐ(NoM�̓�߇�>�r���˓���~�~ю��R�j����������q�훊�.�ߊ�Uۗ!���)�������������j�����	�����˛i�^c�<����i��r�)����x��ˑS-��)�������5��>���J�������m���U��5��ȝ�鑒!�  ����x[h��K�����Q����b[���,�.M���踼�c[6�a�e-���䀘�e^f�{�fS�j��{pIag�$e�8�웫���UUj]%��-�m�i�Iam%Ê��i���:���fk�$��ش��	{5���cnh�6ق6˛){���rh����>p��	{^t~�vku�r&0)�Fb�
�O{qaN$�jZ$�-��y�b�ٱI�gb��%%y�#)2[f	{Fb�����{?�L��r&ZTy�����Բ�����I''�è����  ���܅bx�������(����h[#[�uZ�M�J�W�TWi`Ka�*���z�)��Zf�@���vj�I���
dZN���H�j�	s��@�e]��e�j��z�CJkg^͍��۹���j�Ji^	gw%G�i�fj�mK�ak�[3rI�Fb1?.ne��l-K�J�gj$��qi���{���gj��:�ul�پ���̓)����tj�@J�m̓�r�B��pz�MC�P�	s���>{r���TJ̓I�
�,�{�A�����j�`8�z����ϴ�lhhxuC��>h?Q�1%IBuK*c۶���z��j�DI�@q�J1��z|~CHHB��X��Fb�� (CHc�uĘ�	�fjU_\~DJ7�c��r&b>���LC]K�&��z&b�7�-FKZ�i�L���z�y�DI���Dai��r���_KDMm��K�J��r�/�~JC����QJ��rr+;zLC�F�e۰˛�r����HNZ	r
�����r��LE�,�&H̓	{���QG"reIR�	{띻TJD�朮���Q
+?�R����Z �В�{\p�����3�Z����\a���i��(�����]b�4a� m,�)����]b�6@m��z�ʽ%[`,��	��,�j���hB^c��Mܖ)��j��S�e\��i�ސn���wo��g] @��C�˓I�����h\�|.��-��z���e[�((���i���j[lgu7�-���k��n_�r��ʁO������Kh]��/y�I�vXP�o\n�eɒ�	���*oc����q�	�  �\ti��r���z���~�p�O�m�#1`BJB�H��z�$��Gb���ń}d��3ӎ�I��������4rʛ�/�C%�~���Dw:��ꎗ*�|���@˛I�-����G˰m웋�� �~�,7�Ӕa���x��Y���Y
��˓����� ~�iX��0˛�����ʉ�C���K:m�j���������۬�f��J�,��PO���	��������t��)�������������	�������S*��u��	����*��mGqV웊�㉃ɖ��ɐN�  ````�Z�'p'��1����[`mA6aI2n�˓|��]b#�M��M-������Z]b�2�6����/)",i^���Z��j�����^h`2#�D�j���İdi�6�c	����r� `(eqI2�8
˛�z����ug�י!fc˓�z��~zmw�-�r��	{|X��yol�����j�gb���b{t�n)yj�j&Z�5�.�{���'��I�gb�5�/�{tpϯS�){Gb�|x~�y����ۨrFZ���˕~.gSy�k�rZ��%Ō�p
�
��  rrrr�]x��x�'/�#1���m]��qc�6M�)�z[^Pe\���F)���r��j_,�v.a˓I����?m[;��{L;��J�j�rxfZ��`�Պ��z���Jd[m�֥�j�Eb.���i\��˓�rmc~^kb� l��VJ�%b777nb�Gl�x�gj��fq۶m"�˓�z���"th���fѱM��z����vj<˶ ú���r���oy��	��	{u�>�r�Qs�̓)�b����z5�O�s��	{����|O�y�M�gjJ``B�E�>�>�� ====DI�0J��-�J�xzc[KC�a��ݣ���zj�{RHA�D�3�	�Fb�&>�DI-�qk��zFj`~l^DIۦM  i�zFjb�]�IA����Q�&bݟ�/FK��	�4�J��r�v��EK�M�p�gj�'��MF��<I�'I��z����EJFN�4q)��r���hFL����(J뛇j��|�HN� m�0���r���PHe;�dw���z���PH�Ȏm����	{�	
�SLkvggJ��j`���G�����  xxxx�\���x�'S�a����^cܴ	�	δ����X�]b� ��	�)��r*�]b�$mҴI,�j��9��^c�4� mM���}���c\<L��}ǎ���v���[iڦe Im�����zWe^�`N�j�����n� dYX��֞-����e;~iZ�`�.��(��� i_p
�,Y�-�I���:ia��-�n���׿�pe&n�&��-���v~�hs_�n9g�˓�z�ka�ys�-�j����pf7�Gu@���z�*�p�ryt�/�)����B��?��?5�1����LE�M��S'ʛ�rⲻ�EJ�$iP��ʛ���?VMC-�-Pz��z��W�KD!�qIR���z�|��TIo��wq���r88��HSE2��&f���zʿ��MR�(�`�2J�fj�VO��qm:V)��jH���ZS7�tiwV)��j��۾X]�(��u�z�r���[`�����r>���]b��a�(�I��z�y7_d�&۠Qj��r����\aIؖѐ�zfj���h]#�Nm�	�fj��r�k]-�6 ]bI�Fj5Մ���˰ͼ &&&4��X|�����(��������A�ul9H�ej�����5^�u^ۉ��z��,����q슛�z�#�������l�R�����	��̲lCH�ʛi�.�W���)Eb4M���zjH�z��d�2����ǂ�ې�f��슧���r��Y*�}S1-L����먨�z[���񸪛(�����|�Ц�Ӎ���
*:��|���(;�ʛ(���r�zE�:�ﻪ�(��}��~�Y�O�Ǫ��+(�W�ʭ]�;/�(��5�ˆR!R!�Q �\\�fU�M�n��z[TVV^c�H�hʛ肾a._d%i� T���z(�pe[ˑ�R�ʛ肢-��^c�6� ���(���\a$�q˛(��U�+dY��t=A���r� ��e^vh�wi�ʛ�WxjV`e(��`˛�z��.c\�mh�O�i�5���d],G2�FH���z蔋�i]���ز���z�Z^^d]��R�(�fr��k^k`kG���i�fj���`lJ���N(�fj��uc�f
�TJ��z�շ��fC?4C34)�  &777md�*� 1�%b����nd�c���)�ej�**td�g���I��r���"sb��>������#�gs�&h�b˓	���sf$�z��r��)�k�pxjnY�#�����z}���xomݴm;ǂ�r[��"zn�з�M�(��r��!�pueA�c7����z�ޯ�yp-ڒ)����	�j�~ty##�ئ����r���~w%�/Tf˛)��\�i{�X#�Ҧf���z~���~��u"����)�ZPRw�z$̍$M,j��r����\�B(B�Pբ ����\R�fmƖm��z�\T�\R4�+�i�	{�_W|TY4Q�$�˛�z˵��W\�$A)�j�����X]Ҋ��q���i�X^�����m�J�փrWZ_�6��&m���zz��:\a�	 	-�	{UW�Z\a�&iۦ����z�/]b�h�	��){g_{^c�$l��	{��W�^c�q�M˛J�U��}^d�2Q�I�	{���b[���6.�	{����`Y$G.�:���	����eQ�L�B"-�gb��ˋ�vh�h˛!�����~&=�3�Ա�&b����}+;rm�m˛�Ϡ�z�~.��#�-ʛ�*Љ�|����º����5���W��j��}<����a!�-���+�����Ƒ�:�웫���鼌�v٢'C�˓���;�~��l	b�j�jo�����}���,���UWwM���q���P�j������)f]�l�)�������*:>����l�� �� �nt뎊�I�m�������L�����-�*
���0S��웫�#��ɗ������ ^^^^m[ ��ȍ���dA����[`ȴ,[&-�������]b$2m��M-������^cA��8-�����HK^h���&��j�o�&&ha�h��)��j�{��lme�������r0؊re.Q�qM����z����huPٱ�t˓	��$��yo&hbePj�	{\��wo���Rj�GbmrsX|t��%A�j&Z-ͯ|�" ��I{gj-�+��{��un?�r&Z�����z1�����j&Z��`���`
)��){Z/)��ũ����m�  ����o^�$�H׸/ńA����]j�����a-�)�^�WTe\� ���E˓�z����i`@�%԰˓j����m[&�r�i犋J�z⸘Zd�6i��-J�fj���pc[���C���%b˱�<ja2�kk�뛆r[X_Wlb�qfW�%b-���od0��^����gj�( qfmۖ�n˓�zm��vh^���@�M��z����qjޤmR6n���r���|q���oq��)���O'�r��oi�̓*���y��z&a)�-�*{���|�����݂zzzzEz�'z�'�D9���KD^Ǿ��ϴJ�^�XVKD1\��٫��z�~^TIB�6Rlƺ	�fj�ɏ�EJ�4	+!�zFj�_[WBGlٖA��zFjXw��EK�1�:�	�&b�'7FK�$i�4qI��r�۫�EK��i�I��r�m?�MF���I��)��r�s�?LE�Q����˛�r�]_FLB���4a)��j�X*OHn{�+���r���,QJ�����Wj��r�B�PHUR-�P��	����{TL/��.�l-��r���Gz���b  ����g\�۴K��S��Q����]b��	��i,���
g��]b&@ 4I,�)�(\��]b�$i��I���`�6�^c�&a�4M������c\�m?���m������iZmk�~l�m�������e^��O'���v[��Yc%�h9P-�I�'{
:i^�/�-���vy��h^G��M�I���&ia���cN�����F�p_C;u�R�����ZcPsbCY2)�M��z�&��alԨ��4-�j��zx�xf7�P�S���z�
���q����O�#1jjKO�}H��x�$��dA���͉I�m�m�����'���ݺF������vX�|R�I+�ʣ)������~�Il4v-�j�B+犀6a3-aÎ�̓U����~M���^`n������b�~ø�������u��~��ցM������Z��-��F�����/�/��/A7dN����o������Ř�b,�)����������|��
 ����_�QQ˛j�V��~�~$#��H`˓j���b򖄝�YI��I������R#5P4-�  ````�[p��p?p͢(����^c�6� I�˓Μd\%�Q��I����be]mYW�P�J�&��i`Vݶ%CP���ܜ�le/z�~���i���c�ia>0�;�˓(����-pat-j�
˛{~��Zvi-ឩJ�j�&b��.+zq)a�����)��ݷ?{p�ˆݱ��gjhp�Rw�X�qI��rFb���
�x�@0���j���Ƀx`�:[���rFbPxZ؈x���,Y�rFbk|���"��Z*�	{Fb�ŋŏ�
�`
m�arrsr�\x����獴� j\lN8��6m�)�RXXXg]��%y���gj��$�d\,�F��	{ g\���vv��){��x�dZMI�{;�I�b��`xhZ�k�.��I�%j>�%�i_/�l,�q˛fj__^�l`$I~Lѕj�&b_��?md
��v˓J�y�tUsg^_���f-�j�����tiM۷4����zp��tkw�nq�Q���z��
yl.�b)Vn���j��+�~u)�%f\��� ��r�z��	楲˓*�X���{��O�ﴨjbcCj�E�&`&��� =EJ� I�DI�I��W|nCI�-K����rxzV�DI�	%�.�zFj�P�\EJ����r�z&b�_�LD��$M��rFj�U\BK��ېrI�&j%/��MC��m������������V~���KC`ߨk�)�b7��*EJ�M�&r)��rkk��KD,keC�)��r_?��HM�"IX�i��fb)�*�HM	�Z�4���j	��PHj�V`�˓)��~�OH���ɶ��	{���HT#;0Ө����r�ʪ�G�@4@4��  pppx�\z��x�$S�#1����^c�$M��I��j����V]b�$l�F�,���z_�_^c#�mۦM죪�+��^c��	ҰiM�i�����[a��IdI��I��P��[d�(!�6f-�j��%Y�j[����Q�I��{ʮe[�S+��I����Th^�o.Y�-�i��ck�]j�lպaM�i��.��l_��a%ی����@��kapA&��-�J�諸knb�o�J��)���(�ma!i�7��������ujy�b�a̓i�����rw�F�u_��Gb???�B��?��?��#1����EJ��m�(lj��r��+�EJԶi�(��I����FK�6I��	˓� p��GL��������z,UW�JO�i���i��r�X�IT�4�,[0���u�[�VL.'N5���rrH��RW[&h�*����j��o~[T7s��J�z�Q��^�Y^Фi�i�fj/��m\a�q�&n��fj�kk�]b�i[96i�Fjދ�ef_���۶I��r 췝f^��=;�z&j����dZ<�rb�q�zfj�rݲo_,��I�<�r&bo.N�Fc4Go4q�� �������˅d	��H����싂m���?Aꛦr������-ꫦrR��W���8*[2˛����ꐅ��@�F�ʛ'�)(';��)��)YR�(��[E���)��1����ߗ����������Ej�:0$���Q��M���o���{@SΤZ�+�炡��ߍ|��Jv����z�ᣨ��x��d��ʛ肵.��~�LD�Df�������z�R)l�&���z���ۑ{6�-��i�肨�����c;���L�)�/?WˆR�^�fjAVVVTeU��	��m,�Fj�\�ZaZ��M��l���r]bd�p�R˛�����c[%��mm��(��W�ocZ���ES�ʣ�r����aXcKrk�F���r�*��\e�6nD1����8��Wb[�²m˛�z��
/`e4n� i���+"�jb���/���z  b`l�4M(7F���z���af�4�&�H��z�\��f_d9vd�U炧z7�p�kbI`�mQI��ze�U�n_��j��죇r��N�wcƍ��δ�jM�h3030� ��sh���b7���b����ib:%1"�M���z��ǪrcTSآ�K��肻k��fr��4˛)�����tf�]��Q˓)�����fuQm%ɦ���j�.
�ug�вO��̓)���̏ylZ��z�J��h��ns`��j�5)�fr����sx(L�&���	�����|sm�5vі��)�4cϟ|teQF#U˛�z���y~#'m]�$˓��Z}m�{!�q��q���z���}�Z�	�FA˓�z�5�x�-��E�I��jiKj�fR)R��a����Q] ��b��m��r����V[�j�8�J��j���
V[K��vj�{*�
+V[c�$���������Y^�$	�4J��)����
Y^�$Mж����r�{�*[`� n�J���	{>��[`��7n�)��<�\a6���M��	{�'��]b ���)�>�+�]b�&������)����^c��	:I�)���˟^c A�H�)�~���]b& 4Hj�	����$\b6�Xu��){�J"cT�!�.���rZ:�˂�vh�hN�A���ޅ}ʹ x�l���r���Q�~��٠M�m���m�ɧ������O��j���{~�}+�m%J˛)� �?��~-˂��nn�j���/��~&X>V�M�̓U��/�}/Wq�-N�j����؍`76�ú���]�z��k�����j�*�<����qM�������ˁ��*!ҢM-�)�r�
���p��Y뛊������҂����	���臕�y��2:�˛j������}dh����I�*b�����@S1�w웋�b��:ɐ������^^^^r[����-�P�DA����^cæ0H����"�\d$ɍ`��I����Xe]��!0 �J�	*��i`�gwe����7'�lcC��e���I��kXrlaٴu���I��}��ap�ʲ`�&˛�j~j�~vl&���	�j�Fb !
zr&꟏�T�)��7�πoy�T�@n��gjX��T�x�R��m�rFZ��#�{�@.&璪��ro{z�x�M�+!s�rFb�6�x�_%��rFbZ_b�d)��	{&Z�s���h�Fj�m��\\\\h\s�����I�]k��a��M�)�����g]��$��j�gj#�	d\�%f*��,�ݕ{uYh\�o��ܣ��){�|��cY�ܲ'I쪋%j�z^_g\�i�b��	"i`m�m-�q�&b����l`$��!H���&b�?/te�{�	q���J�>���th�K�>�-�J�*�k�ph�F�����z���rtm)z2)Î���jk�yqwyP�`N̓J�����u�T�˓�*����z�Png�M�*�����{����t�� zzzz�Ez�'x�'ϴ$9�CH�@N)ɍ��UzRDIbu";�)��rx��DI�4I��5�zFj���LEq�qۚ�*�=���KBmK4��r�aj+�IBX�d��I�Fr����MC#��e�J��r_�,�CI�:m$ӍI�b����FK��4I�
�<����KD%�`dZRI�fb~
*�HMP	�4����jJb��PHn�6�0���r��7-KP )��$I˓	�k���OHR��#ٰ
�����SH��A.ݲ �MW?�G����j�  ����f]���L��3�CA����^c��	�$A�j�*"*=]b�&n��웪�����_d H� @M����'7�]b�6�TN 0�m�,��b[���.q�)�.���jZw��Y�M���VM��jZuں�=��I�8��e[sL�`ɒ-��.���^k�&5ۺm-�I���:;g\/�n/�l-�i���qk`51�����"P"cakZ6d�$�p0�p ma���_p�)���
�eq���҉�
�]�k~~vl1q��`̛j�/���sO�����d9OOOO�{H�����3�I������@,%,-�J��?�"��������TT��~��b�&M̛��u��|�dI��!� �=����{�GK9tM���
���z̷<�uM���*�{��x7�UY�P �v]�5���ڭ�웊��*�����M�4������)�����q�b�f�m����{����ҁ!I6M�j��W"����ƫ��,�I������n-�l˓j���Ꙋv[��]��j��o灖��۔��-�j��+"�Ő�����`h``�^p'p'��(����^c�(l��M�H�����]c#7J��	�I��~��[fj[2��1-�I�����i^m;?5c뛊�|��k_�e�xc�L��r��bn_��VD-���Fj�ue.����fj����kw�H2d�A���r���sx�&��6`���z�寢v�{�)˓�j\���z�߿��	{�j��)#|��VpR!�̓�z͋�˄yŲ-��i)�Fb�ԗ��|�U�`{&Z�xrx��1�%uB){&Z�˫�ɕ���� rrrr�\x��x����� ���dZ���@�˓�z���.d[ز+����r���g^u���x�I��U.�f\ ��LP�˓�rX��^f\3��#8bI�gj��x^j]g�vk���j�*ak9��FN)�Z����ibb�N��i��gj5��foXэنm��r���
og-A�eX�)���˼zek{��Ί��r(�p4sj!0�0-��r����oyYm	����b����n~\Ɇ K���)���~a�s%{-Qr̓*�}]���y���jc����E`�%X>��� 5KD���w�ێ��r���HDI�6n��I{�j��U�DI[	��m�rFj`.z^KDhi�'��P�}Ux-�KDcI���m�z&b�>�FK��qGLi��r�_��LE���]�I�Fj����LE�cߪ[=�z�j0Z�*EKжH�&n(��r�~n�GL�I @)��r��͟MFu����j��z��aIN�q� Mj��z���OH�y�%T�0�1�s��QI�|߿Oj��j_ꀨQJ	xotg�J��r���k�C������  xxpP�Xx������#9 �Ҵi�6��I�����_d�`��M�����N]b�8�#�e,�	�
��d]�k�vВ���>����e[sʚ���i��?c[벁�@In�i�����l[w᧱]�˛)�::��[e��Hh���fr^oۤM��L�)��]�\g6m2-�������g_��nx�H,�j�r��~pf�Z���̓J�����pds�!jB�)�KW��qen�v�	��J�#���myX��3��������s��F�q_��)�=55�A��?��?�dA5555EJˠm��Im��_XZ�JC�F�l�"�)�ai��OElL�vl�j�)��"��HN	�3j��T�V�PI�{��ci��/�w�QI5�HH�������SJ��P��M˓)�RtuUVN"PA�M�/�]Nh�.\U9��1iq�r�Y{K˪Y^��*.�z�Q����\a�8mܸmi�fj)�^c�I�6MI��Y&�f_o�n�(��r�ޚ�g`n��-�b�z�r^�^�g^�q|p ����������k^�˴lQh	��Qlh�jӅFs4Gs4r��I���􅒛�a�Vn+��z������ӷ�KA�ɛ(�P�����;U�%���U�??����+��,��^�����['mI���H�U*w���_���͉��"p���Gaq!�I��z�,

��(�mi7ʛ�����|������zt4*��,�v)g˛(��x�@���}�l�������끉�Ԙ���(���k��mP�=Tb��(�?�r�|ې�9���ǂ����gJ�#R˛(����.�0�_�o�Fj�?7?ˉR!R�� WVVVdW���V/ŧrw���aZm�rW�i�(��"��]b�
������z����d[���c�����r��^�d[mۻEXti��j ��gaX��jm�&b޸��d\��vli��r��e\��]�����z+/&�\gú�Kɑ�j�zjybh$j�&���(��x�l_��Y������nn`�?��˺H��zȬt}]k$KrKG"(��z�*~qka�YHHp˛�r���2]lXa單M�I�����v_��]Uw���r���f�k�",�",�j tf�h6v�ڱ�gj����aoȕ[Ie�������lb�7�IB���z
���qd䶓�Q�M�J�W��Eetk
�$1-�)�7�hovj�fE�K0��j*�j*unUS�h����z�׀�vk�r�I��)���pu�&�+�j��zߪ��vo�D��q��)�'5��zs5h�/�2˓J�]��=}t�r��V���`��x�xmG��� I��zȫPp�{\��`�w�gr�;��|���1l��i��r���~�D�Q�)��jB8��u�j�j�Fm� ����]N�t`�h��z��\[X]�4 � l��	�����V[W�؍I�{���X]ؖm�&���	��Z�Y^�0M�H���	�����Z`�(�Z).̓j�[ᳪ\a4H�$m˓	{����]b҄	 0I̓�z���]b�&I  ����r�#J�]b 	��i��z��]bШq�$I���r�nzq^cۦQ����r+�__]b$�i�M��r�_߷c[�_�<����z����\a+�7���	{���_fU���۲-M��j��w�h�H-�A���ލ|	��pۻq�k�aii�����I��E-���6���y�+̛��o�(�~���-W˛j�yz�*�|Ը� �` 
��=���z�H�!�N�
�����x�~?k��
��r�~�|�Gl���
����K���G;uy���j*⨏��S����죫��*����B��m�hm�J�������TB�%ɖ��j� ������C�����ꆓi۶l���
����z��n���` � c۹`�������˓Z�řx���-�� XZXXv]������d���I�$A�H�����d[e�*�:˛i�S_]vg^�����,�j���j[j^�鼞`�웊����ql`���wh��z���Xn_��j�e֪�fj���uj�_t���fj=(�2xj4Yb�|I��r� ty����h����=��x���oY��zgj�A��z����)��r��.�{%�rVĎ�
�2��`�y�I��<��zFb75��}N�R�p��r&Zzܘ���1q{vgvj��j���ȧ�l��!��a\ ��lUGmŶLδ�j��s�Yd%�mm����z&}�d[ՒX˰���r�� .g_7��l��I��U�`f\���9fn���rV���f\f���H�I�gj���^jb���B����j���Bka�F�uI��r�Q�+�oavlW>��˓gj�;mfF�n�ؚ��r��se5Q�~�-���[WRuzj���M��r�>^�wno�.���r ���yo"gr%Cl�	� �}tW;4�荋�)����v��0Z22̛*����s�y����n��`b``�Dz�$H�'��� DI4j���M��r�~~REJ4	�0	�zgj����LE�$r?�r%bpz�KD-�ti��rb_:�EJ�Tٶ�gj��%>FKӪ"��I�&j�^�EK$i�*��z���rLE{�}��
��$
FK�`�i�
���[�FK��i�m)��z�1S�ME�tB7雰
���*�IN�4$j �)��%OG�ش
ڰ
�~\��QI���7�J��j����QJ�������	{�W�B ��  ����cY+m(k�0`�8i�(`@�M� ��_d�&�0J�{���r\a%�v)ːM���!iw�d\lQ�Dr�)�����dZI�`7�����%%	d[mJ��>n,���@`�tm[.�ԾK� �='�u�i[n�O�˛����^o��M����	�����h\Oqw�P�N�������_k�-	�-�J�����od�T"`Sذ
�(����pfi˻FG�	�����rf�rئ	��J���;}zn�P.pM����t�_�t� �1μ�AJJKK�}x�'x�'��Q����z�׆ 1�����eMi�z#��hڤ�J�����I�N�R���_��}fnm�� �=����}�:aT3�������5�y����9��̓@jz�z���r	7t-����WW�|1N-WR웋����Z���m�va�p����~&n�H*���k���=���@��/������L`-�˛=��7�� E�ӕs �������:0��� �������wq� ���_^?�1���`pp`�] �P�#1����d]�Ki=N 
�=w�6�f_ݳ\,Fj˛(�p�� h\}��`˛I���)�h_-jǫ�6룤Q(��l`?��fr�%bܧ��ma����� �m���iug��ܫ]����z��my$*�j;2j��N涬{ru��M�
j��z �B�u�n��	*�gj�����}{jSu��J��r�����znk������	{�`po�}��r)1�	{Fb�Ք{����p{ �|zr~���`�!�	{gb�͋ɖ����  {{{{�X���x����� ����eZ��o^֫�)�w�`Yu�j�&�	��ػ�g[e�ډɁ˓j�`,�8hY.�2����rV���d[��lIՊ�Z��6�]g#�P*6�˓�r��JCaj
�a�P2�z�Q����`l$I�M����gj�骼lbC�H��-�?��pc�����J�R�es��.��˓�z,��}ymni����J�XUVwqvI��k2�@�>b~r>�rЋ��z����r~[�5#����z�
��wO�O���GbckjK�B�>�>���(����KC�ݲ�Ԏ��z�x[xHA�T�dIf���rU^_�IBٵkE��z%b��X�IB��@��r�Y�'.*GL�&`�M)�%j�-��EJ%X%�i��r���?EJܸ�b9I��r��0FL0A����ڐ(:JCcjm�i��z��|GM�"���  ����)OH�.Q� �7����ME%Z�K��I��r�?��NF۔kǚj�){�k��RG�]_�j��r���SJ�ۗN�ej��r�r���? �!�ARRRR�]J��x�'3�(����c\dk;�WMδj�XT�Te]�ƑEN�������B��zaZ���I,뛧z#�!f]vSVB\�Fj����[f$�m�r��)�
и�j]���n˛)����c\�����J����j[/c���-��z�V�
k]ŗti#ګ�(�튫�f\z=7|	��z-���m`�{��o�I��ɽod&��)l̓)���/%et#�ph��̓J�W~x^is%6Z35��r�ڪ�yp.�w���Ȃ��V\�v�uGw`P��Y????�C��?��?/��A5555IBZ��K���)�����JBfW�Z>˓)����JC�@
��I������GLd3���I�肪��OG�Fm�N)��z�*RIśՀ��i�Ȃɻ*�ULo�)�I��z���hUN��i��I��z0��V\Uo�/�n)��Q����`Y�k�����rb׿��\a�H��(�(�fjF?�]bK�dёI�Fb�r�e^�ڭ�*�H��r�Z~X]g%�1"I�H�Fb�x��\fC��8�)��r�ٗ�iah��z�QH�kj΄0s0��d9�������O�g*t��Er*�����.�!�&
��(����o���o0����'��M����ֹ�v������⌁xz7-�S����?�����>���抓���Cb����2��������*��Z ����(�%-)�����bӵ����������g91�˛I���[j��L��F �������}#	y{�i��z����~mI���b���Cʀ||�@��ʛ�%�����O�9�S��������}���`��i��ˈ^!R�gb TTT^eR$�a�Vr.�����V[`�H��E,�(���U�d[.[�m���肾⼭cXR�M5���z��4eZc:�ﺫ�(���ukYf�1�m˛�{{�eY�p�!�a���j����Ze*ɖcJ����zg�.�e^���LG���z����f[���`1�˓(�~���j[$[��ݸ��	���Ɯkb[�Nْ�{����n`m��M	:̓er���rbv\;4aw�){
�[m^z���Ͽ�)�.���et�(��*,���roKO��o�"(�"�j�@���ug�s>oq�2��TTTVqa�K�0K3���r����n`��ٚ���z���"ramY_m�˓�r
"��rf!��P�)�����hsL�\�����T�4uj��wᶫ�)�����zmm��m��J�G���un.�Pd'��}����xq��v����)�)���}uM���̓	�z�~w��[3N������Ձy,֦颊��rj�kK|��"1\36���zUWj�{[K�mô��r���~���	��)��r�k�=Ђ����˛  ����]L�fL�d	�I��ZR�Y^ �4a�->sˎY^i�i���z��uY^�6lt���z���_XmYO!EQ��J�-���Z_�:�%���}���t\aдA��I��	{mY[]b�I�l��	{����]b�$A��i̓�rbB��^c� I��	{�ُ ]b�&i��M��&b⨨�^c A 4�J��rP�*c\5i�A�J��j��Z�[`iZ��Z*��z�a��bZڠ�[CN��M*�$�cV��#�-��r��it@@�jb����|�UAMYl��j����y6��-��＋�w��Z�z�Aq}�̛I� *���~$��)[�
�����}��m���웫����u}�C7�j�r0�+���y?ywq� �pz��y,)���-��������})�rwe�
�.�`���o�.�ذ
�溡�~0@�:d0��j����!Y�Xᕰ
�拨���6qk�f�-�˓O�M���8�m��i�$ߕ�Z�\��  ��?ށ��$��X(��
�m�qWט�H��J��M�� X\\Xy\r��ȣ��C9����e^��KwFn˛)��/h^�������(�ؼ��e[�h��!�m��Q��*jg_D��4׆��Y
ශ_nb�5+5RI�Fb7���aq��-���
����pjnsZug����~��I�uUijmyDI2mI�i�	���|rvY�1�j�gj��ph�xN�r�W*��r��3�{-I��]*���z5?��}v�VEc���j`xxj�z�O.H�	{Fb����}���!�O�r&Z��ܾ����R�Dw){�j��y�ɦb�n�0�a\\\\Xg90n��){YQYYYdՔI��m�)�e%��aX�@l��˓)�%$�h[���q7p�I��K�.Yh+�db�m���r���ldZ�$�z��&Z����]hd*�
2̓�jbb��_j!K��R��Z���ld4[�@��j��z"8�%lch��ˁ�	�ˋcq 	"L�	�)�<~[es\ۥ	���z�-�ynn��ۡ��	{|~��wp�6m���̓�j����~r��5�ڋ�	{�-���s�v���z{���w������� zzzzB����(�KC�����웧r`�ܼHA%^�#�l)��r�֞�IB$���Җ�r%b`��EJ �vj�`�z�Y�ɫ
FK[	��(jI��r����EJ�(h�4hJ�fj���/KD-[��ze)��r���LD��2.:I��r����FK´M�ȍ��j�(��HMP�M�)��r��+�OHIr����)��r��j�DN̲�@H�J��r/�7�MFb���R��	{�ک�RI�ڡl��j��j:���UJ����j��r�\j��?�a�a��aVVVVg]��������Fj����e]uy���nM�j��U��^c G�d�˓�z�hnxd[c�u��f���w���f]nʊ����fj����f[�/�B9�˛I�+���j[~�5�C�˛)�3��mi\m��n�˓j��<�#j\m
?�c@-��z~���j^��lL{��ǂb�  g\wm�q�b�I��`Pam�(m$&0����kdo�:�c��,�1���tim:�����J�U�wln�-��r���o{�� C&j��z ����v����O��Q  �){�A�A���Q�Ņ��zLk����j�`S~��z�H�mJ�˛j�2�����Ö�gw����\�~�-F��� ��8��}n��,:2p�"�~�K�AôfN��_���{q+����=����~�]'�[������6�}��R��v웫�}����~�I���j� /�z����P���	{������g�9S ���Tʆ�#��U0 �������ͳ8m<�@�������w4�����pʺ1p7�C˛a`ppp�^ @p��0��ig^ �ԑ�V����^�kcvT��,��r�KXja9���ڶ,�FbJ���_l�-9�,�(�s~__`l*+5�&bI��r��C�sa���嶪��zKCs�gt-�l����)���/-wl�n�D	��-���>}v�����B˓�j����x�9������r]��Ȅ|(H>Z�����zw_���z���P�)��pp�y���OT	{GbW���~e�/\){Fb~~hp������Jj�FZ����Ǘ� �μarrrr�[x�$x�'��@ ��������]T���}�j��r
 e[N��-��*��KO�eY����:M������x\a���*�,��j���jeZ��*�b��Fb����h\f�.�ѫ��rrRZi]��R	a���Z��?k^'�-��	{W7w�ob�L2JN��	{*jJzqc�{������r�J�Zft�1 K0���z-��zqϑt9����#9�p �{qvk3>k���CA  zq�ƕD��j�){g�NH~v+�W9��)���)��yI�O���Q��BB�?؃=�=δ�(�CH��Q��mm�	�T��xCI�8��B�	��j�!�`BGa[��r�rgjx��KD
z�vN�z%b>�kLD�"aڧ)�fj�9"�FK4��	��rv���KD��N%�j(��r(
,�LEd"ҔV�I��r���ME�`6e���r訨�OHL�k��)��j*��jPHBjH�)��r�k��NF¬-�*i)��r�}�OG��)�0�j��r��?�JPc&F@j��r�~^�TJ9�bq��J��rIM���?����� [[[[�]J�'x�'��(�_d$5��H
m��z���f]99���˓�r�r�aZ��5�ˑ���r=U��gZ�j��˛Fj���ke[䑒�M���r<�*k]��ĝ9
��z.���o]p(��L��J�����l`�ץ3��J�*9��l^w􏆫�炀bk`ha��P�M��r�+��n`9�^9`˓I��땩mf��c5If˓j�*���sj��7�N��I��Z��wm�^W̓	��ªv{�(� F����r���wnpgt�O�&Z???�D��?��<O�C95555LCW��Bͭ,�I���t�DIS�u%���I��{wMC%�m�ꎉ��:���OH?����i����N�QIwYeiiI���2��RJ��N`�I��� (�OT�m˵I��(*��WPiw�&���r쩡�UZ �5Z�5�&bR�b@Z_��#��r%b?>z]bӈ�	h�r&b⢎�_e�(0@�fjk��`e3�㊒(�Fb(���h_c��M�c�zfj&��f\,��&9��zfjo(�qa��
�h��z�I���`ȃ����ĤI�������浑�ɣǂ������6ڢ3C�h��
*����Tʱ�-�i��������P<���r���
�����qY�$.���(�%;�y��C5��i��z������h�_�$��(�.��x��\0R4�˛(�2[o���A�reG���z`x~���_�����ǂ�-��aM� �*�(���`�~�?qζʛ��7���R=$w�v�����������>a��������q�T<ى��z�Jh꓀��@)m��i��ˏR!N�gb@\TV^eV�xb1��fr����aZ-j�H���ؿ7�d]i������(�e��4[`İN�6h��I�2^�bZoS�UW�I���2(�d[,Q�������z `�aY���t3����zr՞cZX?L\�:���z� ��h\.I�$n˓�z�j�\e�6l!�`j��r*/�\hk8�$�˛I����Odi 5���˓)��,0pb�O�b���J�+��ocn_�=H"�{N��ld�@r@,��j����yh�w_o�L��Q���N�w   �$A 5���le!u~.y���zTTTVlaۻ��ъ�	����'nc/���񶫓)�j �Pra����w��	�����ri�p �*!����6
hv�Tm��p��{h�� ui�+'� (�5��xn�ʩ��P��J���^xqO�װ�ګ�I��X�^}o����  �=��k�x^�e.gSj��z���{��q)m)��r
 ���{�}�>wJJ��r�*��}�#�5�A)��r`����{�9�gې�����ډ|����&Zh����}������  X���^O�i�T m�gj���`Xu͒��j��r�")�Y^�D	�4i���r���.Z_�(� &i���z����[`�$h����)���?=\a��M۴I�){wt��]b�IжI���r���^c$H��i���rs�˺]b����M��)�:��^c�A� a̓	{�_^^c  ����gj�޷�^c��A� 	웨rO���\aFI�$	*�fj��\a��mQ90���zե-�aZ�Ѝ$�)��j����aXJ�M��k��rظ�_�^ �!��!���މ{-7�
���'b)񡡁z!gl��������z'N��|P����'��{`wyq��
��(�W�~t� �i` �*�+}��6��Fbp������|�B�g+�-��W��p�~y^�d��웋�*@(`�}���5ְ
�����b�5"���
���~�Ӹu,B��j�������!7nc��
����+9�)vp<��U�$M��E�
�^VTז��>��
����č�*	1X#�`��>�8`HÙt �� ����{]������p͢0����g_����N,�)��WWja5҂.X�,�fj��r_iJ�0r,�Fb����ka�}�.A�,���___la�t`�۸i��z���ta	��V����r����sj`�����	���J�wo�@� ���z��6�~w)�V'g���gj��6�x!�m�����r׺�:�{=��C�j��z�"(�z!v�󒋋�jz�\\�y�w�	{Fb��+*�~N�ئW	{&Z�^r���hFY�j�	{��ȥ�l�&R"δa\\\\fZ�������rQQ��d]J���]�j��r Ze��)#����Z� bY���H9�`��h��d\��y�,�gjbxx�Ze`:���P��){���^g\�6r�3�0�}�\Tj\��
����Q����k^�D�p�	{����ob���@��˓	{����dqں�%����j����te��A�B���z��zq9z�!ڶ��#90\  {pmمg	p��){����q{#Í�6�j�	{�{��wmS��
	��~)���y�����(rppp�?z�'z�'���0%DI�A�H뛇r�B��DI��mR&i)��r��[^KBm�lۺ�r&b�x��LE��s%Un	�Fj�]�LE[N��HI��r����EJ�&i#�)��r�?�EJ�&L��(��r���LEL̺ڬ�0 �����ME@��Q���r�j�OG�Fc�Hn ����QGTȑ�)��r����OF`I�c�q){�r���OH�ɥ��� �~��JP���H  �����TK�fln���}rrok�?�a!�a��VVVVi]��ۋ���8����e][Sn��m�I��}��e^a����˓�rr\��aZ�Ʊ��뛧r-UW�gZ\K<v\���&b&�:0h]�������r�
Co]��X<׉̛I��5��j^�ӂ�m��
��*l^��:���-�Ny�l^=��딫�ǂ ���i`.���
M��r����oa)�,	�˓J���e�mf6p/Ǐ������sk�=C�pJ��	�n<(*yo4�P,���a@��v{m��1���r�닺�w��ϑO��I �)�yx��x��q�C9�����}!mnܰ���jX��|�Ђ�@rM�j���W_�|�J+�	��{�2�~���4�� �M.��~+�a��웫��#(�}��w��-�j�����~�G�o_ ��w�|Z�}�G��Ct,�˓�~?���lX&f,�J������~�8�S�m�e�=zz���~e��A4˛��g�������DI뛊�����m��˛I�����$�)]n-����ے'��in�0�� �mzmˡ��9�C?�-�aprpp�^h'p'�բ ����c\�D�����z	ո�g[�@�@�웆rê�]i+Ò�&��I��}��lb��Q�H�肀C�Zal�Flزvʛ�z{�cq�&�Ƅ�0<%vfk�A�K��)�/%��~n)y�w����r�>9�v_�6���r�ԕ��xn��b웧j�>��y�ˈh[�̓J�zzb��|�ps7a�쓨jrzZz�|�5���r&Z�(�����q�^J�Fbppz����j�$˓Gb����Ǜ��pM�Arbjb�[H��������  �f\`ņoM���UUWTf\�N6uYp���	�h\6?��<"�j���h\a�(6m�"�9�@N�kZqN��pWP��h�m\��t��&b�~�sj]�ݔo!���Y)l_.i�)�v�- �
�le6��yij��j����pfuX�$Fz	{�j���lq#�k�vj��j:c:"un�T��� 0�����yp%׳e� �ډ��|rNa��m�j�)�k<���vw�/Y�@�M+�ko�|I�I����Qrp@`�<�<�<˛� 55�IA�B�T��˛�r����DI$$A)��j����JBu�2H{�rFjj^~�FK �cK���Y�}MF뉻Q_�j��zo�1�MEXzv�4
i��r��I�GL�VNlI�`����tMF�i6��wΥ��MFJ��%��{�r*e|ZLD��P��Q��r����MF�<�Ř��z�r� ��RHm9�Qb	{�r��RH\K.�M�I��r�+��QJ�����v)��j���SJ�gJ'�J��r�7���A���,�� RRRR�\@�?���(����[h%�N,��,�j�Z`��f]u]�F�0�=W��\aG��V�˛I�_�Ckg[y���m���rhz��i]8�d��,��r�i�_j +I")$�{����kct��t� ����}}��kb��`$J6��I��=�`l`�đ���c�¨mc!f��{N˛{"*C�td��{)�MM�)�����tj��ڠ9���I�����sl�
A��a��)��~�k}qyx��d��z�{k}t��$�J��j�"(��smPz��Y/�Z????�G��?��?,�1'7''DI G�(�&��I�\\X\FK �i&i+�I�����LEV;�dZ������.�FO 9�	��I��z��p�QI����H��z����WM�p��k�I�肊��UXNiI��G(��z��x{TY���Z#1I��r����X]�(i�&�I��zk�ҞZ_���8��rFb{�Ό]bi$��jZު�&c\-˚%��rFb%��Waf�)ۤM(�Fb��5h^,��bT{�j�n��i`H�R=ډ�zb*4pa/W�
�z�I��xHƂ�~���ġ �������#8���J���V����$v�~^3H��������9�g�h����������16`����ￃ�%Yƭ���Oj�鑃����Wi��r:8���~O	�ʛ��--��܇��˛(�o%'n��,�f�ʓH��M�]�L���-L�I����y��v�����I��{˫��,N�Hʛ(�'�ח�����k�j��z�"���B��}ݶ��(���UU����%��肋�����$ò�ځ��i����ǔB�N�FbA[ZZRg_��;x�!O��zj��qd\G�a3�"���H�g\����i��r�r�Ze�0�]l@�- )W>bY]+�C:�i��zN:*JhXq�>�h`���z����dY[=�m�cI�{z���cZ˲CDV@ �[��<]f��Ʊ˓�z!���ib��n�ʓ�r����g^��B��M0�b���`j�iŢ��i���W�bo�$M90@D� �^�mcd��8֊��r�:��vd��{O{���Mʪ�v~i�A[�u��QJjNKƅ!�C9!�wvlpd���!�.Շr����ibK+ڢ/ҫ��z/��.k_&i�I0�������br�(]�������tg�Z"=%��j�����vj���\�,�)�o?�iv`6�l��� ����znx+$��	j��z�� �xq-�lx�` ����sx�@$m �M�~�r��rq�I��j����~u0H��I��z��~��~1}�o9�j��r����~��0i9�)��z��|ۇ}������z�j�j��{�go� �=cR{�`�`
��� ����`T�h�4I,�&b���Z_�4	Tn��zGu��Y^6M6�j��z���Z_ب���
����%]bЄI�$	���z(*�]b��Ai��	s\���^c�$H �@U�λ@.��&MӦqj��r,h��^c�$I�4lk�{����^c�I� I��	{`j^^cR'	&�˓�z����^cҠA,UNJ��z����\a�Dv+��)�fj�h��dYu�v<Q{*��j62��fZ����-J��r��/Ue%Aq��tJ��jb���]AA0� ���ޅy3,���m��a �����~mR2%J�������|Z�!ʎM�j��s՗�}���ĉ�	{��H�~�Ӹ�"���I�����~��!$��-�j�.���~�}�a��n�˛�����j�n
��˛�*���~�L�L�,�����
b�Is�FK� 	�-*�-%�LKY�6���^^���}�Vʽ0g˛���������&	�)�@�*���횂#E� ,�������̀m��2-�J��n�C���6Rc8�-�j��[��Ƙ��	n��\\\\�_H�<ʃ?���(�驡d[�@sd�u˓j@�(h]J�/h;˛�r����ma5o{�w��炢���lc����I�����Wakцmd�.i��r8��ncqڂ�ݖR����vi6:��i���zB�J�~qnw7Ib@�%%G�v���l"	����r'%��ynew)Q��	{���%�ym�lI��
�=��X��{z.Vn��Gb�Z���}#X����*�gb5>�'��O��7�j�Fb�\^~������˓�r��|u��c0c0��}\XZXZeZҦiE�3�J�YQQ�d]$ڐ�m���J����#[g�ơ3�-������g\����;��j��l�Zc[�B	�ȣ˓�j����lZOl��pj��r��Zjm]�μ�f)�&bz_x�i^���-��)�fj!��mbw�}� �=.�)5mf.�7GJj��j����qeN�z�Fo	��j>�5%rk� FڶQ���j���un�FR�J��z
નyp��l���
�=�"���r�P������)��'���v)�ni��
{�7{�@$@$n�� xxpp�<z�'x��˛� �-HAe�u"��������CH�$h���P
�ZX]|IB�X���rFj�֞:MF'�lC�
�ǷMF5�;�i�@ �{zH�LE�R�Fai��r����MF�C^�1�
�J�;HM���l` ��i��LE���+���j���>LD�	9��z�r�?7-OFZ�`Qg �"���RH-�!F��
�Z�;+RHcIŰ˖)��j�J*�QJy��]�I��j����VJ��qI�P��M��A�`
�`
��  �	t\�ۻ����"A����h\���=��
����f[n�ކ���)�����b[mC�mAP�����h^3�f"Y�뛇rZ~�:h]���ۺ˛�r�:k_�h[$�`���=�kc�ʹ6���j��_��k`�bl�� �z��lbN�uf�
�8�md�P|ISnˀ%��P0te����I�
�����tkO�4��j�I�����un�ە��U��)�9��}q���f@p�|j��y~�a��J��r�����t����/��QOOOO�z�/'p����(���5�}%C%k�+��$���}n��D��r਷�z�`����	{�*���v�4��Ӓ�����#�y����:-�������x��n2~����_���z���M�˛
���}��vi���i��^z���]ۼ��` �.����I��!` �m����e�	�Hl뛫���ʎ����iشv뛊��_���S�u[�˛i�����`XJ�8�-�i��/�>��%wn�JM�j���jj9�K9C�� rrp��_h�&�>��1����i^M�n��`�Y[r[j��a�m������_lb�u��L�=?n��kc��.@ii��_���k`�䖊���z���dq��*вii�fj���ui�uw7i��r��CByn��~}h�0�]�p�t��J0Ҩ���r7���w�F�a1.̓�z%/z*�I��i�I���~v�y0N�Ik�R���|�z$��bJ�gb�=����:��1���jZ��h�� &)X�1  �-	�1ǣ�p��M�!B``@�^H��x'm���	h]�vX�>1���VXZ_dYô�l�Fp	�iJ��e[|C��W��=�x��f_�������z��^Vn[��M�`�j��j�z��i`;�b�)��Yp��n^��<K�肇r���`q�ac�����߶��leeQw)]�)��j�|\ytgm��%�)�Gb�-�ui��r�Q/���r����uk�	���؊�	{���kz]90�iI��r0�$ziZ7�!W���z�<��u,�_yv����zJKkk�zO�I�-��Y�Bb��?�<��뛂���CHWrc����	�V\|~DI�4��:�)��rpr|xLE������zgj�>?'GM[�I�lJ��r��=�ME=�-�vJ��z``�jMF?I�\��0
�=[�?�GL%۶%ʲj��r��RVOG�K�l�)��j���MF#�c݉({�r����OF�j�)ڒ){�r�E��FK��dQ6���P��OF��m�
P��/'
PH%_r��1J�	{�_��SK,���*��rΎ�[TJ�A�!ZR��Fb��?�E��Lm�� ZXtd�]x�'x'�a�i[&��_�δ	��Xʪ^c�0@�P˛�r.��\al��FI�I�eozUe^���n�&��)�/�Jha��k��0 ����jaq�������6g`i�a�M�J�����mc]h�v�0���������boض�Ñ���z��
�pd���Z��I���ier]������	{�~c�jx���R:�˛{��!�{p�c�l�qj�	{��J=~v�XA��j�{����wl��VjI�	�� �Z�qm�^���Gb��?�L��<��?L�C1%���KD-��W���{ln|dLD���kG����zº��ME$a
=f�i��z��{�PE��re�H��z���SFu��ܒ��z�z�JV�"���炧r����YN��wۖ�fj
(�*UZ+��Jm��z ��*X]ۨ�`�U(��j� (�Z_ӈ�#�{Z���p]b�����r%b����_dИ�cɑgj%b�l��g`.]?��zZ�yv^jh4�Ӹ5(�%b����j_�R2��zZ
��)zgqiW9e�z1���h�~�z���@������S��b3�ͼfr��������Cͭ(��z��#���n_tni�����n��XϷa��i�炢��{�����B	�˛�}m�ْ�$���c�i�fr8�ڐ��2�P���炪˩#q�d����(��z �����˛I��/����m��L^�n�H�ו�ފ��`��o�I��o����Nٖ˛(���KÃ�!9��J���(���춐��M<�����z��kM��b1#C����z�*�l��q��m��b8��ęB�,�Z Z���za�S?{��o�C9����g[�&�S�8��fr����e[��)Ypi��z��z[f�6nJɶ����V�=iYtZ���i�����^i����A��(��;��g\?w(n����)�P��kZ�g�}���r����i\��J����)���9�j_%�N���(�����`i#3PC�����z��rl]ܼ�U�<˛{���UmZT�cS���)��q]�*�e����z���p]!���Kuj��r_����g�������  ��Jbǎ���!�zAwvv�tfoC�b�μI�ڰ�Ukdc��b�U���z��rcvr
�Fa˛�z��:ng��C�4��)���
tgS�m۪˓)�����ht	H2b�T�	�ׯ*6ui��i�b0	�X��oqv�$n&b���-oyض
�  �����qz�Z2Bq��(�����s|��m��mP������j�7�u/�nO���'b�   |�l��0J�������{�	coJ�{W���|�RtmѶ{�r �����Z�I�fj����Ȃ!tB'`	1�a�[{sWeɑEX�룄I�룩Z_�A��QI��r���(Z_I��mj��z���[`+������	�$h[�]b� a	���r���]b$I��I���jx�\a�&�cǁ̓	{}e��^c�$mڦI��	{����^c�$m�8N���r��u�^c�F���J��r���]b-�m h��	{��Z�^c   &aj��z���^d���Qj�	{����gZ��r�p�j�&b���e\;��hۚ	{�r��``iV�4;2��dA�����\AP	{  ���Ӣ{�������ա0�����}�]�m�~+��	�~��}��U����r8*m;�z�	l����)���-��v�$uV�n���e���x�͐ض�����ʠ��y���M��n��������z��>��n����*���Cm�w���j��nW^��ҶZ&��)��+ሁ~g�o�웪��調���=��q웪�}zzk��b��#'��j�������J��m=v뛊�������6�ӄ����		�����_v`znp�*����Ǚ��p,� �����_ʣ���� ����j^�֭>w��z���\d\��k�����z��/�l_�X�y��i��ʲ�gj`�Xv ���z߾:do㢑��i�fj`@L�qex��/�I��za�غuk�dO��i��r�ꐐ}n��WOi�)��r4���t��.�n��rM���w�Fz-ƅ�)�--��y�H���2̓�z� z��{`N-�1J�&Z�V��u�B.����j��5��Oun�R)�Gb|�jp����S7wM��j��76ǧ%R"%���APXXPt]�߷���ϴ�Y""�e[�8�H;����W�TvdZ�D����j���[g�q����I�����Zf�@R-ِ���z����m]����i��j�.�o`q�����Y����j_pnw߶(�Fj�//*q_]ɸ�� 
�.@mf�dn4V�zgb�z�xtgm7��ՠ�--��uj\�=�劋	{����wl|Q�ޝ�I��r"xyi�pb�Ғi��z�)��{o��6�p��Eu]�uޖI閰
�-����z	� 	� ,�� `pph?�/Ł %%55EJ�4@�M��z����LD�o�~�� �M��_^KD�I��8��zgj��	ME�H2�kJ��r)'��ME�}l�NJ��z���ZMF!'r�֘(��z6�;GL$ٶDY�J��r��TUOH�]�N�������MFT«3��
��{��OH�S:�S���>��OFo�vm��
�����PHK���`	{�r	PImֲS˦J�	{��{zSJ%���㶰
�}����VL�Ꙟ�Ҏ�gb��/�E!�A!�IJ�� T\_�r[p�8���PťI����i^-�M޵m��z��`�]b��Q�@I�	����\a-�q�����I�QS��e^ ٶ����r++�naf��6N˛	��x�i`�R�-�6Ѓ�=�5��ch�*r-��˓J��;��mb�Һe�a�)����|oe�m�&h֪��.���cp%ӌ�6L˓)���@�qf��o�@�
���X|ly¦�h��˛)���Hmo|��[B��
��*�R�~w(917�j�	�`����zyy�'�m��	����W�q������)JJJ��}�#5�n�
� ?��^�|���?׭��Y�����|��Ԯ_�,��������y03h�������"�|&��vZm����]B�{e�9v�M����^�y����԰ ���ˊ�|�6�2n�˛�ｿ����?ɝ���_�pЅ~()�=)˛J���;���Vn�z���������;�=����g���q��q�P��n(����T7lS�,�I�j�n����b�TJ,�)����(�}���Ｇr:
OsǇ�FI$,��@n[e�i�#>S�� ?���`k-��i����Yਣ�k]�;�����z�]Urqc���cj��z/��ml_I�`���jcbqb�m�X�)��z{���pgy��iI���JVrj1�V��
I��j@�zo�I���ni�fj\�>*|uWq�f���r~w i,Qn훋��=��z#�i)��I��v�R�}���6��J�&Z\�\Z�{q����*{Fb;??��y�w7as���rH�Oξ���W�`��0�?�C˗�m��!��A|V�u�a{�&�c�� /���k\���C�ϴ�z����d]�/�������S]h�Hb˖�@�M�(��i]���@�˓J���&\g^�)�㕫��rUWw
na&v��ɇ)�Fb6�, ob�ң2�i�肽�p`�:�!�I��zH~��ndv�5�Y���~h�hqf�0�N�	{�j�)��qg)�ZlL�I��r�%��gq�H�←����u�rk��y���j��z����yp-�p�Pi��r�⋂v�x&b}j�gb��x~�s��K84�� j��J�#�DJ�  ���s�=O��O���1��HM�*4n	{fj�y]VJC+ɦ���	{gj-�LE/�y�w���j����LDbY�s &�J���GL�ԒlA�� �I��PIaﴶ��0
�-��~�HM$��m�$��r.���OH9�;�e�z�r����PG�Ђ$��{�r��AMFm�F)�	P�����GQ���� ��*��PGM�r$�j��r
��SK�{�C�@�Mw�+��9��?�p̈́A?�kZ�BDH�(�)� ~�ib��� u��a=��]dY������Fb ��f^~�%9���z�Y�b[lۖ�~P�:#��i\n�I�˛I�7)�bg�4v�4m@�V���bg�6mX���(�����oa���qk��/]��nd.b�5��������pcv�lAL����(�of�[ȵ@����xl�}�7�j��r ��(zp1�`
G@�����-h~tuDr-ȓJ�	{�r�y~�6������	����y�x�0��6)��Y  �`�s�!V�U� �o���T�'k�:�r ����DU��aՔnL�bI� ��JC�²�Hb���r����LEk�nc5�fr���MLE�M�4	(��z�o�-KPU
���I��z]WU7TL�ؒ�.H��zU۪8QV�6"	�(��r/��`UZڨ�P+�(��z*�+�Y^�&��(�I��rj`��[`��㲱I�fbzjj�_d�ӶqfjZ*��(^c�&a�I�jZ�h� f^F�:n�B�z�Q����i`��m[w�z�Q����bq4�#�1�z%b��W�g��[��Anݡ �/O[ë��U���� ���RĐ��<{���dI��E����<�R#�i�fr�������P�0�I��z�J��lB��pi��z���*���ݖ��CI�fj!>������ڨ�6j��zTv^\��qW:d���(�������v��%���I����?���O��������ӓ�Yv��˛I��PR\���
M6�˛(���?���&P3�M���SUu����,�˛��������ˡ$떪��r�b������W��B�Fj��_ƏəX��	+�@b�x^Ȏ��M���A�Ua��b}"?�#��݁�5�Ue[�8h�d@N�dQ����j`y���a����z��{g\�vHY7Bi���'��h]����u�i��.�*�k[w�wi����zﲺb^j9e(�1`���yl\1YMX�˓�z��Ωk[l͘�j�({��h�h^&j�aO�0 ���-�i^XڷU}�˓(�l��gf^ �i��I��j��:�k`�x����M#-��na�����)�k���ueo�t,Q��fj_��k��)V�� ��v]�,���DK� ��a��l�?��犓�("#=tj�؍�H ��%%�es,W%�f��I��*z�pd}�ve����aWsf�δM!���)�����guc����@ �� 6;tj�@ɳ0�k*/�zpi��Di�0 �-���yrF�l˭̓����uz�(��
����^U�}r����w��z (p�uf]��>�>4{� 4l#ە���z�o�/�}�s��`�)��r��}�|�c۶i��M�����~��dBL�  �*�rɝ� Ħ�� ^Uq��K���p.8I�� �=�]b@	5V���r�%��\a&L�m��r����]b$a�L��ZR��]b��I�$	��� "�]b�$A�I  ����^c��$N���zt�^_d�A��A �=��" ^c�$H۸�*��r�v�]c�0J�Tjk��r��P�]b0I4�*��r����c\�[��2�J��r˿��e]$�e��P �m��>d[E:�J�j��z�W�.Ygc���X���jz}?�X�9t@�� ��x\΁شI��� �Mɖ�{|�&�#�l� /=ׇ}dQ�}l���)������{.���,�j�j��yf
�ᚂp�=�=�.�|Y>O͡��웿{��z���aӨL���{Z� y�m(�c	.m�˛��{�}�0�mۦM�˓H;����1�}��
���\���V"�Rd˛J������ �r]؁�j���j(�"�؛հ
�Y ��9f��j,�J��e����_��!F��
��/� ��]c��f0 �*�Đ���OC��0���xʆԠ	ӄ�� �V���g~�'�#0���;��^ldҵ-����X{x�h]k��mW
j��z�U|_q۰Q�:fj��ɽ֙j`I\�$1���_zؘqc������
�޾.#ph���?bI��z��?ulq�����]0��yq6���Ij�fj����}u�0���l���r{���i�m���m����y�VS$�e�)����|�{u�rW��z&Z�}�����%*�����j'%����9�7w �-rcSs��y&D@�� *�cP˅��� 8�� �U�aO�'p8� +��[i�T�����}\{^ii�&-��)���ܟh]��h�m��I���j]dht%8� �MHoþ]j�H��1���j���oa�ti�&b�)��`m�ڮ��j�肯Ŧ�obc�e��i��zR_��do�B!�h�rgj�X��qf^�)�c�	�o�rhF��m:j��z�i��qh�Rk�u�
�m�]��vl$�!I����z�~��zp�R��	��{]���v��?�J�&b8��~�s�vi�Ɗ�  �Z��Ip�=�A*{ ?}��U>n�v����9����GL[4	Er�rFjh���IBװ 	��
���K�LD�V֦Sj��z!��(LEm��v�
�Rj��GL�V�,J��
����PI��66Z��z�r*�z�INF�l�&)��r���OH#K�Ǹ��
�((�jPFLФ��	{�ru���NF���0a)��z���_PGlJ�l0�)��QHqے��j��r��߿SKq��hW����rݽo?�:��BM�a��p\�xĄIS'(�!_��Z�Z����_4��� %��g_f��[�m�gj���^c�W6��z�ނ�g[�k�1�W��{��j\uh�d�,��z�*�obh�@N��M��z���+bgܦ-�@�`��j��oc��w�b�)��:�dn*�I[��  �����cp�p[�� �� J�pev�j�f	������xm����P@j��r ��
yo��0�
�z���t��n񒫓	����y���i�0�]���w��$M� !m�� ���:�rJĈ�5�Ao[�}�`��[��?$�Ay����}M��B�+�@�%�_�{�?��Kϼ%j�����{^m���x-�H���b�x��5˒`��UU�y-�VB�-���.����y��M�N�M������׆{n�n�P{��
�?ψ~.�rm��M�j�h^_N���F2������j쏃�nŀ��I��B�*����<h
���"�H�����[N�-�j�Ω����S�j�����]+�.}���H&,/Š8�*���f�D	&,��AhZ���jп�y�'��b Y����h��[�<g�A(i����bL&�baI�A-��nc���_�l���Y����n_�O:mY� 	�-=�8�qcyT��k���z��=sd�\Am�d�����&�fs¦n�j���W�%l|�M�&1���_n��zr)Y�m������6�v��s�f��)�����z�K|e�f�k�����~ޣ�o�̓J�rh�x�{᷵��J��j{����I�q)��gj�����I��yup�'Z��+jʆ�6M�0!��ART�u�iB��Ο����0]7���n9��?�� Qb���d��c��� ����l]K(��Lh��gj����jc���2w��J�U���j`wn ����	{��B�k_K
�l����:/m_e�fQ���-���Kna�͗h���)����:i^�
m�g���zPx؜s`źT���)��j~�:eu;f�u ���� �qg�I�iJ����j͊�*uiv�Oᒊ�	���c�xl�Ϝ�E��	{�*,h�t��H�j��r��Z��g��8,{@�p��c��?O�$���(���_/�O�$��A e�b��@�#��PI�Z �w�y�<��?����(���ME�6�K)�Fb�>)&KD�U��9j��j##MDcI4%��k�	{r��_NE$QN�VnJ�{����PG#Ȕm�v)�fjr`��NG� n
��0�G{�p}TJ���^j	��r_��NGKM�ۨm��%Z����RKI���?j��z_���QHL[-Q)��r�k��TKqy�-	�	{�j���J�8��S��� �*�r�8!TH�(ъ�!|׵��^��'O��$�[6���^���O�$C̢(tX�*�Xͯ���ݢ ���TnX-�㚪j�Fb����`j� 	�r �m'?��_k'��8���)����ch�4��T���z��nTdj�m�F�I�\{[_gl�
I�&�j�)��̍�ng�S6U��)�⫷�rj1�f.Q
˓	��꠫vlX��O��	{����lyX��aӶ �{n��v{�
�"�&p���7y~5�#;�����Ϸ����o�mۤ!i�FZ ��j�m��)T��):NS�`թT	  (�A}��y[��x���%ԁ(x+��H~2�]ӂ+����TER�@�p(��Y5�MF�雽��H�Ej࿶�QI�i�1���r����QIl�+7H�ǂ����SK�fB�MI��/YR�RW�8aª�I��r����V[�(��(�)��j����Y^�
���I��_��+]b��؂�{�r����_d�FA�q�rZ����d\oݲfjZ��_�d\`1��r�a>�k_>��GsR�r�Y��8��b���I�B�� �:�r�v� ����Ԣ ��y?�w����$D� Ǜh/�tӌi�b˛ =��cċI��K�%+�1���-��X��-��fr*�(����̝H(��z���И�W]$I��z���ڕ��Z�����r�������P�u���z
�����$pSװ�i�7��e��crj��˛(����`����L]�i���j���q}(�����(�+�/��"�9�˛I���+n��`=�iImI�fr���锋q�woeI�fr���ǐI��
��A��pZ�q�X�$�!�e�u��?O�$� r*�uF!���AW_}��^~"'�/���A饕Uka�0-�ʹfr����g`�~�(�i�����mg^#�Ҩuh��~ދ;g`o���i�����/k]��K�I��z."�,g]�[?7"`��珡m\�p��	��?�@��j_m�Cńi��z

*^l�M�ֱ��I�����g_/i����(����\l"ILض�������td	��)g�p�0�[�'j� ,X�4oՁKRTU�a&̘�'��!�u�7b�D������ (�A(��d�����d-� ����oϓ$�'� ���=xi��;�)���	��j��vj�c��-̀ ���.�uhU�vw� ��� �vi����r���z�r��wnI� �j �<)��|om�6co���׮��{t/ysט����z��tT}qV�y)���z����|u�gq.U �����	�~w�-f�rI�ǂ�����{��z-iJ���z�/�|%Xb���j��r|z=��~���OqC(�A�"�@�t� ���
� ��:�u��>�o�D� i(��q^��X��a�Xi��L���`.0I�  �fZd��2��M�Gb����]c�6p��k�{����]b6M�F�j�FZ��B^c&��6I̓�z�5��_d�  �$	J��r���_d�$I� ij��j
��_d���	�	{�j��e]5�u^ʺ̓	{מ{d[k6�#�m���z��*^daG�����	{W�WT_d�(,�8Lj��rW��e\H:�$���r{z~?�V�dɐA��  �p\�f��'$�b�u�7�[����o�b� w�(��ixɕ�%�B^y���|I��h.4,�@"���z��4I�D�)���e��z"K�6J-�i� �UX�x[��`ݲ,�H��*���yE�[J��-����l��y���V!6n-����+���}/k�-�m�˛*�oy�~莶��,�j��WW��k�w���)��2�;��-�a�2�j��ؖ�����=�s�j�@಑���?��-�j���������9����Jk˟���i��%/Ł(*��x�e� a���!Z��9�i���O�<��a(V����hx���hĂ �i��aI���#�)� -�ncyѻ���j�fr�)�m_�φ%Q�j�肥�Gnqc��=	����z���sd�-ȍ� ���Iorf)9� 9s�
���	l{�&��*&�
�W[j�{t���u�v �uem�w��r�b�
�)>���z��5ٓ̓k����8�~�����V�	�}h`��|�`�m�1K��j��j����y�7���gj-����ɛW��A��  **�z�iҤ	,8�bT�u��mh�����C��8����n�J%�"A��  �c�;�d��<p80�a��=�m]	哠�ϼJ�UUW�jbm]3ea���*� `k;6���	{�8��g_ϠuӁ�� �^�`n�2�d�1˓�U���ja2{bʋ	 ��/�.o^��V-�P�����s`X��<ְ
���*uf�Z�e�I��jz: :gq�(��Ԉ���z����vi�iw/Pr�
��+}l���QP�/��Z�vI�?��@
����ob�R����z b�9�`pm���'���8W%���_�pK������ ]w�k�<x8,	��a5�UWl<�m�q��p�1����ME��&xI)�&b����LE7����G��*��g�nMDm��D�k��z�@xOH6�i�)��j��JPG�r.�N)�fj��=�NGĩ��y�
���\�SJ�,�Kݢ�EZ���JGL��4Iۤ�
������RK)����j��zW�c�SH����V){�zk�>�TMyw��	{&Z �`��7��O�B�� ��r\�^ń�S�&� ߵm;�_������"�����W7��?EԢ(]Vp
�X���`~0j�  
+��`n����j�&b����f_�Ӿd���	��k`�ݶyIi�I�*�5ib�oq0�.���di;�ڸ*��I���T^gl�ӄ�@�-ٽ�ng�j���u�I�x�si.�p%�i˓	{��`jkx촒 ���{���-yq��m%4`�WY��w|.\��
��o�b�ve�m�����r�,���pni�m_�gb���c>�B�9ʛ� NӜe�]���I�<�A���j]6d;�����Y?_��]��XI��������v͍�B��ꣂ�%�]�{#	<��ϼ�{��Ӄv�Z#����������}�� I[ڡM��������|��Ҍ��-�����_�z��v��M�������~�ܨl ��I�@��j�����y�˛	{�.������|w뛫���+����-[�$뛫������@3�+An,�j���/����?y�x�b���{�g�T����a|_׵�]X�������`0)���s_�8�l�z��r,5UUoc�y):!��q8`���c7��?� b�*��ez= l�� �%�؉eObߩ��˛�I�*��tf��-�*J��r�(<4yk΋ά
j�	�*�j�vg�;��&���"�'xn1�r-%	�������r�kw-GH��)�f��>�xu˦8E�̓	�����|ucneS̓	{����|�۸$ɴ̓�zbBjk���E$�*�gbC���À��������r�u�E˂�FM�0!��  r\���c��Ο����0���jtIR�,Fi��bYTYWUmzm�p#���IW���o1�\y�?�� 0B;�b��ɰd��  �=��bn*�Xj��z�WXaap��	�8,j�)����kbg�a��`���`��cq�@	;�m�I��_Ulb���%3��-��#�i_h�u9~i��z���ooa�n{�)��r:6�%ub�̺�Dl)��zҋ �wfvB�ָ0�?���tl���0 �����m1�NJ�	�����`�q�4�)�@�h���]أ'O��)̡('��d]�֒���d��a����j^5�x����#z�U�^��\��%�atPB*�9�#���I)  ���B�<�����/ł ���INZi,���ͨr��U�MF��5bRJ��r��HM�N,��@�-���OF�n�%a)�%Z?�  PH[Kl��J�fj����RI
ɬh�wJ��z����KR���J  �	�KPPh&�*��j�H��SKPR�0)��r*+j=�>��?�m�B�*�x�<)d(�˓  \׵m�\h�$O�$� ����g^%hۏ]���e���x^g^��� �e�ri����U��'���M�  r˫��Zˏ偞@K�a���|mc^�'9b���Q���%jb��e�Ai��r*"#OflPiI�P���+�pg�Um}���r����rhwm����	{)'��riu�~tW
 �|���zm�m�'Hh���s�|q��Ǿ1���r�n�}uI{s��	���r5���x1�N5E�@ �������C�;{�r%Gr�X I��r�H~��r��`�j��"Jp�[�'���jԀ �=��\j)G�m�0����cZ�@�m�3Dz�aJ�2��Z�$����8SO��I�J0%*� ���^HT��r����0
��PGe��l���r���-SL�{��ۃ���w|z�OT�I�&j)��z�U��WP��P���fj�*�W\���q)�Eb~��Z_�1b��j��z*���\bZ3�`��J��z]Vr_`e H�&�	�Fb{wxzf_�fn�uEb�Y����kb�hwn��r�Y�{�>�X��Ǐ� (� �*�j�o� �@���! ����m0{ڶ�:��@ J���~l`%rY���y!I��w�n������A�㥕�n�i��Bh� -�Zh��q��J���a������1�R%��)��z���I��e�c�8 ��r8(��S֒*����zh�Ί���4A�֐j�fr̤쨘��s����肩��/��W�*����ޘ�����lF#D����r� ���%���˛(�;��7��k�$'�˛��X����[G�$I6��fr��H�č���O��   ��x�n�Ѓ'�A��!�ukD��H9��@aXV]hvm�5���q�0�����l��?�����8�MU�jF)�c�bW]w��dO�'�#���A��UlaEN��ҭ�fr����bo &���li�ǂ.��Ucs�0nd�m���z�..�m_�ؤ©i������j^�2�;����(� ��^m�ڦ)��I��{un\}��mY���r����n`��[<>���r����ob(+4�~����zન�oa}:z$�2��Fj���-�a�)T͢JRTU\�i�T�P��!�u�&s[��܏��F�@����]bi�6i���i����ob������@Ya����fC�	���� ��L0�nI��L���� ����{rE��#9oI��r *�xp"���"�i�	���zl���@�j�I�����zq-�l3	��I�����~r+[sm
z�)��/���ry�֤��(�Fj(*Bv�˔�XA��r�k�w~P�$�m��z����xrjr��i��z���gz7N�I��r ��j�{����L�@�*�r�t� �B�
�aڗ��oH�ֵ]���8HP�}~s��j�a�@«W��qd@2cٶ» �'���tx	��\�� TR@#�Uɯ�P"�6�a���Tcmۦm����Z����\am��)ۖj��r:^_d�I�(m���rԔ҂_d�������rx���]bd[���J���jj飯d]]���N���z���e]�>Ơ��J��r�"`\h�&M۠lj��rX���e^}ڞeN�)�Fb����\m��	�(,j��j�"+�R���B)�  ��r�d�ɒ#'�  ��=��`����o?�āi��v]eY Wo�K�d��i��
 ]jK1a�M��aOU�]�j5�
@b� ����v���h>4ʣ�"�%�{m��h��ϼ���鴂v�Dc�P����}c���|k\��-���_�>��z�m;�m�j���^~�	H��aM��������~u+[O��)����Z����bᶭ˛)�4���=�Xj�
���������"۶ �iA�k����c6�-�i�������s��q�͡(*��x�b� a�*�! Z�%	�]��������r�PTUn_�:�I �r+-�Urc�H���"��qΘ��c���
�  �b���fϣ��i�!"	%�fv�m!����z}���xf{I�7
j��z�/yly��U�b����>��vg�ےۆ�
�-*��zo��r�	j��z>���sI��� i��	�[�8�x�Ԑ }̓*�?袅~q�����
�����|�ʄ$i�
�X��ڈmW9m��
���88ńɝ�	�B3��(��s�g��	,8ʴ \��9�b������a�c8���jvmò�6l��#I����myM2b���I����q�ϕ�˛  �C�;�cI��h4q�  ��=�mb���6�δ�z����oa�.�˓)��'�qc�m�)������qbw�&�L�m�)�w�_�`l-��Ԓ����Hzha~q���I��z��m[pa`S-Ir�
��%	uf������J��r�k*{wf�H��wP��+I�xlf����3�z����sɟ?w�j�Fb��`X�b��A�=� `��=�]x�$y�?i�bQ�IrTd]����܃��a���o]��p�f�"zu��c�ɗ�%Ă]TPJ�9p.4:	0͂UUU>��$I�HP͢ ���%OH7m�d(rM��z�U�MEh+��4*�fj���kMF�66�	)��j@  �OG��m�"�I�Fb$�RH�%�!��J�fj���&SI'�6�
�B ��KP0 �I���j멪�SKߟ�ϑw0d�'�ڪ�VK��r��	죧j���=�<��ǏC��!*�r^�d� �R#&G�bW�u�\�c���(����g^Eo�qm@��a����f]�[".�抢ik���V	���<��0Tr�+�[���P�(�a��mb��r7l���Y����ib���(ʛ�z/��YmfQ�w7�װ
�jj�-pg�\�e�쪓�r����ri�k6X�`
�
���ti��l/�	 ����mzЦq���
����+|q���6�B�