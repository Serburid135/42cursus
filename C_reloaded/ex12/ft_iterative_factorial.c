/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:30:42 by isegura-          #+#    #+#             */
/*   Updated: 2024/09/15 13:24:04 by isegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb > 0)
		{
			res *= nb;
			nb -= 1;
		}
		return (res);
	}
	else
		return (0);
}
