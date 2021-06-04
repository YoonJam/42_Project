/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:11:45 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/04 18:30:48 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(int nbr)
{
	int		len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*str;

	sign = n < 0 ? -1 : 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n *= sign;
	len = ft_len(n);
	if (sign == -1)
		len++;
	str = malloc(sizeof(char*) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = '0' + (n % 10);
		n = (n / 10);
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
