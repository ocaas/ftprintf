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

#include "libft.h"

int	ft_putchar(int a)
{
	write (1, &a, 1);
}

int	ft_pristrc(char *str)
{
	int i;

	i = 0;
	if(!str)
	{
		write(1, "(NULL)", 6);
		return(6);
	}
	while (str[i] != '\0')
	{
		write(1, str[i], 1);
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
	{
		i += ft_printu(n / 10);
		i += ft_printu(n % 10 + 48);
	}
	//HAY QUE IMPRIMIR
	return(i);
}

int ft_puthex (unsigned long long int n, bool x)
{
	int i;

	i = 0;

	if (n > 16)
		ft_puthex(n / 16);
	(n % 16);
	if (n > 9)
	{
		if (x)
			putchar(n + 55);
		else
			putchar(n + 87);
	}

}

 
	
	
	
	
	//instead of base 10 change to0 base 16 in putnbr.
	//if its more than 9 it transforms into a letter 
	// 'a' - 10 = 87
	if (n >= 10)
	{
		fd_putdex_fd (n / 16);
		fd_putdex_fd (n % 16);
	}