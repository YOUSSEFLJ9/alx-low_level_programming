#include "lists.h"
/**
 *insert_nodeint_at_index - this function instert new node at the idx postion
 *
 *@head: head is the head list
 *@idx: the postion where the pointer should insert
 *@n: the int to be inster
 *Return: the ddress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node, *perv;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || (*head == NULL && idx != 0))
		return (NULL);

	new_node->n = n;
	node = *head;
	perv = node;

		for (i = 0; idx > i && node != NULL; i++)
		{
			perv = node;
			node = node->next;

		}

		perv->next = new_node;
		new_node->next = node;

		if (new_node == NULL)
			return (NULL);
		else
			return (new_node);


}
