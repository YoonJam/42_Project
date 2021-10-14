#include "get_next_line.h"

int main(int argc, char** argv)
{
	int fd;
	char* strs;

	printf("argc : %d\n", argc);
	
	fd = open(argv[1], O_RDONLY);

	printf("fd : %d\n", fd);
	printf("=============================================\n");

	// printf("%s\n", get_next_line(fd));
	
	// printf("main %s\n", get_next_line2(fd));
	
	while (1)
	{
		strs = get_next_line(fd);
		if (strs == NULL) {
			break;
		} else {
			if (*strs == '\n') {
				printf("test : ok");
			}
			printf("%s", strs);
		}
		
	}

	// strs = get_next_line(fd);
	// if (strs == NULL) {
	// 	printf("NULL 이다\n");
	// 	close(fd);
	// 	return 0;
	// }
	// while (*strs != '\0')
	// {
	// 	printf("%d", *strs++);
	// }
	// printf("\n");

	// strs = get_next_line(fd);
	// if (strs == NULL) {
	// 	printf("NULL 이다\n");
	// 	close(fd);
	// 	return 0;
	// }
	// while (*strs != '\0')
	// {
	// 	printf("%d", *strs++);
	// }
	// printf("\n");
	

	// strs = get_next_line(fd);
	// if (strs == NULL) {
	// 	printf("NULL 이다\n");
	// 	close(fd);
	// 	return 0;
	// }
	// while (*strs != '\0')
	// {
	// 	printf("%d", *strs++);
	// }
	// printf("\n");

	// strs = get_next_line(fd);
	// if (strs == NULL) {
	// 	printf("NULL 이다\n");
	// 	close(fd);
	// 	return 0;
	// }
	// while (*strs != '\0')
	// {
	// 	printf("%d", *strs++);
	// }
	// printf("\n");

	// strs = get_next_line(fd);
	// if (strs == NULL) {
	// 	printf("NULL 이다\n");
	// 	close(fd);
	// 	return 0;
	// }
	// while (*strs != '\0')
	// {
	// 	printf("%d", *strs++);
	// }
	// printf("\n");
	
	
	// printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
		
	close(fd);

	return (0);
}