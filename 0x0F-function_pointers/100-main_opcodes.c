#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *main - this fuction return the argv of byts in main functionin hix )
  *@argc: argumment counter
  *@argv: pointer to vector
  *Return: 0 alway in main
  */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int arg = atoi(argv[1]);

	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}
	int i = 0;
	char *ma = (char *) main;

	while (i < arg)
	{
		printf("%02hhx", ma[i]);
		i++;
		if (i < arg)
			printf(" ");
	}
	printf("\n");

	return (0);
}
