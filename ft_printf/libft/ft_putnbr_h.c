/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_h.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:02:37 by mpimenta          #+#    #+#             */
/*   Updated: 2022/06/20 09:22:18 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_h(unsigned int nb, char *hexa)
{
	int		len;
	char	*str;

	str = ft_itoa_h(nb, hexa);
	len = ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
