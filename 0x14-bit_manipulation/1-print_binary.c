#include "stdio.h"
/**
 *print_binary - print the binary of int
 *@n: the variable int to be printed
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
	int i = sizeof(unsigned long int) * 8 - 1;

	while (i >= 0)
	{
		m = 1UL << i;
		if ((n & m) == m)
			putchar('1');
		else
			putchar('0');

		i--;
	}
}
