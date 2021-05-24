/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:03:28 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/24 20:25:07 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;
	char ch;

	str = (char*)s;
	ch = (char)c;
	while (*str != '\0')
	{
		if (*str == ch)
			return (str);
		str++;
	}
	if (*str == ch) 
		return (str);
	return (NULL);
}
