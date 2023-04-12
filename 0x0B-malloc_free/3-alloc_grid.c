#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *alloc_grid - fuction return ointer to 2 dimensional arry
  *
  *@width: is the width of the array
  *@height: of the array
  *
  *Return: 0 if there is a failure or width || height negative or zero else arr
  */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);

			return (NULL);
		}

		for (j = 0; j < height; j++)
		p[i][j] = 0;
	}
	return (p);
}
