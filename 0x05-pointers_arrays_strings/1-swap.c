#include "main.h"

/**
  *swap_int - this function going to swap two int
  *
  *@a: this the ferst one
  *@b: this is the socund one
  *
  */
void swap_int(int *a, int *b)
{
	int swap = 0;

	swap = *a;
	*a = *b;
	*b = swap;
}
