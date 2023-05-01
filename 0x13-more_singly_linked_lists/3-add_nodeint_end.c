#include "lists.h"
/**
 *add_nodeint_end - this function going to add node at the end of list
 *@head: pointer to point head of list
 *@n: the int to add to list
 *Return: the adderss of the node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newed, *tmp;

	newed = malloc(sizeof(listint_t));
	if (newed == NULL)
		return (NULL);
	
	newed->n = (int)n;
	newed->next = NULL;
	if (*head == NULL)
	{
		*head = newed;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = newed;
	}
	return (newed);
}
