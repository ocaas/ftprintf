/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 03:40:13 by olopez-s          #+#    #+#             */
/*   Updated: 2024/11/16 03:40:13 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_pristrc(char *str);
int		ft_printu(unsigned int n);
int		ft_puthex(unsigned long long int n, char mod);
int		ft_printp(void *p);
int		ft_printf(char const *str, ...);
void	ft_converse(va_list args, int i);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlen(const char *str);
void	ft_putchar_fd(char c);

#endif