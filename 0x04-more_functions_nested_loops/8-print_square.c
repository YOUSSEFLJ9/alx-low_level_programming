#include "main.h"
/**
  *print_square - this function print swuare 2d of #
  *
  *@size : represent the sizw of the square by colnes and lines
  *
  */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		int counter;

		for (counter = 1; counter <= size; counter++)
		{
			int counterln;

			for (counterln = 1; counterln <= size; counterln++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
