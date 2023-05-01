#include "lists.h"
/**
 *get_nodeint_at_index - this function return the n of the node that repesent index
 *@head: is point the head of the list
 *@index: is the order of the node to be returned
 *Return: the n's node of index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *node;
	node = head;
	if (node == NULL)
		return (NULL);
	for (n = 0; (index > n) && (node != NULL); n++)
		node = node->next;
	if (node != NULL)
		return node;

	else
		return (NULL);
}
