/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:03:15 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/21 20:28:11 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	s_len;
	unsigned int	d_len;
	char			*dest_end;

	count = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize <= d_len)
		return (s_len + dstsize);
	dest_end = dst + d_len;
	while (*src != '\0' && d_len + count + 1 < dstsize)
	{
		*dest_end++ = *src++;
		count++;
	}
	*dest_end = '\0';
	return (s_len + d_len);
}
