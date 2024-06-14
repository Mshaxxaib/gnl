#include "get_next_line.h"

int main(void)
{
	int fd;
	int fd2;
	char *line;
	char *line2;

	fd = open("test.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);

	while((line = get_next_line(fd)) != NULL && (line2 = get_next_line(fd2)) != NULL)
	{
		printf("%s", line);
		printf("%s", line2);
	} 
	return(0);
}