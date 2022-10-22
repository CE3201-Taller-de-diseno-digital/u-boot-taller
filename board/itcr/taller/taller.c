#include <cpu_func.h>
#include <asm/global_data.h>

DECLARE_GLOBAL_DATA_PTR;

int board_init(void)
{
	icache_enable();
	return 0;
}

int dram_init(void)
{
	return 0;
}
