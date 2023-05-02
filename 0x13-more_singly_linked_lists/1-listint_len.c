#include "lists.h"
/**
 *listint_len -this function count the nude of listint list
 *@h: the header of listint list.
 *Return: the number of element in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
