#include "main.h"
/**
 *print_number - this fuction print any Number
 *
 *@n: this it the number to be printed
 */
void print_number(int n)
{
	int deccont = 1, positive = n, temp, digit;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}
		while (deccont <= positive)
		{
			deccont *= 10;
			temp = deccont / 10;
		}
		while (temp >= 1)
		{
			digit = positive / temp;
			_putchar(digit + '0');
			positive = positive - (temp * digit);
			temp /= 10;
		}
	}
}
