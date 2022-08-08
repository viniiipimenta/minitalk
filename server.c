#include "./ft_printf/ft_printf.h"
#include <signal.h>

void handle_signal(int sig)
{
	static int byte;
	static int bit;

	if (!bit || bit > 8)
	{
		bit = 1;
		byte = 0;
	}
	byte = byte << 1;
	if (sig == SIGUSR1)
		byte++;
	if (bit == 8)
		write(1, &byte, 1);
	bit++;
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