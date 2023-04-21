#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  *sum_them_all - this function going to sum all the parameters
  *@n: NUmber pf parameters
  *Return: sum of ALL
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum = 0;
	va_list counterptr;

	if (n == 0)
		return (0);

	va_start(counterptr, n);
	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(counterptr, int);
	}
	va_end(counterptr);
	return (sum);
}
