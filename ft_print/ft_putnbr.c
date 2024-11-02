/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:27:01 by isegura-          #+#    #+#             */
/*   Updated: 2024/10/25 13:39:06 by isegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_dec(int num)
{
	char	*p;
	int		len;
	char	buffer[10];
	int		i;

	i = 0;
	p = "0123456789";
	while (num > 0)
	{
		buffer[i++] = p[num % 10];
		num = num / 10;
	}
	len = i;
	while (i--)
		ft_printchar(buffer[i]);
	return (len);
}

int	ft_putnbr_hex(unsigned int num, int cap)
{
	char	*p;
	int		len;
	char	buffer[16];
	int		i;

	i = 0;
	if (cap == 1)
		p = "0123456789ABCDEF";
	else
		p = "0123456789abcdef";
	if (num == 0)
	{
		return (ft_printstr("0"));
	}
	while (num > 0)
	{
		buffer[i++] = p[num % 16];
		num = num / 16;
	}
	len = i;
	while (i--)
		ft_printchar(buffer[i]);
	return (len);
}

int	ft_putnbr_hex_p(unsigned long num)
{
	char	*p;
	int		len;
	char	buffer[16];
	int		i;

	i = 0;
	p = "0123456789abcdef";
	while (num > 0)
	{
		buffer[i++] = p[num % 16];
		num = num / 16;
	}
	len = i;
	while (i--)
		ft_printchar(buffer[i]);
	return (len);
}

int	ft_putnbr_dec_u(unsigned int num)
{
	char	*p;
	int		len;
	char	buffer[10];
	int		i;

	i = 0;
	p = "0123456789";
	while (num > 0)
	{
		buffer[i++] = p[num % 10];
		num = num / 10;
	}
	len = i;
	while (i--)
		ft_printchar(buffer[i]);
	return (len);
}
