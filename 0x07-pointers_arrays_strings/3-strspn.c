#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *
 *@s: this variable
 *@accept : this variable
 *Return: the lenght of char montion in s and using in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;
	char *acpt;

	while (*s)
	{
		acpt = accept;
		while (*acpt)
		{
			if (*s == *accept)
			{
				counter++;
				break;
			}
			acpt++;
		}
		if (*acpt == '\0')
		{
			return (counter);
		}
		s++;
	}
	return (counter);
}
