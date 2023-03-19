#include <stdio.h>
/**
  *main - this main this
  *
  *Return: Always 0 (Success)
  *
  */
int main(void)
{
	int A, B;

	for (A = 0; A < 10; A++)
	{
		for (B = A + 1 ; B < 10 ; B++)
		{
			putchar((A % 10) + '0');
			putchar((B % 10) + '0');
			if (A != 8 || B != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
