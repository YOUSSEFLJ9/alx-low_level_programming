#include "main.h"
/**
  *_puts - this fuction pring an array of char
  *
  *@str: this is the string of char gonna printed
  */
void _puts(char *str)
{
	int lent = 0;

	while (str[lent] != '\0')
	{
		_putchar(str[lent]);
		lent++;
	}
	_putchar('\n');
}
