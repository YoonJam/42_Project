/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:10:13 by hyyoon            #+#    #+#             */
/*   Updated: 2021/10/05 17:02:54 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (src_len);
}

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (*str++ != '\0')
		length++;
	return (length);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	copy_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	copy_len = ft_strlcpy(str, s1, len + 1);
	ft_strlcpy(str + copy_len, s2, len + 1);
	return (str);
}

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}
