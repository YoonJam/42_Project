/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:31:56 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/04 17:46:09 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1);
	ret = (char*)malloc(sizeof(char*) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}
