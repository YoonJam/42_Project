/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:10:29 by hyyoon            #+#    #+#             */
/*   Updated: 2021/10/14 18:57:25 by hyyoon           ###   ########.fr       */
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
	static char	*save;
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
		//printf("join before save : %s\n", save);
		save = ft_strjoin(save, buf); // save buf를 합친다.
		// printf("save : %s", save);
		idx = is_newline(save); // save 문자열에서 새줄문자를 만나면 그 위치를 반환
		//printf("idx : %d", idx);
		if (idx >= 0) // save 문자열의 새줄 문자를 만난 위치까지 문자열을 분리하여 반환해줘야한다. 그 과정에서 나머지 부분은 정적변수에 다시 저장해야 함.
		{
			result = split(&save, idx);
			//printf("save = %s", save);
			return (result);
		}
	}
	
	result = finish(&save, num_read);
	return result;
}

char* finish(char** save, int num_read)
{
	int len;
	int idx;
	char* str;

	//printf("finish ");
	
	if (num_read < 0) {
		return NULL;
	}

	if (*save != NULL)
	{
		len = ft_strlen(*save);
		idx = is_newline(*save);
		if (idx >= 0)
		{
			return split(save, idx);
		}
		str = ft_strdup(*save);
		free(*save);
		*save = NULL;
	} else {
		str = NULL;
	}
	
	return str;
}

char* split(char** save, int idx)
{
	char	*str;
	char	*temp;
	int		len;

	// printf("split : %s", *save);
	str = malloc(sizeof(char) * (idx + 1) + 1);
	ft_strlcpy(str, *save, idx + 2);
	str[idx + 1] = '\0';
	// printf("len : %zu\n", ft_strlen(str));
	// printf("str : %d,,,%d,,,%d\n", str[0], str[1], str[2]);
	// printf("idx : %d\n", idx);
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