#include "main.h"
/**
 *create_file - this function creat a new file if don't exist with content
 *@filename: is the what the name of file you want
 *@text_content: is the content to be write in file
 *Return: 1 if seccess or -1 if there is a problem
 */
int create_file(const char *filename, char *text_content)
{
	int fptr;
	int wrt, count = 0;


	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count])
			count++;
	}
	fptr = open(filename, O_RDWRn | O_CREAT | O_TRUNC, 0600);
	wrt = write(fptr, text_content, count);
	if (wrt == -1 || fptr == -1)
	{
		close(fptr);
		return (-1);
	}
	close(fptr);
	return (1);

}
