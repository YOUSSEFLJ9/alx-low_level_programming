#include "stdio.h"
/**
 *print_binary - print the binary of int
 *@n: the variable int to be printed
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1;

	if (n == 0)
		putchar('0');
	while (m <= n)
		m = m << 1;
	if (m > n)
		m = m >> 1;

	while (m)
	{
		if (n & m)
			putchar('1');
		else
			putchar('0');
		m = m >> 1;
	}
}
