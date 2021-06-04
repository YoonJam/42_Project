/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:31:56 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/04 16:50:10 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1);
	ret = (char*)malloc(sizeof(char*) * (len + 1));
	if (ret != NULL)
	{
		while (*s1 != '\0')
			*ret++ = *s1++;
		*ret = '\0';
		ret -= len;
	}
	return (ret);
}
