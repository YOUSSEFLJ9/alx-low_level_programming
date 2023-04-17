#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  *Mystlen - count lenght of string
  *@string: string
  *Return: lenght
  */
int Mystlen(char *string)
{
	int i = 0;

	while (string[i] != '\0')
		i++;
	return (i);
}
/**
  *Mystcopy - fuction to copy strings
  *
  *@dest: destnation vr
  *@src: source vr
  *Return: dest full of src
  */
char *Mystcopy(char *dest, char *src)
{
	int len = Mystlen(src);
	int i;

	for (i = 0 ; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

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
	dog_t *dog = malloc(sizeof(struct dog));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(Mystlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	Mystcopy(dog->name, name);
	dog->owner = malloc(Mystlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	Mystcopy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
