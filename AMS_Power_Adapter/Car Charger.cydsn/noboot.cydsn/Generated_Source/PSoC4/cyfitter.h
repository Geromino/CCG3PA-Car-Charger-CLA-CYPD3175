/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* SW_Tx_UART_tx */
#define SW_Tx_UART_tx__0__DR CYREG_GPIO_PRT1_DR
#define SW_Tx_UART_tx__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define SW_Tx_UART_tx__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define SW_Tx_UART_tx__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define SW_Tx_UART_tx__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define SW_Tx_UART_tx__0__HSIOM_MASK 0x00000F00u
#define SW_Tx_UART_tx__0__HSIOM_SHIFT 8u
#define SW_Tx_UART_tx__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define SW_Tx_UART_tx__0__INTR CYREG_GPIO_PRT1_INTR
#define SW_Tx_UART_tx__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define SW_Tx_UART_tx__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define SW_Tx_UART_tx__0__MASK 0x04u
#define SW_Tx_UART_tx__0__PC CYREG_GPIO_PRT1_PC
#define SW_Tx_UART_tx__0__PC2 CYREG_GPIO_PRT1_PC2
#define SW_Tx_UART_tx__0__PORT 1u
#define SW_Tx_UART_tx__0__PS CYREG_GPIO_PRT1_PS
#define SW_Tx_UART_tx__0__SHIFT 2u
#define SW_Tx_UART_tx__DR CYREG_GPIO_PRT1_DR
#define SW_Tx_UART_tx__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define SW_Tx_UART_tx__DR_INV CYREG_GPIO_PRT1_DR_INV
#define SW_Tx_UART_tx__DR_SET CYREG_GPIO_PRT1_DR_SET
#define SW_Tx_UART_tx__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define SW_Tx_UART_tx__INTR CYREG_GPIO_PRT1_INTR
#define SW_Tx_UART_tx__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define SW_Tx_UART_tx__INTSTAT CYREG_GPIO_PRT1_INTR
#define SW_Tx_UART_tx__MASK 0x04u
#define SW_Tx_UART_tx__PC CYREG_GPIO_PRT1_PC
#define SW_Tx_UART_tx__PC2 CYREG_GPIO_PRT1_PC2
#define SW_Tx_UART_tx__PORT 1u
#define SW_Tx_UART_tx__PS CYREG_GPIO_PRT1_PS
#define SW_Tx_UART_tx__SHIFT 2u

/* BUCK_BOOST_EN_C */
#define BUCK_BOOST_EN_C__0__DR CYREG_GPIO_PRT1_DR
#define BUCK_BOOST_EN_C__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define BUCK_BOOST_EN_C__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define BUCK_BOOST_EN_C__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define BUCK_BOOST_EN_C__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define BUCK_BOOST_EN_C__0__HSIOM_MASK 0x000000F0u
#define BUCK_BOOST_EN_C__0__HSIOM_SHIFT 4u
#define BUCK_BOOST_EN_C__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define BUCK_BOOST_EN_C__0__INTR CYREG_GPIO_PRT1_INTR
#define BUCK_BOOST_EN_C__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define BUCK_BOOST_EN_C__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define BUCK_BOOST_EN_C__0__MASK 0x02u
#define BUCK_BOOST_EN_C__0__PC CYREG_GPIO_PRT1_PC
#define BUCK_BOOST_EN_C__0__PC2 CYREG_GPIO_PRT1_PC2
#define BUCK_BOOST_EN_C__0__PORT 1u
#define BUCK_BOOST_EN_C__0__PS CYREG_GPIO_PRT1_PS
#define BUCK_BOOST_EN_C__0__SHIFT 1u
#define BUCK_BOOST_EN_C__DR CYREG_GPIO_PRT1_DR
#define BUCK_BOOST_EN_C__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define BUCK_BOOST_EN_C__DR_INV CYREG_GPIO_PRT1_DR_INV
#define BUCK_BOOST_EN_C__DR_SET CYREG_GPIO_PRT1_DR_SET
#define BUCK_BOOST_EN_C__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define BUCK_BOOST_EN_C__INTR CYREG_GPIO_PRT1_INTR
#define BUCK_BOOST_EN_C__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define BUCK_BOOST_EN_C__INTSTAT CYREG_GPIO_PRT1_INTR
#define BUCK_BOOST_EN_C__MASK 0x02u
#define BUCK_BOOST_EN_C__PC CYREG_GPIO_PRT1_PC
#define BUCK_BOOST_EN_C__PC2 CYREG_GPIO_PRT1_PC2
#define BUCK_BOOST_EN_C__PORT 1u
#define BUCK_BOOST_EN_C__PS CYREG_GPIO_PRT1_PS
#define BUCK_BOOST_EN_C__SHIFT 1u

/* PDSS_PORT0_RX_CLK */
#define PDSS_PORT0_RX_CLK__DIV_ID 0x00000000u
#define PDSS_PORT0_RX_CLK__DIV_REGISTER CYREG_PERI_DIV_8_CTL0
#define PDSS_PORT0_RX_CLK__PA_DIV_ID 0x000000FFu

/* PDSS_PORT0_TX_CLK */
#define PDSS_PORT0_TX_CLK__DIV_ID 0x00000003u
#define PDSS_PORT0_TX_CLK__DIV_REGISTER CYREG_PERI_DIV_8_CTL3
#define PDSS_PORT0_TX_CLK__PA_DIV_ID 0x000000FFu

/* PDSS_PORT0_BCH_CLK */
#define PDSS_PORT0_BCH_CLK__DIV_ID 0x00000002u
#define PDSS_PORT0_BCH_CLK__DIV_REGISTER CYREG_PERI_DIV_8_CTL2
#define PDSS_PORT0_BCH_CLK__PA_DIV_ID 0x000000FFu

/* PDSS_PORT0_SAR_CLK */
#define PDSS_PORT0_SAR_CLK__DIV_ID 0x00000001u
#define PDSS_PORT0_SAR_CLK__DIV_REGISTER CYREG_PERI_DIV_8_CTL1
#define PDSS_PORT0_SAR_CLK__PA_DIV_ID 0x000000FFu

/* PDSS_PORT0_ISINK_CLK */
#define PDSS_PORT0_ISINK_CLK__DIV_ID 0x00000042u
#define PDSS_PORT0_ISINK_CLK__DIV_REGISTER CYREG_PERI_DIV_16_CTL2
#define PDSS_PORT0_ISINK_CLK__PA_DIV_ID 0x000000FFu

/* PDSS_PORTX_REFGEN_CLK */
#define PDSS_PORTX_REFGEN_CLK__DIV_ID 0x00000040u
#define PDSS_PORTX_REFGEN_CLK__DIV_REGISTER CYREG_PERI_DIV_16_CTL0
#define PDSS_PORTX_REFGEN_CLK__PA_DIV_ID 0x000000FFu

/* PDSS_PORT0_FILT_CLK_SEL */
#define PDSS_PORT0_FILT_CLK_SEL__DIV_ID 0x00000041u
#define PDSS_PORT0_FILT_CLK_SEL__DIV_REGISTER CYREG_PERI_DIV_16_CTL1
#define PDSS_PORT0_FILT_CLK_SEL__PA_DIV_ID 0x000000FFu

/* Miscellaneous */
#define CY_PROJECT_NAME "noboot"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_BANDGAP_VOLTAGE 1.200
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x200211B0u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4R
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4R_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 8u
#define CYDEV_DFT_SELECT_CLK1 9u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 0u
#define CYIPBLOCK_m0s8cpussv3_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_mxusbpd_VERSION 1
#define CYIPBLOCK_s8srsslt_VERSION 1
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
