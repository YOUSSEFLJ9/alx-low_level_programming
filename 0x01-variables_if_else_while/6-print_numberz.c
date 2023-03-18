#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int b = 0;

	for (; b <= 9 ; b++)
	{
		putchar((b % 10)+'0');
	}

	putchar('\n');

	return (0);
}
