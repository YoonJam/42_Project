/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:23:18 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/28 16:35:37 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*p_dst;
	char	*p_src;

	p_dst = (char *)dst;
	p_src = (char *)src;
	while (n--)
	{
		*p_dst = *p_src;
		if ((unsigned char)(*p_dst) == (unsigned char)c)
			return ((void*)++p_dst);
		p_dst++;
		p_src++;
	}
	return (NULL);
}
