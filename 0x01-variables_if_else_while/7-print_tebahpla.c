#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int rvchar = 122;

	for (; rvchar >= 97 ; rvchar--)
		putchar(rvchar);

	putchar('\n');
	return (0);
}
