#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *_strdup - this function have a newly allocated space have a copy of str
  *@str: this string given
  *
  *Return: return NULL if : str = NULL;
  *if there is no space available on memrory
  *else return pointer of string
*/
char *_strdup(char *str)
{
	char *p;
	unsigned int i = sizeof(str);
	unsigned int k;

	if (str == NULL)
		return (NULL);
	p = malloc(i);

	for (k = 0; k < i; k++)
	{
		p[k] = str[k];
	}
	return (p);
}
