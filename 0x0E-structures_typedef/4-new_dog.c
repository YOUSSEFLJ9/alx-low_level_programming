#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  *new_dog - this fuction fill variable of dog_t from the struct dog
  *
  *@name: dogs name
  *@age: dog age
  *@owner: dog owner
  *
  *Return: dog struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	if (dog2 == NULL)
		dog2 = malloc(sizeof(struct dog));

	(*dog2).name = name;
	dog2->age = age;
	dog2->owner = owner;

	return (dog2);
}
