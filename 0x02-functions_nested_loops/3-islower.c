#include "main.h"
/*
 *_islower - this function return 1 if char is lowercase
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
