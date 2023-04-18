#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *free_dog - function that free struct of dog
  *@d: struct of dog
  *
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free((*d).name);
	free(d->owner);
	free(d);
}

