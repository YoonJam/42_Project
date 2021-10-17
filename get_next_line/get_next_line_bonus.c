/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:39:42 by hyyoon            #+#    #+#             */
/*   Updated: 2021/10/17 16:14:11 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	is_newline(char *str)
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
	static char	*save[OPEN_MAX];
	char		buf[BUFFER_SIZE + 1];
	int			num_read;
	int			idx;
	char		*result;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	while (1)
	{
		num_read = read(fd, buf, BUFFER_SIZE);
		if (num_read <= 0)
			break ;
		buf[num_read] = '\0';
		save[fd] = ft_strjoin(save[fd], buf);
		idx = is_newline(save[fd]);
		if (idx >= 0)
		{
			result = split(&save[fd], idx);
			return (result);
		}
	}
	result = finish(&save[fd], num_read);
	return (result);
}

char	*finish(char **save, int num_read)
{
	int		len;
	int		idx;
	char	*str;

	if (num_read < 0)
		return (NULL);
	if (*save != NULL)
	{
		len = ft_strlen(*save);
		idx = is_newline(*save);
		if (idx >= 0)
			return (split(save, idx));
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
