/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:49:37 by isegura-          #+#    #+#             */
/*   Updated: 2024/09/13 15:37:41 by isegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	*spc;

	j = 0;
	if (min >= max)
		return (NULL);
	spc = (int *)malloc(sizeof(int) * (max - min));
	spc[j] = min;
	while (min < max)
	{
		spc[j++] = min++;
	}
	return (spc);
}
