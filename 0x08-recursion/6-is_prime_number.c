#include "main.h"
int checkif_prime(int n, int counter);

/**
  *checkif_prime - this function check for prime number
  *
  *@n: the nubmer to be check it
  *@counter: cariable to divis with it
  *
  *Return: if the number is prime return y else n
  */

int  checkif_prime(int n, int counter)
{
	if (n == counter)
	{
		return (1);
	}
	if (n % counter == 0)
	{
		return (0);
	}

	else
	{
		return (checkif_prime(n, counter + 1));
	}
}

/**
  *is_prime_number - this fuction if perfect or not
  *
  *@n: int to be check
  *Return: 1 or0
  */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (n < 2)
	{
		return (0);
	}
	else
	{
		return (checkif_prime(n, 2));
	}

}
