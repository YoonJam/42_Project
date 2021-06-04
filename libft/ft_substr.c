/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:10:32 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/04 15:01:25 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = malloc(sizeof(char*) * len + 1);
	if (str == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (i >= start)
			*str++ = *s;
		i++;
		s++;
	}
	*str = '\0';
	return (str - (len - start));
}
