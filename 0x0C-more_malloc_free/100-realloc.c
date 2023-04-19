#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  *_realloc - this function reallocate a memory blocks
  *@ptr: pinter
  *@old_size: of pointer
  *@new_size: of pointer
  *Return: to void
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new = malloc(new_size);
	if (new == NULL)
	{
		return (NULL);
	}
	if (new_size < old_size)
		memcpy(new, ptr, new_size);
	else
		memcpy(new, ptr, old_size);

	free(ptr);

	return (new);
}
