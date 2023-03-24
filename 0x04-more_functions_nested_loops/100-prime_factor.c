#include <stdio.h>
#include <math.h>
/**
 *main - this return prime numbers
 *
 *Return: 0
 */
int main(void)
{
	unsigned long Number = 612852475143;
	unsigned long dv = 2;
	unsigned long M = round(Number / 2);

	while (dv < M)
	{
		if (Number % dv == 0)
		{
			Number = Number / dv;
			dv = 2;
		}
		else
			dv++;
	}
	printf("%lu\n", Number);

	return (0);
}
