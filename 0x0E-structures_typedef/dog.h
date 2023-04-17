#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - struct have info about dog
 * @name: namr of dog
 * @age: age
 * @owner: dog owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
