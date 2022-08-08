/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:58:36 by mpimenta          #+#    #+#             */
/*   Updated: 2022/08/08 14:53:18 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/ft_printf.h"
#include <signal.h>

void send_signal(char *bits, int pid)
{
	int i;

	i = 0;
	while (bits[i])
	{
		if (bits[i] == '1')
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
		usleep(200);
	}
}

void convert(char str, int pid)
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
	int pid;

	if (argc != 3)
		return (0);
	i = 0;
	pid = ft_atoi(argv[1]);
	while (argv[2][i] != '\0')
	{
		convert(argv[2][i], pid);
		i++;
	}
	return (0);
}
