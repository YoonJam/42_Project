/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:36:21 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/16 15:39:21 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void clear(char* buffer) 
{
    while (*buffer != '\0') {
        *buffer++ = '\0';
    }
}

int is_newline(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (*str++ == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char* get_next_line(int fd)
{
    char            buf[BUFFER_SIZE + 1];
    static char*    temp;
    int             num_read;

    temp = "";
    while ((num_read = _read(fd, buf, BUFFER_SIZE)) != 0) {
        buf[num_read] = '\0';

        if (num_read == -1) {
            fprintf(stderr, "read error");
            break;
        }

        temp = ft_strjoin(temp, buf);

        if (is_newline(temp) >= 0) {
            return temp;
        }
    }
    
    return temp;
}