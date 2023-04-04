#include "main.h"
#include <stdio.h>
/**
 *_memset - this fuction full n byte of pointer by s
 *@n: the Number of byte
 *@s: the pointer to be return the changes
 *@b: the string to be print
 *
 *Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
