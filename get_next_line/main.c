#include "get_next_line.h"

int main(int argc, char** argv)
{
	int fd;

	printf("argc : %d\n", argc);
	
	fd = open(argv[1], O_RDONLY);

	printf("fd : %d\n", fd);
	printf("=============================================\n");

	// printf("%s\n", get_next_line(fd));
	
	// printf("main %s\n", get_next_line2(fd));

	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
	printf("%s\n", get_next_line2(fd));
		
	close(fd);

	return (0);
}