#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  *init_dog - this fuction full struct dog with theer parms
  *
  *@d: is a variable of d
  *
  *@name: name of dog
  *@age: of dog
  *@owner: dog
  *Return: no return (just a full struct variable)
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	d->age = age;
	d->owner = owner;

}
