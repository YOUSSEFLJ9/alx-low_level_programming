#include "main.h"

/**
 *read_textfile - this function read text file and print it
 *@filename: is the actual file name
 *@letters: this is the NUmber of letters should read and print
 *Return: the NUmber of letters printed or 0 if cant onpen or null...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	int fd;
	char buf[1024];

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	bytes_read = read(fd, buf, letters);

	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	if (write(STDOUT_FILENO, buf, bytes_read) == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_read);
}
