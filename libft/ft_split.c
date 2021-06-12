/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:11:22 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/12 23:02:12 by hyyoon           ###   ########.fr       */
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

size_t	get_word_count(char const *str, char c)
{
	size_t	count;

	count = 0;
	if (str == NULL)
		return (0);
	while (*str == c)
		str++;
	while (*str != '\0')
	{
		if (*str == c)
		{
			count++;
			while (*str != '\0' && *str == c)
				str++;
		}
		str++;
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
	if (!(strs = (char**)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	while (*s != '\0')
	{
		if (!(*s == c))
		{
			start = (char*)s;
			while (*s != '\0' && !(*s == c))
				s++;
			strs[i] = (char*)malloc(sizeof(char) * (s - start) + 1);
			ft_strlcpy(strs[i++], start, (s - start + 1));
		}
		if (*s == '\0')
			break ;
		s++;
	}
	strs[i] = 0;
	return (strs);
}
