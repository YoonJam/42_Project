/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:03:40 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/24 20:22:08 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	ch;

	ch = (char)c;
	str = NULL;
	while (*s != '\0')
	{
		if (*s == ch)
			str = (char*)s;
		s++;
	}
	if (*s == ch)
		str = (char*)s;
	return (str);
}
