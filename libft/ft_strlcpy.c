/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:11:59 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/21 20:28:12 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t length;

	if (dest == NULL || src == NULL)
		return (0);
	while (*src != '\0' && length < dstsize - 1)
	{
		*dest++ = *src++;
		length++;
	}
	*dest = '\0';
	return (length);
}
