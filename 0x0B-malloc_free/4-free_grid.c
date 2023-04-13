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
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
