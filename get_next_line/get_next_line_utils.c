/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:39:20 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/16 15:39:21 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p_dst;
	char	*p_src;

	p_dst = (char *)dst;
	p_src = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*p_dst++ = *p_src++;
	return (dst);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t length;

	if (!dest || !src)
		return (0);
	length = ft_strlen(src);
	if (length < dstsize)
		ft_memcpy(dest, src, length + 1);
	else if (dstsize)
	{
		ft_memcpy(dest, src, dstsize - 1);
		dest[dstsize - 1] = '\0';
	}
	return (length);
}

size_t	ft_strlen(const char *str)
{
	size_t length;

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
	ret = (char*)malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}
