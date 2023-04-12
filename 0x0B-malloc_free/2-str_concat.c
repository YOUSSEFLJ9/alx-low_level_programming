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
	unsigned int i = 0;
	unsigned int k = 0;
	char *p;
	unsigned int l1, l2;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	p = malloc(l1 + l2 + 1);
	if (p == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		p[i] = s2[k];
		i++;
		k++;
	}
	p[i] = '\0';
	return (p);

}
