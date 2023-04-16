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
	unsigned int i, j, lenght = 0, lenght2 = 0;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		*s2 = "";

	while (s1[lenght] != '\0')
		lenght++;
	while (s2[lenght2] != '\0')
		lenght2++;

	if (n < lenght2)
		string = malloc(sizeof(char) * (lenght + n + 1));
	else
		string = malloc(sizeof(char) * (lenght + lenght2 + 1));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
		string[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		string[i + j] = s2[j];


	string[i + j] = '\0';


	return (string);
}
