#include "main.h"
/**
 *power - this function calculat the power
 *@N: the number
 *@c: the times of power
 *Return: the result
 */
unsigned int power(int N, int c)
{
	int sum = 1;
	int i;

	if (c == 0)
	{
		sum = 1;
		return (sum);
	}
	else
	{
		for (i = 1; i <= c; i++)
		{
			sum = sum * N;
		}
		return (sum);
	}
}

/**
 *binary_to_uint - this convirtour to int
 *@b: pointer to stirng binary
 *Return: the number converted
 */
unsigned int binary_to_uint(const char *b)

{
	int c = 0;
	unsigned int rt = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
		{
			c++;
		}
		else if (*b == '1')
		{
			rt += power(2, c);
			c++;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (rt);
}
