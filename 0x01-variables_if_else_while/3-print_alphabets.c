#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 **/
int main(void)
{
	char i = 97;
	char k = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}


	while (k <= 90)
	{
		putchar(k);
		k++;
	}
	putchar('\n');

	return (0);
}
