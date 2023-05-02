#include "lists.h"
/**
 *reverse_listint - this function revirce a list node
 *@head: the head of the list
 *Return: the head of the revirse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *prvnode = NULL;

	while (*head)
	{
		node = (*head)->next;
		(*head)->next = prvnode;
		prvnode = *head;
		*head = node;
	}
	*head = prvnode;
	return (*head);
}
