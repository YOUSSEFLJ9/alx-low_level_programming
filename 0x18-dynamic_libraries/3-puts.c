#include "main.h"

/**
 *_puts - this fuction pring an array of char
 *@str: this is the string of char gonna printed
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
