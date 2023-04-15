#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *wordcount - this function count words of string
 *
 *@str: this is the string habe words.
 *
 *Return: number of words there in string.
 */
int wordcount(char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != '\0' && str[i] != ' ')
				i++;
		}
	}
	return (count);
}


/**
 *strtow - thid function split a string into words
 *
 *@str: this is the string to be split
 *
 *Return: NULL if str is NULL or empty, else the pointer of string
 */

char **strtow(char *str)
{
	char **string;
	int i = 0, j = 0, c = 0, len = 0;
	int Numofwords = wordcount(str);

	if (str == NULL || *str == '\0')
		return (NULL);

	string = (char **)malloc((Numofwords + 1) * sizeof(char *));
	if (string == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		while (*str == ' ')
			str++;
		len = 0;
		while (*(str + len) != '\0' && *(str + len) != ' ')
		{
			len++;
		}
		string[i] = (char *)malloc((len + 1) * sizeof(char));
		if (string[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(string[j]);

			free(string);
			return (NULL);
		}
		for (c = 0; c < len; c++)
			string[i][c] = *(str + c);

		string[i][len] = '\0';
		i++;
		str = str + len;
	}
	string[Numofwords] = NULL;
	return (string);
}
