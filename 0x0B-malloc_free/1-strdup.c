#include "main.h"
#include <stdio.h>
#include <string.h>
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

	unsigned int i;
	unsigned int l;

	if (str == NULL)
		return (NULL);
	l = strlen(str) + 1;

	p = malloc(l);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
