#include "main.h"
/**
  *_pow_recursion - calculat power of x y time
  *
  *@x: this is the number
  *@y: this is the power
  *Return: return the power value
  */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y <= -1)
	{
		return (-1);
	}
	else
		{
			return (x * _pow_recursion(x, y - 1));
		}

}
