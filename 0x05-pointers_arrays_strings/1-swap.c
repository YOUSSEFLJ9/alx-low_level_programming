#include "main.h"

/**
 *swap_int - swap two int
 *
 *@a: first int
 *
 *@b: second int
 */
void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
