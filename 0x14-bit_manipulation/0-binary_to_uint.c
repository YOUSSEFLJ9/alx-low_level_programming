#include "main.h"
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
		if (*b== '1' || *b == '0')
		{
	

		
			c = *b - '0';
			rt = rt * 2 + c;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (rt);
}
