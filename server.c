/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:58:21 by mpimenta          #+#    #+#             */
/*   Updated: 2022/08/10 12:54:40 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/ft_printf.h"
#include <signal.h>
#include <stdlib.h>

void handle_signal(int sig)
{
	static char	c;
	static int	i;

	if (!c)
		c = 0;
	if (sig == SIGUSR2)
	{
		c = c << 1;
		i++;
	}
	else
	{
		c = c << 1;
		c = c | 1;
		i++;
	}
	if (i == 8)
	{
		write(1, &c, 1);
		i = 0;
	}
}

int main(void)
{
    int		pid;

	pid = getpid();
	ft_printf("PID --> %d\n", pid);
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		sleep(1);
	return (0);
}
