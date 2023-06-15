#include "lists.h"
/**
 *print_dlistint - this funtion print all elements of a dlisint_t list
 *@h: the node in a some postion.
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *next = (dlistint_t *)h;
	dlistint_t *back = (dlistint_t *)h;

	if (h == NULL)
		return (0);

	while ((back = back->prev))
	{
		printf("%d\n", back->n);
		count++;
	}
	while (next)
	{
		printf("%d\n", next->n);
		count++;
		next = next->next;
	}
	return (count);
}
