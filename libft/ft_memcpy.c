/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:24:01 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/21 17:24:02 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *restrict dst, void *restrict src, size_t n)
{
	size_t	count;
	char	*p_dst;
	char	*p_src;

	p_dst = (char *)dst;
	p_src = (char *)src;
	count = 0;
	while (p_src != '\0' && count < n)
	{
		*p_dst = *p_src;
		count++;
		p_dst++;
		p_src++;
	}
	return (dst);
}
