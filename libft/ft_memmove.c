/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:24:49 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/21 17:24:50 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	size_t	count;
	char	*p_dst;
	char	*p_src;

	p_dst = (char *)dst;
	p_src = (char *)src;
	count = 0;
	while (p_src != '\0' && count < len)
	{
		*p_dst = *p_src;
		count++;
		p_dst++;
		p_src++;
	}
	return (dst);
}
