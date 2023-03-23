#include "main.h"
/**
  *print_most_numbers - print numbers 1 to 9 without 2,4
  *
  */
void print_most_numbers(void)
{

	int a = 48;

	while (a < 58)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');

}
