#include "lists.h"
/**
 *free_dlistint - function to free a douply linked list
 *@head: is a node in the linked list maybe head
 *Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	node = head;
	while (node)
	{
		head = node->next;
		free(node);
		node = head;

	}
}
