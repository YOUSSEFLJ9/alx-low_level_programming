#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  *print_numbers - this function print NUmbers wher separator between them
  *@separator: this string to be print bettwen numbers
  *@n: is the number of NUmbers
  *Return: no return
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list counterptr;
	va_start(counterptr, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(counterptr, int));
		if (separator != NULL && (x + 1) != n)
			printf("%s", separator);
	}
	va_end(counterptr);
	printf("\n");

}
