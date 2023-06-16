#include "lists.h"

/**
 * delete_dnodeint_at_index - function that
 * deletes the node at index of a list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int idx = 0;

	if (!*head)
		return (-1);

	while (node && idx < index)
	{
		node = node->next;
		idx++;
	}

	if (!node)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		if (node->next)
			node->next->prev = NULL;
		free(node);
		return (1);
	}

	node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	free(node);
	return (1);
}
