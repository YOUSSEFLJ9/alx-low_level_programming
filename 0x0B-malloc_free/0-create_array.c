#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  **create_array - function creat array of char
  *@size: the size of array
  *@c: the variable c
  *
  *Return: NULL if size 0/ it fails or pinter of array
  */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
