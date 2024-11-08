/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:27:23 by isegura-          #+#    #+#             */
/*   Updated: 2024/09/15 12:54:39 by isegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	l;
	char	t;

	l = 'N';
	t = 'P';
	if (n < 0)
	{
		ft_putchar(l);
	}
	else
	{
		ft_putchar(t);
	}
}
