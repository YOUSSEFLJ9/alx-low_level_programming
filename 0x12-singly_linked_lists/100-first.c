#include "lists.h"
void first(void)__attribute__((constructor));

void first(void)
{
	printf("%s", "You're beat! and yet, you must allow,\n");
	printf("%s", "I bore my house upon my back!\n");
}
