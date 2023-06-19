#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *
 *@s: this variable
 *@accept : this variable
 *Return: the lenght of char montion
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	char *acpt;

	while (*s)
	{
		acpt = accept;
		while (*acpt)
		{
			if (*s == *acpt)
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
