/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:04:11 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/24 22:08:16 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t i;

	if (*find == '\0')
		return ((char*)str);
	if (len == 0)
		return (NULL);
	while (*str != '\0' && len > 0)
	{
		i = 0;
		while ((*(str + i) == *(find + i)) && i < len)
		{
			i++;
			if (*(find + i) == '\0')
				return ((char*)str);
		}
		str++;
		len--;
	}
	return (NULL);
}
