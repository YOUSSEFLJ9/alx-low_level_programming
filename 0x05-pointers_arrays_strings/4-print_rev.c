#include "main.h"
/**
 *print_rev - this function return reverse string
 *
 *@s: this it the string
 *
 */
void print_rev(char *s)
{

	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	while (lenght >= 0)
	{
		_putchar(s[lenght]);
		lenght--;
	}
	_putchar('\n');
}
