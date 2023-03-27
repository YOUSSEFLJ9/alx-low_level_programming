#include "main.h"
/**
  *_strlen - this fuction count the number of charachters
  *
  *@s: this is char counter
  *
  *Return: the lenght of the char (string)
  */

int _strlen(char *s)
{
	int len = 0;

	for (;*s++;)
	{
		len++;
	}
	return (len);
}
