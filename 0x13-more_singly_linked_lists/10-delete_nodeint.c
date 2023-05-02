#include "lists.h"
/**
 *delete_nodeint_at_index - this function remove node at a position index
 *@head: the head of list
 *@index: the index of position
 *Return: 1 if success ,otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *prev;

	current = *head;
	prev = *head;
	if (head == NULL)
		return (-1);

	if (index == 0 && *head != NULL)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else if (index != 0)
	{
		for (i = 0; i < index && current != NULL; i++)
		{
			prev = current;
			current = current->next;
		}
		prev->next = current->next;
		free(current);
		return (1);
	}
	else
		return (-1);
}
