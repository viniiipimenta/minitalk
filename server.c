#include "./ft_printf/ft_printf.h"
#include <signal.h>

int main(void)
{
    int     pid;
	char	printing;
    char    bits[9] = "01110100\0";

    pid = getpid();
    ft_printf("PID --> %d\n", pid);
	printing = 0;
    if (bits[7] == '1')
			printing = printing + 1;
	if (bits[6] == '1')
		printing = printing + 2;
	if (bits[5] == '1')
		printing = printing + 4;
	if (bits[4] == '1')
		printing = printing + 8;
	if (bits[3] == '1')
		printing = printing + 16;
	if (bits[2] == '1')
		printing = printing + 32;
	if (bits[1] == '1')
		printing = printing + 64;
	if (bits[0] == '1')
		printing = printing + 128;
    ft_printf("%c\n", printing);
    return (0);
}