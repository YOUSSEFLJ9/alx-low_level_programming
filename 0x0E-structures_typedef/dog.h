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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
