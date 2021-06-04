/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:13:11 by hyyoon            #+#    #+#             */
/*   Updated: 2021/06/04 16:14:31 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	recursive(int n, int fd)
{
	if (n / 10 > 0)
		recursive(n / 10, fd);
	if (n / 10 == 0)
		ft_putchar_fd(n % 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	int a;
	int b;

	if (n < 0)
	{
		a = (n / 10) * -1;
		b = (n % 10) * -1;
		write(fd, '-', 1);
		recursive(a, fd);
		recursive(b, fd);
	}
	else {
		recursive(n, fd);
	}
}
