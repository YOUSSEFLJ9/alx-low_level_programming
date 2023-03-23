#include "main.h"
/**
  *more_numbers - this function print numbers 0 to 14 , 10 times
  *
  *
  */
void more_numbers(void)
{
	int times, i;

		for (times = 0; times < 10; times++)
		{
			for (i = 0; i <= 14; i++)
			{
				if (i > 9)
					_putchar('1');
				_putchar(i % 10 + '0');
			}
			_putchar('\n');
		}

}
