#include <stdio.h>

/**
 *main - this fuction going to print the combinations pf two two digit numbers
 *
 *Return: Alway 0 like usual
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{

		for (b = a; b <= 99; b++)
		{

			if (a != b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar (' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');

				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}

