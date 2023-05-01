#include "lists.h"
/**
 *free_listint2 - this function free list include head
 *@head: is the head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *nude;

	if (*head == NULL)
		return;

	nude = *head;
	while (*head)
	{
		*head = nude->next;
		free(nude);
		nude = *head;
	}

}
