#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_dog - this function going to print struct dog
  *
  *@d: variable of type struct dog
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *n = "(nil)";

		if (d->name == NULL)
			d->name = n;
		printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %.*f\n", 6, d->age);

		if (d->owner == NULL)
			d->owner = n;
		printf("Owner: %s\n", d->owner);
	}
}
