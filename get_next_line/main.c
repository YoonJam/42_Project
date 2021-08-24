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
    int i;
    int fd;
    int numread;
    char* file_name;
    // FILE* file;
    char buffer[BUFFER_SIZE];
    
    for (i = 0; i < argc; i++) {
        if (i > 0) {
            printf("argc : %s\n", argv[i]);
            file_name = argv[i];
        }
    }

    if ((fd = _open(file_name, O_RDONLY)) < 0) {
        fprintf(stderr, "open error for %s\n", file_name);
		exit(1);
    }

    printf("file descriptor : %d\n", fd);

    numread = _read(fd, buffer, BUFFER_SIZE);
    printf("%s\n", buffer);
    printf("num read : %d\n", numread);


    
    if (_close(fd) != 0) {
        fprintf(stderr, "error while closing");
    } else {
        fprintf(stdout, "file close good");
    }

    return 0;
}