/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:22:52 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/28 17:36:15 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr_c;

	ptr_c = (char*)b;
	while (len--)
		*ptr_c++ = (unsigned char)c;
	return (b);
}
