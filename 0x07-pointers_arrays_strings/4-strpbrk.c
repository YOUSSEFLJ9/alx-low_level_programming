#include "main.h"
/**
  *_strpbrk - fuction to return string where the firest char mention
  *
  *@s: the string to search in
  *@accept: the stiring to looking for in s.
  *Return: the function return the first char mentioned and complite
  */

char *_strpbrk(char *s, char *accept)
{

	int i, j;

	while(*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		s++
		}
	}
	return ('\0');

}
