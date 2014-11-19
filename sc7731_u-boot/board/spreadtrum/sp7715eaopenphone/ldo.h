#ifndef __LDO_H__
#define __LDO_H__

struct ldo_lowpower_cfg fixed_ldo_cfg[] = {
	{ DCDC_BG,		LP_EN,		SLP_LP_MODE,	BY_XTL_ALL,	NO_USED,	0 },
	{ LDO_VDD18,		LP_EN,		SLP_NO_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_VDD28,		LP_EN,		SLP_NO_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_VDD25,		LP_EN,		SLP_PD_MODE,	BY_XTL_ALL,	NO_USED,	0 },
	{ LDO_CON,		LP_EN,		SLP_PD_MODE,	BY_XTL_ALL,	NO_USED,	0 },
	{ LDO_DCXO,		LP_DIS,		SLP_NO_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_EMMCIO,	LP_EN,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_EMMCCORE,	LP_EN,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_RF0,		LP_EN,		SLP_PD_MODE,	BY_XTL_ALL,	BY_EXT_XTL_ALL, 0 },
	{ DCDC_CORE,	LP_EN,		SLP_NO_MODE,	BY_XTL_ALL,	NO_USED,	0 },
	{ DCDC_ARM,		LP_EN,		SLP_PD_MODE,	NO_USED,	NO_USED,	1 },
	{ DCDC_MEM,		LP_EN,		SLP_NO_MODE,	NO_USED,	NO_USED,	0 },
	{ DCDC_GEN,		LP_EN,		SLP_NO_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_SD,		LP_DIS,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_SIM0,		LP_DIS,		SLP_NO_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_SIM1,		LP_DIS,		SLP_NO_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_SIM2,		LP_DIS,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_CAMA,		LP_DIS,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_CAMD,		LP_DIS,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_CAMIO,		LP_DIS,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_CAMMOT,	LP_DIS,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_USB,		LP_DIS,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_CLSG,		LP_DIS,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ DCDC_WPA,		LP_DIS,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_LPREF,		LP_EN,		SLP_PD_MODE,	NO_USED,	NO_USED,	0 },
	{ LDO_XO,		NO_USED,	NO_USED,		NO_USED,	NO_USED,	0 },
	{ RESERVED_NUM, 0,			0,				0,			0,			0 }
};

#endif