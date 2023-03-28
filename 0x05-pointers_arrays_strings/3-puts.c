#include "main.h"

/**
  *_puts - this fuction pring an array of char
  *
  *@str: this is the string of char gonna printed
  */

void _puts(char *str)
{
	int c = 0;

	for (;;c++)
	{
		if (str[c] != '\0')
		{
			_putchar(str[c]);
		}
		else
			break;
	}
	_putchar('\n');
}
