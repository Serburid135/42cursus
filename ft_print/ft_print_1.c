/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:49:26 by isegura-          #+#    #+#             */
/*   Updated: 2024/10/25 12:11:14 by isegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	int	err;

	err = write (1, &c, 1);
	if (err == -1)
		return (-1);
	return (1);
}

int	ft_printstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (ft_printstr("(null)"));
	while (s[i])
	{
		ft_printchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_printvoid(void *s)
{
	unsigned long	ss;

	ss = (unsigned long)s;
	if (ss == 0)
	{
		return (ft_printstr("(nil)"));
	}
	write(1, "0x", 2);
	return (ft_putnbr_hex_p (ss) + 2);
}

int	ft_printint(int nbr)
{
	int	len;

	len = 0;
	if (nbr == -2147483648)
		return (ft_printstr("-2147483648"));
	if (nbr == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
		len = len + 1;
	}
	if (nbr != 0)
		len = len + ft_putnbr_dec(nbr);
	return (len);
}

int	ft_printuint(unsigned int nbr)
{
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nbr == 4294967295)
		return (ft_printstr("4294967295"));
	return (ft_putnbr_dec_u(nbr));
}
