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
	char *ret;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i > j; j++)
	{
		if (s[j] == c)
		{
			for (; i > j; j++)
			{
				*ret = s[j];
			}
			break;
		}
		else
			*ret = '\0';
	}
	return (ret);
}
