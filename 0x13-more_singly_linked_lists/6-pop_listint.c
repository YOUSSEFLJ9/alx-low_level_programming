#include "lists.h"
/**
 *pop_listint - this function going to remove the head of list
 *@head: the head of list
 *Return: the n value of head removed
 */
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
