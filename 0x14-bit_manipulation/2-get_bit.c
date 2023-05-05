#include "main.h"
/**
 *get_bit - this function see if the indix bit 0 or 1
 *@n: the number to check
 *@index: the index where to check
 *Return: the value of bit or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
		return (-1);
	bit = n >> index;
	return (bit & 1);
}
