#include "lists.h"
void first(void)__attribute__((constructor));

/**
 *first - this fuction print before the main start
 */
void first(void)
{
	printf("%s", "You're beat! and yet, you must allow,\n");
	printf("%s", "I bore my house upon my back!\n");
}
