#include "lists.h"
/**
 *get_dnodeint_at_index - function find a node by index
 *@head: the head of list
 *@index: the index to find node , start from 0
 *Return: the node at the index position
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = head;
	while (node)
	{
		if (idx == index)
			return (node);
		node = node->next;
		idx++;
	}
	return (NULL);
}
