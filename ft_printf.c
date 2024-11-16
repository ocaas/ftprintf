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

#include "printf.h"

void	ft_converse(va_list args, int i)
{
	if (i == 'c')
		ft_putchar_fd(va_arg(args, char), 1);
	else if (i == 's')
		ft_pristrc(va_arg(args, char *), 1);
	else if (i == 'p')
		ft_printp(va_arg(args, int), 1);
	else if (i == 'd' || i == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (i == 'u')
		ft_printu(va_arg(args, unsigned int), 1);
	else if (i == 'x')
		ft_puthex(va_arg(args, unsigned int), 1);
	else if (i == 'X')
		ft_puthex(va_arg(args, unsigned int), 1);
	else if (i == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	args;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' ) //tengo que reviar lo que va despues del %, puede que no venga nada
		{
			i++;
			ft_converse (str[i]);
		}
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
}
