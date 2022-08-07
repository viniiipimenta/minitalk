/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:36:08 by mpimenta          #+#    #+#             */
/*   Updated: 2022/06/20 09:19:43 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int nb)
{
	int		len;
	char	*str;

	str = ft_itoa(nb);
	len = ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
