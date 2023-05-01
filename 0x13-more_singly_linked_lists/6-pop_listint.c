#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i ;
	if (*head == NULL)
		return (0);
	
	node = *head;
	i = (*head)->n;
	*head = node->next;
	free(node);
	return (i);
}
