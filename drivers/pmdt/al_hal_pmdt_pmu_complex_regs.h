/*
 * Copyright 2018, Amazon.com, Inc. or its affiliates. All Rights Reserved
 */

/**
 *  @{
 * @file   al_hal_pmdt_pmu_complex_regs.h
 *
 * @brief pmdt_pmu_complex registers
 *
 * This file was auto-generated by RegGen v1.2.1
 *
 */

#ifndef __AL_HAL_PMDT_PMU_COMPLEX_REGS_H__
#define __AL_HAL_PMDT_PMU_COMPLEX_REGS_H__

#include "al_hal_plat_types.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Unit Registers
 */

struct al_pmdt_pmu_complex_regs {
	/* [0x0] PMU - upto 32 event counters, consumes 4KB */
	uint32_t pmu[1024];
	/* [0x1000] first axi latency monitor */
	uint32_t axi_monitor_0[256];
	/* [0x1400] second axi latency monitor */
	uint32_t axi_monitor_1[256];
	/* [0x1800] auxiliary regfile serving the tracing ELAs, 64 bytes total (16 registers) */
	uint32_t ela_config[16];
	/* [0x1840] */
	uint32_t rsrvd_0[496];
	/* [0x2000] first ela tracer */
	uint32_t ela_0[1024];
	/* [0x3000] second ela tracer */
	uint32_t ela_1[1024];
	/* [0x4000] */
	uint32_t rsrvd_1[12288];
};


/*
 * Registers Fields
 */

#ifdef __cplusplus
}
#endif

#endif

/** @} */
