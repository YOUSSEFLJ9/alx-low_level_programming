#include "main.h"
/**
  *factorial - this is factorial
  *
  *@n: Number to be multp!
  *
  *Return: n!
  */
int factorial(int n)
{
	if (n <= -1)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * (factorial(n - 1)));


}
