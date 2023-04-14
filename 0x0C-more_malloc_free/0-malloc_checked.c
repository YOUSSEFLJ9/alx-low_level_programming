#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - function to allocat memory
 *
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
	{

	void *pp;

	pp = malloc(b);

	if (pp == NULL)

		exit(98);

	return (pp);

}

