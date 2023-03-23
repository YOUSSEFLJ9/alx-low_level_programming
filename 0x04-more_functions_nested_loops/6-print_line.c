#include "main.h"
/**
  *print_line - fuction print line of -
  *
  *@n: this variable is the Number of times _ printed
  */
void print_line(int n)
{
	if (n > 0)
	{
		int counter;

		for (counter = 1; counter <= n; counter++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
