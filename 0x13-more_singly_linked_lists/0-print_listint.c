#include "lists.h"
/**
 *print_listint - this function print all node in listint stuct
 *@h :is the header
 *Return: the counter of how many node has printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *node;

	node = (listint_t *)h;
	while (node)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
