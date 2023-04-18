#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *array_range - is a function contain all values from min to max
  *@min: this min var
  *@max: is max var
  *Return: pointer or NULL if fail or min>max
  */
int *array_range(int min, int max)
{
	int countnumbers = (max - min) + 1;
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * countnumbers);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; (min + i) <= max; i++)
	{
		arr[i] = (min + i);
	}
	return (arr);
}
