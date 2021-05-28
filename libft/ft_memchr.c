/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:23:30 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/28 17:32:36 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p_src;

	p_src = (char*)s;
	while (n--)
	{
		if ((unsigned char)*p_src == (unsigned char)c)
			return ((void*)p_src);
		p_src++;
	}
	return (NULL);
}
