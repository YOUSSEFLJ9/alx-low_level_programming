#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *free_grid - this function free the previous 2 dimensional
  *
  *@grid: this is the 2 dimensional array
  *@height: represent the hight of array
  *
  *Return: there is not return
  */

  void free_grid(int **grid, int height)
{
	int i, j;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
			free(grid);
		}

	}
}
