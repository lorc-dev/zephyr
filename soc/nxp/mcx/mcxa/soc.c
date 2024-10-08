/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief System/hardware module for nxp_mcxa platform
 *
 * This module provides routines to initialize and support board-level
 * hardware for the nxp_mcxa platform.
 */

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/init.h>
#include <soc.h>

#ifdef CONFIG_PLATFORM_SPECIFIC_INIT

void z_arm_platform_init(void)
{
	SystemInit();
}

#endif
