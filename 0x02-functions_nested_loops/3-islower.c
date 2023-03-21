#include "main.h"
/**
 *_islower - this function return 1 if char is lowercase
 @c: character to check
 * Return: 1 if lowercase, 0 if uppercase 
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
