#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
  *print_all - this function print all (anything)
  *@format: type of argumants passed
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string;
	char *sep = ", ";
	va_list data;
	double d;

	va_start(data, format);
	if (format == 0)
	{
		exit(0);
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(data, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(data, int), sep);
				break;
			case 'f':
				d = va_arg(data, double);
				printf("%f%s", d, sep);
				break;
			case 's':
				string = va_arg(data, char*);
					if (string == NULL || *string == '\0')
						string = "(nil)";
				printf("%s%s", string, sep);
				break;
		}
		i++;
		if (format[i + 1] == 0)
			sep = "";
	}
	printf("\n");
	va_end(data);
}
