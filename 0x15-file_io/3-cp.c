#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments(vecotrs)
 * Return: 0 on success or other (98,97, 100 ..depand on case).
 */
int main(int argc, char **argv)
{
	int from, to, readd, writee, cls1, cls2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	readd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || readd == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writee = write(to, buffer, readd);
		if (to == -1 || writee == -1)
		{
			dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			return (99);
		}
		readd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (readd > 0);
	free(buffer);
	cls1 = close(from);
	cls2 = close(to);
	if (cls1 == -1 || cls2 == -1)
	{
	if (cls1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
	else
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
	exit(100);
	}
	return (0);
}
