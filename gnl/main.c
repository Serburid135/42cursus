/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:22:33 by isegura-          #+#    #+#             */
/*   Updated: 2024/11/02 12:42:40 by isegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	//if (argc == 1)
	//	fd = 0;
	//else
	if (argc == 2)
	{
//	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (1);
//	}
	//line = get_next_line(fd);
        while ((line = get_next_line(fd)))
        {
               // free(line);
                printf("%s", line);
				free(line);
        }
	//if (fd != 0)
	//{
		close(fd);
	}
	return (0);
}
