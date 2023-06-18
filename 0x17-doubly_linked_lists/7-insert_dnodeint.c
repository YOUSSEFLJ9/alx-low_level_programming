#include "lists.h"
/**
 *insert_dnodeint_at_index - function insert a node in an idx
 *@h: the head of thelinked list
 *@idx: the index where the node should be insert
 *@n: the number to add to the list
 *Return: the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new_node;
	unsigned int index = 0;

	if (idx == 0 || (*h)->next == NULL)
		return (add_dnodeint(h, n));

	node = *h;
	while (node)
	{
		if (index == idx)
			break;
		index++;
		node = node->next;
	}
	if (idx == index)
	{
		if (!node)
			return (add_dnodeint_end(h, n));

		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		node->prev->next = new_node;
		new_node->prev = node->prev;
		new_node->next = node;
		node->prev = new_node;
		return (new_node);
	}

	return (NULL);
}
