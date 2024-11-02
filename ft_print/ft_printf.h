/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:55:56 by isegura-          #+#    #+#             */
/*   Updated: 2024/10/25 12:12:27 by isegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(char const *s, ...);
int	ft_format(char c, va_list *ap);
int	ft_printchar(char c);
int	ft_printstr(char *s);
int	ft_printvoid(void *s);
int	ft_printint(int nbr);
int	ft_printuint(unsigned int nbr);
int	ft_print_spc(char c);
int	ft_putnbr_dec(int num);
int	ft_putnbr_hex(unsigned int num, int cap);
int	ft_putnbr_hex_p(unsigned long num);
int	ft_putnbr_dec_u(unsigned int num);

#endif
