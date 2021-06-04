/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:11:22 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/04 15:47:01 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, int n)
{
	char	*start_p;
	int		i;

	i = 0;
	start_p = dest;
	while (*src != '\0' && i < n)
	{
		*dest++ = *src++;
		i++;
	}
	*dest++ = '\0';
	return (start_p);
}

size_t	get_word_count(char* str, char c)
{
	size_t	count;
	int		prv;

	prv = 0;
	count = 0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			if (prv == 0)
				count++;
			prv = 1;
		}
		else
		{
			prv = 0;
		}
		*str++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*start;
	size_t	count;
	size_t	i;

	i = 0;
	count = get_word_count(s, c);
	strs = (char**)malloc(sizeof(char*) * (count + 1));
	if (strs == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (!(*s == c))
		{
			start = s;
			while (*s != '\0' && !(*s == c))
				s++;
			strs[i] = (char*)malloc(sizeof(char) * (s - start) + 1);
			ft_strncpy(strs[i], start, (s - start));
			i++;
		}
		s++;
	}
	strs[i] = 0;
	return (strs);
}