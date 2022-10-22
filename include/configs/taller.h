/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2022 Alejandro Soto <alejandro@34project.org>
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#define CONFIG_SYS_HZ_CLOCK     100000000    /* Clocked at 100Mhz */

/*
 * MEMORY ORGANIZATION
 * -Monitor at top of sdram.
 * -The heap is placed below the monitor
 * -The stack is placed below the heap (&grows down).
 */
#define CONFIG_SYS_SDRAM_BASE		0x00000000
#define CONFIG_SYS_SDRAM_SIZE		0x20000000
#define CONFIG_SYS_INIT_RAM_ADDR    0x00000000
#define CONFIG_SYS_INIT_RAM_SIZE    0x20000000

#define CONFIG_MONITOR_IS_IN_RAM
#define CONFIG_SYS_MONITOR_LEN		0x80000	/* Reserve 512k */

#endif /* __CONFIG_H */
