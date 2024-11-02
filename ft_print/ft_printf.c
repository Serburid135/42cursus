/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:57:14 by isegura-          #+#    #+#             */
/*   Updated: 2024/10/23 17:44:05 by isegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list *ap)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_printchar(va_arg(*ap, int));
	else if (c == 's')
		len += ft_printstr(va_arg(*ap, char *));
	else if (c == 'p')
		len += ft_printvoid(va_arg(*ap, void *));
	else if (c == 'd' || c == 'i')
		len += ft_printint(va_arg(*ap, int));
	else if (c == 'u')
		len += ft_printuint(va_arg(*ap, unsigned int));
	else if (c == 'x')
		len += ft_putnbr_hex(va_arg(*ap, unsigned int), 0);
	else if (c == 'X')
		len += ft_putnbr_hex(va_arg(*ap, unsigned int), 1);
	else if (c == '%')
		len += ft_printchar('%');
	return (len);
}

int	ft_printf(char const *s, ...)
{
	va_list	ap;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start (ap, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1])
		{
			len += ft_format(s[i + 1], &ap);
			i++;
		}
		else if (s[i] == '%' && !s[i + 1])
			return (-1);
		else
			len += ft_printchar(s[i]);
		i++;
	}
	va_end (ap);
	return (len);
}
