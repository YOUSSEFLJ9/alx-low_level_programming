#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: size to be prunt from array
 *
 *@action: pointer to print in regular or hex
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 1; a <= size; a++)
	{
		action(array[a]);
	}
}

