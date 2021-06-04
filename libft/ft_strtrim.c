/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:11:05 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/04 15:12:15 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_include(char c, char const *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	str = malloc(sizeof(char*) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (*s1 == '\0')
	{
		if (!is_include(*s1, set))
		{
			*str++ = *s1;
			i++;
		}
		s1++;
	}
	*str = '\0';
	return (str - i);
}
