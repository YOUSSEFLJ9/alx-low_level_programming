#include "lists.h"
/**
 *dlistint_len - funtion return the N element in linked doubly list
 *@h: this double linked list at some postion
 *Return: the number of element
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *next = (dlistint_t *)h;
	dlistint_t *back = (dlistint_t *)h;

	if (h == NULL)
		return (0);

	while ((back = back->prev))
		count++;
	while (next)
	{
		count++;
		next = next->next;
	}
	return (count);
}
