#include "main.h"
/**
 *set_bit - this fucntion site bit at indix in 1
 *@n: the number wher to be sets
 *@index: the indix in the place to be change
 *Return: 1 if its work or -1 if not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= 1 << index;

	return (1);
}
