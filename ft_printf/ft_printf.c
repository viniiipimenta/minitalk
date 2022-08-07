/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:38:15 by mpimenta          #+#    #+#             */
/*   Updated: 2022/06/21 13:56:43 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_content(const char *str, int i, va_list cont)
{
	char	ret;

	if (str[i + 1] == '%')
		return (ft_putchar_fd(str[i + 1], 1));
	else if (str[i + 1] == 'c')
		return (ft_putchar_fd(va_arg(cont, int), 1));
	else if (str[i + 1] == 's')
		return (ft_putstr_fd(va_arg(cont, char *), 1));
	else if (str[i + 1] == 'i' || str[i + 1] == 'd')
		return (ft_putnbr_fd(va_arg(cont, int)));
	else if (str[i + 1] == 'u')
		return (ft_putnbr_u(va_arg(cont, unsigned int)));
	else if (str[i + 1] == 'x')
		return (ft_putnbr_h(va_arg(cont, unsigned int), "0123456789abcdef"));
	else if (str[i + 1] == 'X')
		return (ft_putnbr_h(va_arg(cont, unsigned int), "0123456789ABCDEF"));
	else if (str[i + 1] == 'p')
	{
		ret = ft_putstr_fd("0x", 1);
		ret += ft_putnbr_p(va_arg(cont, unsigned long *),
				"0123456789abcdef");
		return (ret);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	cont;
	int		ret;
	int		i;

	i = 0;
	ret = 0;
	va_start(cont, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			ret = ret + ft_print_content(str, i, cont);
			i++;
		}
		else
			ret = ret + ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(cont);
	return (ret);
}
