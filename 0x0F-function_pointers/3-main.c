#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
#include "function_pointers.h"
/**
  *main - entery point
  *@argc: argumment counter
  *@argv: argumment vectour pointer
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int a, b;
	char *type;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	type = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(type) == NULL || type[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*type == '/' && b == 0) || (*type == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(type)(a, b));
	return (0);

}
