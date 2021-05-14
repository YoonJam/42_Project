/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:04:24 by hyyoon            #+#    #+#             */
/*   Updated: 2021/05/14 18:04:25 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t length;
    
    length = 0;
    while (*s1 == *s2 && *s1 != '\0' && length < n)
    {
        s1++;
        s2++;
        length++;
    }
    
    return (*s1 - *s2);
}
