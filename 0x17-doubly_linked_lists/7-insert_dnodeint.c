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
	dlistint_t *node;
	dlistint_t *new_node;
	unsigned int index = 0;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	node = *h;
	while (node)
	{
		if (idx == index)
		{
			node->prev->next = new_node;
			new_node->prev = node->prev;
			new_node->next = node;
			node->prev = new_node;
		}
		index++;
		node = node->next;
	}
	return (NULL);
}
