/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:23:30 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/21 20:28:01 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;
	char	*p_src;

	count = 0;
	p_src = (char*)s;
	while (*p_src != '\0' && count < n)
	{
		if (*p_src == (unsigned char)c)
			return ((void*)p_src);
		p_src++;
		count++;
	}
	return (NULL);
}
