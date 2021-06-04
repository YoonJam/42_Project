/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:10:32 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/04 14:52:00 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char*) * len + 1);
	if (str == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (i >= start && i <= len)
			str[j++] = *s;
		i++;
		s++;
	}	
	return (str);
}
