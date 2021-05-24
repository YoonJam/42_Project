/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:04:24 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/24 17:45:33 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t length;

	length = 0;
	while (*s1 == *s2 && *s1 != '\0' && length < n)
	{
		s1++;
		s2++;
		length++;
	}
	if (*s1 - *s2 == 0) 
		return (0);

	return (*s1 - *s2) > 0 ? 1 : -1;
}
