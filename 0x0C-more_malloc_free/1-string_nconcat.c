#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *string_nconcat - function concatenates two strings
  *@s1: first string
  *@s2: secound string 
  *@n: byt of s2;
  *Return: if fail NULL . or pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *string;
	unsigned int i = 0, j = 0, lenght = 0, lenght2 = 0;

	while (s1 && s1[lenght])
		lenght++;
	while (s2 && s2[lenght])
		lenght2++;

	if (n < lenght2)
		string = malloc(sizeof(char) * (len1 + n + 1));
	else
		string = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!string)
		return (NULL);

	while (i < lenght)
	{
		string[i] = s1[i];
		i++;
	}

	while (n < lenght2 && i < (lenght + n))
		string[i++] = s2[j++];

	while (n >= lenght2 && i < (lenght + lenght2))
		string[i++] = s2[j++];

	string[i] = '\0';

	return (string);
}
