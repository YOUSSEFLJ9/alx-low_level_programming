#include "main.h"

int reversestring(char *s, int bg, int end);
int _lenght(char *s);

/**
  * reversestring - this function reverses the string given
  *
  * @s: string variable
  * @bg: int with the number of the bg of string
  * @end: int hold the length of string
  * Return: reverse of string
  */
int reversestring(char *s, int bg, int end)
{
	if (bg >= end)
	{
		return (1);
	}
	else
	{
		return (s[bg] == s[end] && reversestring(s, bg + 1, end - 1));
	}
}

/**
 * _lenght - return length of *s
 * @s: string
 * Return: length int
 */
int _lenght(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (1 + _lenght(s + 1));
}

/**
  * is_palindrome - this function checks if the string can be read in two sides
  *
  * @s: this the string
  *
  * Return: 1 if palindrome, 0 if not
  */
int is_palindrome(char *s)
{
	return (reversestring(s, 0, _lenght(s) - 1));
}

