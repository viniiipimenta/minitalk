/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_h.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:08:22 by mpimenta          #+#    #+#             */
/*   Updated: 2022/06/20 10:27:56 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	n_len(unsigned long n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n = (n / 16);
		count++;
	}
	return (count);
}

char	*ft_itoa_h(unsigned long n, char *hexa)
{
	int		len;
	char	*str;

	len = n_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		str[len--] = hexa[n % 16];
		n = (n / 16) * (-1);
	}
	while (n)
	{
		str[len--] = hexa[n % 16];
		n = (n / 16);
	}
	return (str);
}
