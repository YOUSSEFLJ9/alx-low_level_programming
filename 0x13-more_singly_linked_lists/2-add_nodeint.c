#include "lists.h"
/**
 *add_nodeint - this function add node t the begnning of list
 *@head: pointer point to head of list
 *@n: the int to be add to int
 *Return: the address of the node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = (int)n;
	new->next = *head;
	*head = new;
	return (new);
}
