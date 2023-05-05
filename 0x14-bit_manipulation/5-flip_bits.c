#include "main.h"
/**
 *flip_bits - this function count how much need to flip betwee n and m
 *@m: the int to be fleped
 *@n: the variable to be fiped
 *Return: the number of bits would be need to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^ m;
	int counter = 0;

	while (r)
	{
		counter += r & 1;
		r = r >> 1;
	}
	return (counter);
}
