#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - this the main Entery
  *@argc: int counter to count argument
  *@argv: poiter of string (point to pointer char)
  *Return: lets try 0, in fact its print all the arg include the first one
  *
  */
int main(int argc, char **argv)
{
	int counter;

	for (counter = 0; counter < argc ; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
