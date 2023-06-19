#include "main.h"

/**
 *_strchr - this function find the chart in pointer
 *
 *@s: this strung to be checked
 *@c: char to search for
 *
 *Return: return a poiter of the first occurrence of c if not found null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

	}
	return (0);
}
