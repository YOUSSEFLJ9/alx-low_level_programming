#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - this the main Entery, mul 2 numbers and return the result
  *@argc: int counter to count argument
  *@argv: poiter of string (point to pointer char)
  *Return: lets try 0,
  *
  */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
	int a = atoi(argv[1]);

	int b = atoi(argv[2]);

	int c = a * b;

	printf("%d\n", c);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
