#include "./ft_printf/ft_printf.h"
#include <signal.h>

void handle_signal(int sig)
{
	static int byte;
	static int bit_i;

	if (!bit_i || bit_i > 8)
	{
		bit_i = 1;
		byte = 0;
	}
	byte = byte << 1;
	if (sig == SIGUSR1)
		byte++;
	if (bit_i == 8)
		write(1, &byte, 1);
	bit_i++;
}

int main(void)
{
    int     pid;

    pid = getpid();
    ft_printf("PID --> %d\n", pid);
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
    return (0);
}