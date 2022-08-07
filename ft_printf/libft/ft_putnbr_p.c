/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:02:47 by mpimenta          #+#    #+#             */
/*   Updated: 2022/06/20 11:29:21 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_p(unsigned long *nb, char *hexa)
{
	int				len;
	char			*str;
	unsigned long	nbr;

	nbr = (unsigned long) nb;
	str = ft_itoa_h(nbr, hexa);
	len = ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
