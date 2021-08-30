/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:10:29 by hyyoon            #+#    #+#             */
/*   Updated: 2021/08/30 15:10:29 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	char	buf[BUFFER_SIZE + 1];
	char	*temp;
	int		num_read;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	temp = "";
	while (1)
	{
		num_read = read(fd, buf, BUFFER_SIZE);
		if (num_read <= 0)
			break ;
		buf[num_read] = '\0';
		temp = ft_strjoin(temp, buf);
		if (is_newline(temp) >= 0)
			return (temp);
	}
	return (temp);
}
