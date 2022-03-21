/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Device Tree binding constants for Exynos7872 clock controller.
*/

#ifndef _DT_BINDINGS_CLOCK_EXYNOS_7872_H
#define _DT_BINDINGS_CLOCK_EXYNOS_7872_H

#define NONE					(0 + 0)
#define OSCCLK					(0 + 1)
#define WIFI2AP_USBPLL				(0 + 2)

/* NUMBER FOR MFCMSCL DRIVER STARTS FROM 10 */
#define CLK_MFCMSCL_BASE			(10)
#define GATE_G2D				(CLK_MFCMSCL_BASE + 0)
#define GATE_JPEG				(CLK_MFCMSCL_BASE + 1)
#define GATE_MFC				(CLK_MFCMSCL_BASE + 2)
#define GATE_MSCL				(CLK_MFCMSCL_BASE + 3)
#define GATE_SMMU_MFCMSCL			(CLK_MFCMSCL_BASE + 4)
#define UMUX_CLKCMU_MFCMSCL_MSCL		(CLK_MFCMSCL_BASE + 5)
#define UMUX_CLKCMU_MFCMSCL_MFC			(CLK_MFCMSCL_BASE + 6)

/* NUMBER FOR PERIS DRIVER STARTS FROM 50 */
#define CLK_PERIS_BASE				(50)
#define GATE_BUSIF_TMU				(CLK_PERIS_BASE + 0)
#define GATE_PWM_MOTOR				(CLK_PERIS_BASE + 1)
#define GATE_I2C0				(CLK_PERIS_BASE + 2)
#define GATE_I2C1				(CLK_PERIS_BASE + 3)
#define GATE_I2C2				(CLK_PERIS_BASE + 4)
#define GATE_I2C3				(CLK_PERIS_BASE + 5)
#define GATE_I2C4				(CLK_PERIS_BASE + 6)
#define GATE_I2C5				(CLK_PERIS_BASE + 7)
#define GATE_I2C6				(CLK_PERIS_BASE + 8)
#define GATE_SPI0				(CLK_PERIS_BASE + 9)
#define GATE_SPI1				(CLK_PERIS_BASE + 10)
#define GATE_HSI2C0				(CLK_PERIS_BASE + 11)
#define GATE_HSI2C1				(CLK_PERIS_BASE + 12)
#define GATE_HSI2C2				(CLK_PERIS_BASE + 13)
#define GATE_HSI2C3				(CLK_PERIS_BASE + 14)
#define GATE_USI0				(CLK_PERIS_BASE + 15)
#define GATE_USI1				(CLK_PERIS_BASE + 16)
#define GATE_USI2				(CLK_PERIS_BASE + 17)
#define GATE_UART0				(CLK_PERIS_BASE + 18)
#define GATE_UART1				(CLK_PERIS_BASE + 19)
#define GATE_UART2				(CLK_PERIS_BASE + 20)
#define GATE_MCT				(CLK_PERIS_BASE + 21)
#define GATE_OTP_CON_TOP			(CLK_PERIS_BASE + 22)
#define GATE_SECUCON				(CLK_PERIS_BASE + 23)
#define GATE_WDT_CLUSTER0			(CLK_PERIS_BASE + 24)
#define GATE_WDT_CLUSTER1			(CLK_PERIS_BASE + 25)
#define UART_0					(CLK_PERIS_BASE + 26)
#define UART_1					(CLK_PERIS_BASE + 27)
#define UART_2					(CLK_PERIS_BASE + 28)
#define SPI_0					(CLK_PERIS_BASE + 29)
#define SPI_1					(CLK_PERIS_BASE + 30)
#define USI0					(CLK_PERIS_BASE + 31)
#define USI1					(CLK_PERIS_BASE + 32)
#define USI2					(CLK_PERIS_BASE + 33)
#define UMUX_CLKCMU_PERI_BUS			(CLK_PERIS_BASE + 34)
#define UMUX_CLKCMU_PERI_UART_0			(CLK_PERIS_BASE + 35)
#define UMUX_CLKCMU_PERI_UART_1			(CLK_PERIS_BASE + 36)
#define UMUX_CLKCMU_PERI_UART_2			(CLK_PERIS_BASE + 37)
#define UMUX_CLKCMU_PERI_USI0			(CLK_PERIS_BASE + 38)
#define UMUX_CLKCMU_PERI_USI1			(CLK_PERIS_BASE + 39)
#define UMUX_CLKCMU_PERI_USI2			(CLK_PERIS_BASE + 40)
#define UMUX_CLKCMU_PERI_SPI0			(CLK_PERIS_BASE + 41)
#define UMUX_CLKCMU_PERI_SPI1			(CLK_PERIS_BASE + 42)

/* NUMBER FOR CMU DRIVER STARTS FROM 100 */
#define CLK_CMU_BASE				(100)
#define GATE_DFTMUX_TOP_CIS_CLK0		(CLK_CMU_BASE + 0)
#define GATE_DFTMUX_TOP_CIS_CLK1		(CLK_CMU_BASE + 1)
#define GATE_DFTMUX_TOP_CIS_CLK2		(CLK_CMU_BASE + 2)
#define CIS_CLK0				(CLK_CMU_BASE + 3)
#define CIS_CLK1				(CLK_CMU_BASE + 4)
#define CIS_CLK2				(CLK_CMU_BASE + 5)

/* NUMBER FOR MIF DRIVER STARTS FROM 120 */
#define CLK_MIF_BASE				(120)
#define GATE_WRAP_ADC_IF_0			(CLK_MIF_BASE + 0)
#define GATE_WRAP_ADC_IF_1			(CLK_MIF_BASE + 1)
#define GATE_PDMA				(CLK_MIF_BASE + 2)

/* NUMBER FOR ISP DRIVER STARTS FROM 150 */
#define CLK_ISP_BASE				(150)
#define GATE_IS5P15P0_IS_ISP			(CLK_ISP_BASE + 0)
#define GATE_IS5P15P0_IS_MCSC			(CLK_ISP_BASE + 1)
#define GATE_IS5P15P0_IS_VRA			(CLK_ISP_BASE + 2)
#define GATE_IS5P15P0_IS_CSIS_0			(CLK_ISP_BASE + 3)
#define GATE_IS5P15P0_IS_CSIS_1			(CLK_ISP_BASE + 4)
#define GATE_IS5P15P0_IS_IS_3AA			(CLK_ISP_BASE + 5)
#define GATE_IS5P15P0_IS_TPU			(CLK_ISP_BASE + 6)
#define GATE_IS5P15P0_IS_CSIS_DMA		(CLK_ISP_BASE + 7)
#define GATE_SMMU_IS				(CLK_ISP_BASE + 8)
#define UMUX_CLKCMU_IS_VRA			(CLK_ISP_BASE + 9)
#define UMUX_CLKCMU_IS_ISP			(CLK_ISP_BASE + 10)
#define UMUX_CLKCMU_IS_3AA			(CLK_ISP_BASE + 11)
#define UMUX_CLKCMU_IS_TPU			(CLK_ISP_BASE + 12)

/* NUMBER FOR DISPAUD DRIVER STARTS FROM 200 */
#define CLK_DISPAUD_BASE			(200)
#define GATE_ABOX_ABOX				(CLK_DISPAUD_BASE + 0)
#define GATE_ABOX_CPU				(CLK_DISPAUD_BASE + 1)
#define GATE_ABOX_BUS				(CLK_DISPAUD_BASE + 2)
#define GATE_UAIF0				(CLK_DISPAUD_BASE + 3)
#define GATE_UAIF2				(CLK_DISPAUD_BASE + 4)
#define GATE_UAIF3				(CLK_DISPAUD_BASE + 5)
#define GATE_FM					(CLK_DISPAUD_BASE + 6)
#define GATE_WDT_ABOXCPU			(CLK_DISPAUD_BASE + 7)
#define GATE_DPU_DPP				(CLK_DISPAUD_BASE + 8)
#define GATE_DPU_DMA				(CLK_DISPAUD_BASE + 9)
#define GATE_DPU_DECON0				(CLK_DISPAUD_BASE + 10)
#define GATE_SMMU_ABOX				(CLK_DISPAUD_BASE + 11)
#define GATE_SMMU_DPU				(CLK_DISPAUD_BASE + 12)
#define DOUT_CLK_ABOX_AUDIF			(CLK_DISPAUD_BASE + 13)
#define DOUT_CLK_ABOX_UAIF0			(CLK_DISPAUD_BASE + 14)
#define DOUT_CLK_ABOX_UAIF2			(CLK_DISPAUD_BASE + 15)
#define DOUT_CLK_ABOX_UAIF3			(CLK_DISPAUD_BASE + 16)
#define PLL_OUT_AUD				(CLK_DISPAUD_BASE + 17)
#define UMUX_CLKCMU_DISPAUD_BUS			(CLK_DISPAUD_BASE + 18)

/* NUMBER FOR FSYS DRIVER STARTS FROM 250 */
#define CLK_FSYS_BASE				(250)
#define GATE_MMC_CARD				(CLK_FSYS_BASE + 0)
#define GATE_MMC_EMBD				(CLK_FSYS_BASE + 1)
#define GATE_MMC_SDIO				(CLK_FSYS_BASE + 2)
#define GATE_RTIC				(CLK_FSYS_BASE + 3)
#define GATE_SSS				(CLK_FSYS_BASE + 4)
#define GATE_USB20DRD_HSDRD			(CLK_FSYS_BASE + 5)
#define GATE_USB20DRD_USB			(CLK_FSYS_BASE + 6)
#define MMC_CARD				(CLK_FSYS_BASE + 7)
#define MMC_EMBD				(CLK_FSYS_BASE + 8)
#define MMC_SDIO				(CLK_FSYS_BASE + 9)
#define UMUX_CLKCMU_FSYS_BUS			(CLK_FSYS_BASE + 10)
#define UMUX_CLKCMU_FSYS_MMC_CARD		(CLK_FSYS_BASE + 11)
#define UMUX_CLKCMU_FSYS_MMC_EMBD		(CLK_FSYS_BASE + 12)
#define UMUX_CLKCMU_FSYS_MMC_SDIO		(CLK_FSYS_BASE + 13)

/* NUMBER FOR APM DRIVER STARTS FROM 300 */
#define CLK_APM_BASE				(300)
#define GATE_APM_SYS				(CLK_APM_BASE + 0)
#define GATE_APM_CPU				(CLK_APM_BASE + 1)
#define GATE_MAILBOX_APM2AP			(CLK_APM_BASE + 2)
#define GATE_MAILBOX_APM2CP			(CLK_APM_BASE + 3)
#define GATE_MAILBOX_APM2GNSS			(CLK_APM_BASE + 4)
#define GATE_MAILBOX_APM2WLBT			(CLK_APM_BASE + 5)
#define GATE_I2C_APM				(CLK_APM_BASE + 6)
#define GATE_SPEEDY_APM				(CLK_APM_BASE + 7)
#define GATE_WDT_APM				(CLK_APM_BASE + 8)
#define UMUX_CLKCMU_APM_BUS			(CLK_APM_BASE + 9)

/* NUMBER FOR G3D DRIVER STARTS FROM 320 */
#define CLK_G3D_BASE				(320)
#define GATE_AGPU_G3D				(CLK_G3D_BASE + 0)

/* NUMBER FOR CLKOUT PORT STARTS FROM 330 */
#define CLK_CLKOUT_BASE				(330)
#define OSCCLK_NFC				(CLK_CLKOUT_BASE + 0)
#define OSCCLK_AUD				(CLK_CLKOUT_BASE + 1)

/* NUMBER OF DVFS DRIVER STARTS FROM 340 */
#define CLK_DVFS_BASE				(340)
#define DFS_ABOX				(CLK_DVFS_BASE + 0)

/* must be greater than maximal clock id */
#define CLK_NR_CLKS				(340 + 1)

#define ACPM_DVFS_MIF				(0x0B040000)
#define ACPM_DVFS_INT				(0x0B040001)
#define ACPM_DVFS_CPUCL0			(0x0B040002)
#define ACPM_DVFS_CPUCL1			(0x0B040003)
#define ACPM_DVFS_G3D				(0x0B040004)
#define ACPM_DVFS_CAM				(0x0B040005)
#define ACPM_DVFS_DISP				(0x0B040006)
#define ACPM_DVFS_CP				(0x0B040007)

#endif	/* _DT_BINDINGS_CLOCK_EXYNOS_7872_H */