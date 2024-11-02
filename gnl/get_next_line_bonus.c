/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isegura- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:37:49 by isegura-          #+#    #+#             */
/*   Updated: 2024/10/25 14:24:06 by isegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_free(char *buffer, char *tmp)
{
	char	*save;

	save = ft_strjoin(buffer, tmp);
	if (!save)
	{
		free(buffer);
		return (NULL);
	}
	free(buffer);
	return (save);
}

char	*ft_line(char	*buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof (char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_read(int fd, char *buffer)
{
	char	*tmp;
	int		r;

	if (!buffer)
		buffer = ft_calloc(1, 1);
	tmp = ft_calloc(BUFFER_SIZE + 1, sizeof (char));
	if (!tmp)
		return (NULL);
	r = 1;
	while (r > 0 && !ft_strchr(buffer, '\n'))
	{
		r = read(fd, tmp, BUFFER_SIZE);
		if (r == -1)
		{
			free(tmp);
			free(buffer);
			return (NULL);
		}
		tmp[r] = 0;
		buffer = ft_free(buffer, tmp);
		if (r == 0)
			break ;
	}
	free(tmp);
	return (buffer);
}

char	*res_buffer(char *buffer)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	if (buffer[i] == '\n')
		i++;
	res = ft_calloc(ft_strlen(buffer) - i + 1, sizeof(char));
	while (buffer[i])
	{
		res[j] = buffer[i];
		i++;
		j++;
	}
	free(buffer);
	return (res);
}

char	*get_next_line(int fd)
{
	static char	*buffer[OPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = ft_read(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = ft_line(buffer[fd]);
	buffer[fd] = res_buffer(buffer[fd]);
	if (!line || *line == '\0')
	{
		free(line);
		free(buffer[fd]);
		buffer[fd] = NULL;
		return (NULL);
	}
	return (line);
}
