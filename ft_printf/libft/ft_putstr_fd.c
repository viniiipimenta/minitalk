/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:38:02 by mpimenta          #+#    #+#             */
/*   Updated: 2022/06/20 09:24:10 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	size_t	j;

	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	j = 0;
	while (s[j] != '\0')
	{
		ft_putchar_fd(s[j], fd);
		j++;
	}
	return (ft_strlen(s));
}
