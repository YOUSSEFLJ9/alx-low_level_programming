#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d", n);
	if (n > 0)
	{
		do {
			n = n % 10;
		} while (n >= 10);
	}
	else
	{
		do {
			n = (n % -10);
		} while (n <= -10);
	}
	if (n > 5)
		printf(" is %d and is greater than 5\n", n);
	else if (n == 0)
		printf(" is %d and is 0\n", n);
	else if (n < 6)
		printf(" is %d and is less than 6 and not 0\n", n);

	return (0);
}
