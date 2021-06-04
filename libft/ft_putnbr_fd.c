/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:13:11 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/04 17:03:50 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	recursive(int n, int fd)
{
	char z;

	z = '0';
	if (n < 10)
	{
		ft_putchar_fd('0' + n, fd);
	}
	else
	{
		recursive(n / 10, fd);
		recursive(n % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int a;

	if (n < 0)
	{
		a = ~n + 1;
		ft_putchar_fd('-', fd);
		if (a / 10 > 0)
		{
			recursive(a / 10, fd);
		}
		recursive(a % 10, fd);
	}
	else
	{
		recursive(n, fd);
	}
}
