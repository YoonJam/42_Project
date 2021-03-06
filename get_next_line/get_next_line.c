/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:10:29 by hyyoon            #+#    #+#             */
/*   Updated: 2021/10/17 16:07:22 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_newline_index(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str++ == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		buf[BUFFER_SIZE + 1];
	int			num_read;
	int			index;
	char		*result;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	while (1)
	{
		num_read = read(fd, buf, BUFFER_SIZE);
		if (num_read <= 0)
			break ;
		buf[num_read] = '\0';
		save = ft_strjoin(save, buf);
		index = get_newline_index(save);
		if (index >= 0)
		{
			result = split(&save, index);
			return (result);
		}
	}
	result = finish(&save, num_read);
	return (result);
}

char	*finish(char **save, int num_read)
{
	int		len;
	int		index;
	char	*str;

	if (num_read < 0)
		return (NULL);
	if (*save != NULL)
	{
		len = ft_strlen(*save);
		index = get_newline_index(*save);
		if (index >= 0)
			return (split(save, index));
		str = ft_strdup(*save);
		free(*save);
		*save = NULL;
	}
	else
		str = NULL;
	return (str);
}

char	*split(char **save, int idx)
{
	char	*str;
	char	*temp;
	int		len;

	str = malloc(sizeof(char) * (idx + 1) + 1);
	ft_strlcpy(str, *save, idx + 2);
	str[idx + 1] = '\0';
	len = ft_strlen(*save + idx + 1);
	if (len == 0)
	{
		free(*save);
		*save = NULL;
		return (str);
	}
	temp = ft_strdup(*save + idx + 1);
	free(*save);
	*save = temp;
	return (str);
}
