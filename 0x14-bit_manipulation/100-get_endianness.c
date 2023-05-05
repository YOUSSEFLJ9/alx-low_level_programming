#include "main.h"
/**
 *get_endianness - the function check the endianness of the system
 * Return:  0 or 1 if the char pointe to lsb  then it litter endian
 */
int get_endianness(void)
{
	int test = 1;
	char *ptr = (char *) &test;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
