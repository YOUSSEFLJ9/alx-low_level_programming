#include "main.h"

int real_sqrt_recursion(int, int);
/**
  *real_sqrt_recursion - natural square root of number
  *
  *@number: this the number given
  *
  *@counter: counter given (usually 0)
  *
  *Return: the square number
  */
int real_sqrt_recursion(int number, int counter)
{
	if (counter * counter > number)
	{
		return (-1);
	}
	else if (counter * counter == number)
	{
		return (counter);
	}
	else
	{
		return (real_sqrt_recursion(number, counter + 1));
	}
}

/**
  *_sqrt_recursion - natural square root of number
  *
  *@n: give the root of this variable
  *
  *Return: (-1) if n have no root or root square
  */
int _sqrt_recursion(int n)
{
	return (real_sqrt_recursion(n, 0));
}
