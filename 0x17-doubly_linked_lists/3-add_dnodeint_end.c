#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end of a list
 *@head: node at some position
 *@n: is the number to be added
 *Return: the adress of the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		node = *head;
		while (node->next)
		{
			node = node->next;
		}
		node->next = new_node;
		new_node->prev = node;
	}
	return (new_node);
}
