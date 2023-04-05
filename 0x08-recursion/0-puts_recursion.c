#include "main.h"
/**
  *_puts_recursion - this fuction print string using recursion
  *@s: this is the variabel string
  */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
