/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:23:18 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/21 20:28:02 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	size_t			count;
	char			*p_dst;
	char			*p_src;
	unsigned char	uc;

	p_dst = (char *)dst;
	p_src = (char *)src;
	uc = (unsigned char)c;
	count = 0;
	while (p_src != '\0' && count < n)
	{
		*p_dst = *p_src;
		if (*p_dst == uc)
			return ((void*)++p_dst);
		count++;
		p_dst++;
		p_src++;
	}
	return (NULL);
}
