#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *pointer = malloc(numemb * size);

	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	while (size-- > 0)
		*pointer++ = 0;
	return (pointer);
}
