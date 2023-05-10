#include "main.h"
/**
 *append_text_to_file - is a function do like in the name
 *@filename: is the name of the file looking for
 *@text_content: the content should be add to the end of the file
 *Return: 1 if all is good, otherwise -1 or if file dont exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int writee, count = 0, fp;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
		while (text_content[count])
			count++;

	writee = write(fp, text_content, count);
	if (writee == -1 || fp == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
