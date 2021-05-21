/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:03:28 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/21 20:28:11 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *last_position;

	last_position = '\0';
	while (*s != '\0')
	{
		if (*s == c)
			last_position = s;
		s++;
	}
	return (last_position);
}
