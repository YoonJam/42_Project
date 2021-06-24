/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:11:22 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/17 14:10:49 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**all_free(char **strs)
{
	size_t		i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	strs = NULL;
	return (NULL);
}

static size_t	get_word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		while (*s != '\0' && *s != c)
			s++;
		++count;
	}
	return (count);
}

static int		split(char const *s, char c, char **strs)
{
	char	*start;
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		start = (char*)s;
		while (*s != '\0' && *s != c)
			s++;
		strs[i] = malloc(sizeof(char) * (s - start) + 1);
		if (strs[i] == NULL)
			return (0);
		ft_strlcpy(strs[i], start, (s - start + 1));
		i++;
	}
	strs[i] = NULL;
	return (1);
}

char			**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	count;

	if (s == NULL)
		return (NULL);
	count = get_word_count(s, c);
	if (!(strs = (char**)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	if (count == 0)
	{
		strs[0] = NULL;
		return (strs);
	}
	if (split(s, c, strs) == 0)
		return (all_free(strs));
	return (strs);
}
