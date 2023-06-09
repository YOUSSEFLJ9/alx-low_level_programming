#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
  *print_name - print number
  *@name: pointer to name
  *@f: pointer function
  *
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
