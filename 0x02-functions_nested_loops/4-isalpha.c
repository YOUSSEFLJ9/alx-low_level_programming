#include  "main.h"
/**
 *_isalpha - this function return if the input is alphabet or not
 *@c: input to check
 *Return: 1 if is a letter ,0 for other
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123 )
	{
		return (1);
	}
	else
		return (0);
}
