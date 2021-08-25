/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyoon <hyyoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 22:46:20 by hyyoon            #+#    #+#             */
/*   Updated: 2021/08/23 22:46:20 by hyyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int argc, char** argv)
{
    int fd;
    
    if (argc < 2) {
        return (0);
    }
    
    if ((fd = _open(argv[1], O_RDONLY)) < 0) {
        fprintf(stderr, "open error\n");
		exit(1);
    }

    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));

    if (_close(fd) != 0) {
        fprintf(stderr, "error while closing");
    }

    return (0);
}