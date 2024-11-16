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

#include "printf.h"

int	ft_pristrc(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write (1, "(NULL)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		write (1, str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printu(unsigned int n)
{
	char	j;
	int		i;

	i = 0;
	if (n > 9)
		i += ft_printu (n / 10);
	j = ft_printu (n % 10 + 48);
	write (1, &j, 1)
	i++;
	return (i);
}

int	ft_puthex(unsigned long long int n, char mod)
{
	int		i;
	char	num;

	i = 0;
	if (n > 16)
		i += ft_puthex(n / 16);
	if (n < 9)
		i += ft_puthex(n + 48, 1);
	num = (n % 16);
	if (n > 9)
	{
		if (mod == 'x')
			ft_puthex(n + 55); //might have to assign to i (i += blabla)
		else
			ft_puthex(n + 87);
	}
	write (1, &num, 1);
	return (i);
}

int	ft_printp(void *p)
{
	int i;
	unsigned long long	point;
	
	i = 0;
		i + =write (1, &0x, 1);
	if (!*p)
	{
		write (1, &'(NIL)', 5);
		return (5);
	}
	i += ft_printp(*p / 16);
	i += ft_printp(*p % 16);
	return (i);
}


	//instead of base 10 change to0 base 16 in putnbr.
	//if its more than 9 it transforms into a letter 
	// 'a' - 10 = 87
/* 	if (n >= 10)
	{
		fd_putdex_fd (n / 16);
		fd_putdex_fd (n % 16);
	} */