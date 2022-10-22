#include <init.h>
#include <reset.h>

int cleanup_before_linux(void)
{
	return 0;
}

void __attribute__((noreturn)) reset_cpu(void)
{
	//TODO
	while (1);
}

int print_cpuinfo(void)
{
	printf("CPU:   ARM810 (armv4)\n");
	return 0;
}
