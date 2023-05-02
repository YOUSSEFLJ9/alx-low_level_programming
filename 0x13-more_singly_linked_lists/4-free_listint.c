#include "lists.h"
/**
 *free_listint - free the list from head
 *@head: the head of list
 *no return
 */
void free_listint(listint_t *head)
{
	listint_t *g;

	g = head;
	while (head != NULL)
	{
		head = g->next;
		free(g);

		g = head;

	}
}
