#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
  *_calloc - is function to allocates memory for an array
  *
  *@nmemb: is number of elment of arry
  *@size: is the size of each element
  *
  *Return: a void pointer with elements and size
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		free(pointer);
		return (NULL);
	}
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	memset(pointer, 0, size * nmemb);
	return (pointer);
}
