#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * main - this function sum positive numbers
  *@argv: arg vecter
  *@argc: arg counter
  *
  *Return: 1 if have a symbols  0 if all right
  */
int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;

	for (; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
