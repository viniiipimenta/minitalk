/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:39:39 by mpimenta          #+#    #+#             */
/*   Updated: 2022/08/07 15:00:02 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_putnbr_fd(int nb);
int		ft_putnbr_u(unsigned int nb);
char	*ft_itoa_u(unsigned int nb);
int		ft_putnbr_h(unsigned int nb, char *hexa);
char	*ft_itoa_h(unsigned long nb, char *hexa);
int		ft_putnbr_p(unsigned long *nb, char *hexa);
#endif
