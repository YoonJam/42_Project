/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:24:49 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/28 17:53:48 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p_dst;
	char	*p_src;

	if (!dst && !src)
		return (NULL);
	if (dst <= src)
	{
		p_dst = (char *)dst;
		p_src = (char *)src;
		while (len--)
			*p_dst++ = *p_src++;
	}
	else
	{
		p_dst = (char *)(dst + len - 1);
		p_src = (char *)(src + len - 1);
		while (len--)
			*p_dst-- = *p_src--;
	}
	return (dst);
}
