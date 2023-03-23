#include "main.h"
/**
  *print_diagonal - this function print diagonal
  *
  *@n: this Number of time \have to printed
  *
  */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			int b;

			for (b = 1; b <= a; b++)
			{
				if (b > 1)
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}

}
