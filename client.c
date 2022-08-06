#include "./libft/libft.h"
#include <stdio.h>

static void *printing(char str, int pid)
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
	printf("%d\n", pid);
	printf("%s\n", bits);
}

int main(int argc, char *argv[])
{
	int i;
	size_t len;
	char *sending;
	int pid;

	i = 0;
	pid = ft_atoi(argv[1]);
	len = ft_strlen(argv[2]);
	sending = malloc(sizeof(char) * (len + 1));
	sending[len + 1] = '\0';
	sending = argv[2];
	printf("%d\n", argc);
	while (sending[i] != '\0')
	{
		printing(sending[i], pid);
		i++;
	}
	printf("\n");
	return (0);
}
