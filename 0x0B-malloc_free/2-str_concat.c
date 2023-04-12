#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  *str_concat - this function gonna concatenat two stings
  *
  *@s1: this is the first string
  *@s2: this is the second string
  *
  *Return: pointer or null if there is a failure
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int k;
	char *p;
	unsigned int l1 = strlen(s1) + 1;
	unsigned int l2 = strlen(s2) + 1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	p = malloc(l1 + l2 + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for (k = 0; k < l2; k++)
	{
		p[i] = s2[k];
		i++;
	}
	p[i] = '\0';
	return (p);

}
