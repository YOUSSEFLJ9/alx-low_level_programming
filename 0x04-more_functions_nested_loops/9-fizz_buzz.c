#include <stdio.h>
#include "main.h"
/**
 *main - going to print from the fuction inside it
  *
  *Return: always 0 (ture)
  *
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 == 0)
			printf("Buzz");

		else
		{
			printf("%d", i);
		}

			printf(" ");
	}
	printf("\n");
	return (0);
}
