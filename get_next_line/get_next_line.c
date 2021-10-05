/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:10:29 by hyyoon            #+#    #+#             */
/*   Updated: 2021/10/05 20:46:23 by hyyoon           ###   ########.fr       */
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

char	*get_next_line2(int fd)
{
	static char	*start = "";
	char		buf[BUFFER_SIZE + 1];
	int			num_read;
	int			idx;
	char		*result;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	while (1)
	{
		num_read = read(fd, buf, BUFFER_SIZE); // fd 파일디스크립터에서 BUFFER_SIZE 만큼 buf에 복사하고 읽어 들인 문자 수 만큼 반환
		if (num_read <= 0) // 읽은 문자 수가 0보다 낮으면 파일을 끝까지 다 읽거나 오류
			break ;
		buf[num_read] = '\0'; // buffer의 마지막을 null 캐릭터
		start = ft_strjoin(start, buf); // start와 buf를 합친다.
		idx = is_newline(start); // start 문자열에서 새줄문자를 만나면 그 위치를 반환
		if (idx >= 0) // start 문자열의 새줄 문자를 만난 위치까지 문자열을 분리하여 반환해줘야한다. 그 과정에서 나머지 부분은 정적변수에 다시 저장해야 함.
		{
			result = split(&start, idx);
			// printf("start = %s", start);
			return (result);
		}
	}
	
	result = finish(&start, num_read);
	return result;
}

char* finish(char** start, int num_read)
{
	int len;
	char* str;

	if (num_read < 0) {
		return NULL;
	}

	if (*start != NULL)
	{
		len = ft_strlen(*start);
		str = ft_strdup(*start);
		free(*start);
		*start = NULL;
	} else {
		str = NULL;
	}
	
	return str;
}

char* split(char** start, int idx)
{
	char* str;
	char* temp;

	str = malloc(sizeof(char) * (idx + 1));
	ft_strlcpy(str, *start, idx + 1);
	str[idx] = '\0';
	// printf("idx = %d\n", idx + 1);

	// printf("a : %s\n", str);

	//abcd\n123
	// idx = 4
	temp = ft_strdup(*start + idx + 1);
	free(*start);

	*start = temp;

	// printf("b : %s\n", *start);

	return str;
}