/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxextra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:21:43 by olopez-s          #+#    #+#             */
/*   Updated: 2024/11/06 23:21:43 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd, int j)
{
	if (n == -2147483648)
	{
		j = ft_putchar_fd('-', fd, j);
		j = ft_putchar_fd('2', fd, j);
		n = 147483648;
	}
	else if (n < 0)
	{
		j = ft_putchar_fd('-', fd, j);
		n = n * -1;
	}
	if (n > 9)
	{
		j = ft_putnbr_fd(n / 10, fd, j);
		j = ft_putnbr_fd(n % 10, fd, j);
	}
	else
		j = ft_putchar_fd(n + '0', fd, j);
	return (j);
}

int	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

int	ft_putchar_fd(char c, int fd, int j)
{
	j += write(fd, &c, 1);
	return (j);
}

int	ft_putstr_fd(char *s, int fd, int j)
{
	if (s == NULL)
	{
		j += write(1, "(null)", 6);
		return (j);
	}
	j += write(fd, s, ft_strlen(s));
	return (j);
}
