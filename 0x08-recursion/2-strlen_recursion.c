#include "main.h"
/**
  *_strlen_recursion - using recursion this function return the length of *s
  *@s: this string to be calculated
  *
  *Return: the lenght of *s
  */
int _strlen_recursion(char *s)
{
	int counter;

	if (*s == '\0')
		return (0);
	counter = 1;
	counter = _strlen_recursion(s + 1) + counter;
	return (counter);
}
