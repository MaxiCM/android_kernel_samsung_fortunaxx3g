/******************************************************************************
* (c) COPYRIGHT 2013 RAONTECH, Inc. ALL RIGHTS RESERVED.
*
* TITLE      : RAONTECH TV RF ADC data header file.
*
* FILENAME   : raontv_rf_adc_data.h
*
* DESCRIPTION:
*  All the declarations and definitions necessary for the setting of RF ADC.
*
******************************************************************************/
/******************************************************************************
* REVISION HISTORY
*
*    DATE	  	  NAME				REMARKS
* ----------  -------------    ------------------------------------------------
* 07/26/2013  Yang, Maverick   Created.
******************************************************************************/

#if defined(RAONTV_CHIP_PKG_QFN)
static const U8 g_atLNAtbl[5][18] = {

	/* ICONLNA_HG_NORM	LNA_VAS_CON	ICONLNA_MG_NORM	LNAICON_MGTR	U_LNACAP_I2C
	   U_LNACAPL_I2C	LNACAP_MG	LNACAP_VLG	UHF_QCAP_HG	UHF_FCAP_HG	
	   UHF_QCAP_MG	UHF_FCAP_MG	UHF_QCAP_LG	UHF_FCAP_LG	UHF_QCAP_VLG	
	   UHF_FCAP_VLG	U_FEED_EN	RFEED_U*/ 
	/*470 - 500*/{0x13,0x02,0x0B,0x00,0x0E,0x06,0x0E,0x06,0x1F,0x07,0x0F,0x00,0x1F,0x00,0x07,0x05,0x00,0x00},
	/*500 - 530*/{0x12,0x02,0x0B,0x00,0x07,0x06,0x07,0x06,0x1F,0x01,0x0F,0x00,0x1F,0x00,0x07,0x05,0x00,0x00},
	/*530 - 630*/{0x12,0x02,0x0B,0x00,0x03,0x06,0x05,0x06,0x1F,0x00,0x0F,0x00,0x1F,0x00,0x07,0x05,0x00,0x00},
	/*630 - 710*/{0x12,0x02,0x0B,0x00,0x02,0x06,0x00,0x06,0x1F,0x00,0x1F,0x00,0x1F,0x00,0x07,0x05,0x00,0x00},
	/*710 - 810*/{0x12,0x02,0x10,0x03,0x00,0x06,0x00,0x06,0x1F,0x00,0x1F,0x00,0x1F,0x00,0x07,0x05,0x00,0x00}
};
#else
static const U8 g_atLNAtbl[6][18] = {

	/* ICONLNA_HG_NORM	LNA_VAS_CON	ICONLNA_MG_NORM	LNAICON_MGTR	U_LNACAP_I2C
	   U_LNACAPL_I2C	LNACAP_MG	LNACAP_VLG	UHF_QCAP_HG	UHF_FCAP_HG	
	   UHF_QCAP_MG	UHF_FCAP_MG	UHF_QCAP_LG	UHF_FCAP_LG	UHF_QCAP_VLG	
	   UHF_FCAP_VLG	U_FEED_EN	RFEED_U*/ 
	/*470 - 510*/{0x0F,0x02,0x0B,0x00,0x0D,0x06,0x0B,0x05,0x0A,0x04,0x07,0x03,0x05,0x03,0x05,0x02,0x00,0x00},
	/*510 - 550*/{0x0D,0x02,0x0B,0x00,0x05,0x06,0x07,0x05,0x08,0x03,0x03,0x03,0x04,0x02,0x04,0x02,0x00,0x00},
	/*550 - 590*/{0x0C,0x02,0x0B,0x00,0x03,0x06,0x03,0x05,0x07,0x03,0x03,0x00,0x02,0x02,0x02,0x01,0x00,0x00},
	/*590 - 670*/{0x0C,0x02,0x0B,0x00,0x02,0x06,0x00,0x05,0x07,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00},
	/*670 - 709*/{0x0C,0x02,0x0B,0x00,0x02,0x06,0x00,0x05,0x07,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00},
	/*709 - 810*/{0x0C,0x02,0x10,0x03,0x00,0x06,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};
#endif

#if (RTV_SRC_CLK_FREQ_KHz == 19200)
static const U8 g_abAdcClkSynTbl[MAX_NUM_RTV_ADC_CLK_FREQ_TYPE][6] = {
	{0x04, 0x50, 0x0B, 0x13, 0x0E, 0x2E}, /* Based 19.2MHz, 8MHz */
	{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, /* Based 19.2MHz, 8.192MHz  Unsupport Clock */
	{0x04, 0x5A, 0x0C, 0x13, 0x0E, 0x2E}, // Based 19.2MHz, 9MHz
	{0x04, 0x60, 0x0D, 0x13, 0x0E, 0x2E}  // Based 19.2MHz, 9.6MHz
};

static const struct RTV_ADC_CFG_INFO g_atOfdmCfgTbl_ISDBT[] = {
	 /* TNCO        PNCO1        PNCO2    CFREQ_GAIN  GAIN	  */
	 {0x10410420, 0xF50624E0, 0x1B6C8B40, 0x208208, 0x41}, /* 8MHz */
	 {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFF, 0xFF}, /* 8.192MHz.  Unsupport Clock */
	 {0x0E72AE55, 0xF63E59AB, 0x18607BC7, 0x1CE55C, 0x39}, /* 9MHz */
	 {0x0D8B8366, 0xF6DA7417, 0x16DA73FB, 0x1B1706, 0x36}, /* 9.6MHz */
};

static const E_RTV_ADC_CLK_FREQ_TYPE g_aeAdcClkTypeTbl_ISDBT[] = {	
	RTV_ADC_CLK_FREQ_8_MHz,
	RTV_ADC_CLK_FREQ_9_MHz,
	RTV_ADC_CLK_FREQ_9_6_MHz	
};

#elif (RTV_SRC_CLK_FREQ_KHz == 32000)
static const U8 g_abAdcClkSynTbl[MAX_NUM_RTV_ADC_CLK_FREQ_TYPE][6] = {
	{0x08, 0x60, 0x0D, 0x13, 0x0E, 0x2E}, // Based 32MHz,	8MHz	   External Clock27
	{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, // Based 32MHz, 8.192MHz  /* Unsupport Clock */
	{0x08, 0x6C, 0x0F, 0x13, 0x0E, 0x2E}, // Based 32MHz,	9MHz	   External Clock28
	{0x05, 0x48, 0x0A, 0x13, 0x0E, 0x2E}  // Based 32MHz,	9.6MHz	   External Clock29
};

static const struct RTV_ADC_CFG_INFO g_atOfdmCfgTbl_ISDBT[] = {
	/* TNCO 	   PNCO1	  PNCO2	 CFREQ_GAIN  GAIN	 */
	 {0x10410420, 0x10000000, 0x00, 0x208208, 0x41}, //8MHz
	 {0xFFFFFFFF, 0xFFFFFFFF, 0xFF, 0xFFFFFF, 0xFF},   // Based 32MHz, 8.192MHz  /* Unsupport Clock */
	 {0x0E72AE55, 0x0E38E38E, 0x00, 0x1CE55C, 0x39}, //9MHz
	 {0x0D8B8366, 0x0D55554C, 0x00, 0x1B1706, 0x36}, //9.6MHz
};

static const E_RTV_ADC_CLK_FREQ_TYPE g_aeAdcClkTypeTbl_ISDBT[] = {	
	RTV_ADC_CLK_FREQ_8_MHz,	
	RTV_ADC_CLK_FREQ_9_MHz,
	RTV_ADC_CLK_FREQ_9_6_MHz
};

#elif (RTV_SRC_CLK_FREQ_KHz == 36000)
static const U8 g_abAdcClkSynTbl[MAX_NUM_RTV_ADC_CLK_FREQ_TYPE][6] = {
	{0x09, 0x60, 0x0D, 0x13, 0x0E, 0x2E}, // Based 36MHz, 8MHz	   External Clock33
	{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, // Based 36MHz,	8.192MHz  /* Unsupport */
	{0x09, 0x6C, 0x0F, 0x13, 0x0E, 0x2E}, // Based 36MHz, 9MHz	   External Clock34
	{0x05, 0x40, 0x08, 0x13, 0x0E, 0x2E}  // Based 36MHz, 9.6MHz	   External Clock35
};

static const struct RTV_ADC_CFG_INFO g_atOfdmCfgTbl_ISDBT[] = {
	/* TNCO 	   PNCO1	  PNCO2	 CFREQ_GAIN  GAIN	 */
	 {0x10410420, 0x10000000, 0x00, 0x208208, 0x41}, //8MHz
	 {0xFFFFFFFF, 0xFFFFFFFF, 0xFF, 0xFFFFFF, 0xFF},   // Based 36MHz, 8.192MHz  /* Unsupport Clock */
	 {0x0E72AE55, 0x0E38E38E, 0x00, 0x1CE55C, 0x39}, //9MHz
	 {0x0D8B8366, 0x0D55554C, 0x00, 0x1B1706, 0x36}, //9.6MHz
};

static const E_RTV_ADC_CLK_FREQ_TYPE g_aeAdcClkTypeTbl_ISDBT[] = {	
	RTV_ADC_CLK_FREQ_8_MHz,	
	RTV_ADC_CLK_FREQ_9_MHz,
	RTV_ADC_CLK_FREQ_9_6_MHz	
};
#else
	#error "Unsupport external clock freqency!"
#endif

