#include "main.h"

/**
 *_memcpy - this fuction copy the content of src to dest
 *@dest: the distnation variable
 *@src: the source variable
 *@n: number of content to keep
 *
 *Return: return the result in dest variable;
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	dest[i] = src[i];
	n--;
	}
	return (dest);
}
