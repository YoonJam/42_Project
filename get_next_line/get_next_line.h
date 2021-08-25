/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:36:18 by hyyoon            #+#    #+#             */
/*   Updated: 2021/07/02 15:32:06 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define _CRT_SECURE_NO_WARNINGS

# ifndef OPEN_MAX
#  define OPEN_MAX 32
# endif

# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <fcntl.h>
# include <io.h>

char*   get_next_line(int fd);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);

#endif
