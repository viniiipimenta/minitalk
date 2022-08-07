#include "./ft_printf/ft_printf.h"
#include <signal.h>

static void send_signal(char *bits, int pid)
{
	int i;

	i = 0;
	while (bits[i])
	{
		if (bits[i] == 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
		usleep(80);
	}
}

static void convert(char str, int pid)
{
	char bits[9];
	size_t j;

	j = 8;
	while (j)
	{
		bits[--j] = (str % 2) + 48;
		str = str / 2;
	}
	bits[8] = '\0';
	send_signal(bits, pid);
}

int main(int argc, char *argv[])
{
	int i;
	size_t len;
	char *str;
	int pid;

	if (argc < 3 || argc > 4)
		return (0);
	i = 0;
	pid = ft_atoi(argv[1]);
	len = ft_strlen(argv[2]);
	str = malloc(sizeof(char) * (len + 1));
	str = argv[2];
	str[len + 1] = '\0';
	while (str[i] != '\0')
	{
		convert(str[i], pid);
		i++;
	}
	return (0);
}
