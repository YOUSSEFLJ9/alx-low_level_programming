#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
*/
int main(void)
{
	int numm;

	for (numm = 0; numm <= 9; numm++)
	{
		putchar((numm % 10) + '0');
		if (numm == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
