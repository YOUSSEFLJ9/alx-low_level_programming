#include "lists.h"
/**
 *free_listint2 - this function free list include head
 *@head: is the head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *nude;

	nude = *head;
	if (nude == NULL)
		return;

	while (*head)
	{
		nude = (*head)->next;
		free(*head);
		*head = nude;
	}
	*head = NULL;

}
