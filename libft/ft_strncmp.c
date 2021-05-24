/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:04:24 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/24 18:43:50 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *src1;
	unsigned char *src2;

	src1 = (unsigned char*)s1;
	src2 = (unsigned char*)s2;
	while (n--)
	{
		if (!(*src1 != '\0' && *src1 == *src2))
			return (*src1 - *src2);
		src1++;
		src2++;
	}
	return (0);
}
