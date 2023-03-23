#include "main.h"
/**
  *_isdigit - this function check for a digit
  *
  *Return: 1 if a digit ,0 otherwise
  *
  *@c:this int represent the int put
  */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
