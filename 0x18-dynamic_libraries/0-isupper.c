#include "main.h"
/**
  *_isupper - check the log char if upper
  *
  *@c: the char input
  *
  *Return: 1 if uppercase , 0 anything else
  */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);

}
