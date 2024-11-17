/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:08:40 by olopez-s          #+#    #+#             */
/*   Updated: 2024/10/28 21:08:40 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_converse(int i, va_list args, int j)
{
	if (i == 'c')
		j = ft_putchar_fd(va_arg(args, int), 1, j);
	else if (i == 's')
		j = ft_pristrc(va_arg(args, char *), j);
	else if (i == 'p')
		j = ft_printp(va_arg(args, void *), j);
	else if (i == 'd' || i == 'i')
		j = ft_putnbr_fd(va_arg(args, int), 1, j);
	else if (i == 'u')
		j = ft_printu(va_arg(args, unsigned int), j);
	else if (i == 'x')
		j = ft_puthex(va_arg(args, unsigned int), j);
	else if (i == 'X')
		j = ft_puthexcap(va_arg(args, unsigned int), j);
	else if (i == '%')
		j = ft_putchar_fd('%', 1, j);
	return (j);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		j;
	va_list	args;

	va_start(args, str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' )
		{
			i++;
			j = ft_converse(str[i], args, j);
		}
		else
			j = ft_putchar_fd(str[i], 1, j);
		i++;
	}
	va_end(args);
	return (j);
}
