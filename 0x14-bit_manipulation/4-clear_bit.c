#include "main.h"
/**
 *clear_bit - this function st the bit to 0
 *@n: this it pointer of the nmber n
 *@index: this is the indix to be clean
 *Return: 1 if its worked otherwise 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= (0 << index);
	return (1);

}
