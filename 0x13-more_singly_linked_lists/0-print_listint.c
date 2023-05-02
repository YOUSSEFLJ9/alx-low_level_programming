#include "lists.h"
/**
 *print_listint - this function print all node in listint stuct
 *@h :is the header
 *Return: the counter of how many node has printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
