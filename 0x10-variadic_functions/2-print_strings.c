#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  *print_strings - this fuction print strings
  *@separator: this string to be print bettwen nstring
  *@n: is the number of string passend in function
  *Return: no return
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list counterptr;
	char *string;

	va_start(counterptr, n);

	for (x = 0; x < n; x++)
	{
		string = va_arg(counterptr, char*);

		if (string == NULL)
			string = "(nil)";

		printf("%s", string);
		if (separator != NULL && (x + 1) != n)
			printf("%s", separator);
	}
	va_end(counterptr);
	printf("\n");

}
