#include "main.h"
/**
  *int _strlen - this fuction calclut the length
  *
  *@s: this is string of char
  *
  */
int _strlen(char *s)
{
	int len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
