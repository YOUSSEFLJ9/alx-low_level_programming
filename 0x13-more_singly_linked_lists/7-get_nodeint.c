#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *node;
	node = head;
	for (n = 0; (index > n) && (node != NULL); n++)
		node = node->next;
	if (node != NULL)
		return node;

	return (NULL);
}
