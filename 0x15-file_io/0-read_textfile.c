#include "main.h"

/**
 *read_textfile - this function read text file and print it
 *@filename: is the actual file name
 *@letters: this is the NUmber of letters should read and print
 *Return: the NUmber of letters printed or 0 if cant onpen or null...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readd = 0;
	ssize_t writee = 0;
	int fd;
	char *buf;

	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	if (fd == -1)
		return (0);

	readd = read(fd, buf, letters);

	if (readd == -1 || filename == NULL)
	{
		free(buf);
		close(fd);
		return (0);
	}
	writee = write(STDOUT_FILENO, buf, readd);
	if (writee == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (writee);
}
