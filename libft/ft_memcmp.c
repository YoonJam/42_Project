/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:23:37 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/21 20:28:01 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	count;
	char	*p_s1;
	char	*p_s2;

	p_s1 = (char*)s1;
	p_s2 = (char*)s2;
	count = 0;
	while (*p_s1 == *p_s2 && *p_s1 != '\0' && count < n)
	{
		p_s1++;
		p_s2++;
		count++;
	}
	return (*p_s1 - *p_s2);
}
