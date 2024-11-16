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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int		ft_pristrc(char *str, int j);
int		ft_printu(unsigned int n, int j);
int		ft_puthex(unsigned long long int n, int j);
int		ft_printp(void *p, int j);
int		ft_printf(char const *str, ...);
int		ft_converse(int i, va_list args, int j);
int		ft_putnbr_fd(int n, int fd, int j);
int		ft_strlen(const char *str);
int		ft_putchar_fd(char c, int fd, int j);
int		ft_putstr_fd(char *s, int fd, int j);

#endif