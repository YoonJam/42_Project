/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:22:52 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/21 17:22:54 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	char			*ptr_c;
	size_t			count;
	unsigned char	uc;

	ptr_c = (char*)b;
	uc = (unsigned char)c;
	count = 0;
	while (count < len)
	{
		*ptr_c++ = uc;
		count++;
	}
	return (b);
}
