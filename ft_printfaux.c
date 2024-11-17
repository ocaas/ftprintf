/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfaux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:42:23 by olopez-s          #+#    #+#             */
/*   Updated: 2024/10/29 20:42:23 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pristrc(char *str, int j)
{
	int	i;

	i = 0;
	if (!str)
	{
		j += write (1, "(null)", 6);
		return (j);
	}
	while (str[i] != '\0')
	{
		j += write(1, &str[i], 1);
		i++;
	}
	return (j);
}

int	ft_printu(unsigned int n, int j)
{
	if (n > 9)
		j = ft_printu(n / 10, j);
	j = ft_putchar_fd((n % 10) + 48, 1, j);
	return (j);
}

int	ft_puthex(unsigned long long int n, int j)
{
	if (n >= 16)
		j = ft_puthex(n / 16, j);
	if (n % 16 < 10)
		j = ft_putchar_fd(n % 16 + '0', 1, j);
	else
		j = ft_putchar_fd(n % 16 + 'a' - 10, 1, j);
	return (j);
}

int	ft_puthexcap(unsigned long long int n, int j)
{
	if (n >= 16)
		j = ft_puthexcap(n / 16, j);
	if (n % 16 < 10)
		j = ft_putchar_fd(n % 16 + '0', 1, j);
	else
		j = ft_putchar_fd(n % 16 + 'A' - 10, 1, j);
	return (j);
}

int	ft_printp(void *p, int j)
{
	unsigned long long	point;

	point = (unsigned long long)p;
	if (point == 0)
	{
		j += write (1, "(nil)", 5);
		return (j);
	}
	j = ft_putstr_fd("0x", 1, j);
	j = ft_puthex(point, j);
	return (j);
}
