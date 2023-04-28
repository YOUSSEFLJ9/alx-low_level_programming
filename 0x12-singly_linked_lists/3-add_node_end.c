#include "lists.h"
/**
 * add_node_end - this function add new node in te end of list
 *@head: this is poiter to point to the head of the list
 *@str: is the string to add to list
 *Return: the node adderss or NULL
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ednode;
	list_t *end;

	if (str == NULL)
		return (NULL);
	ednode = malloc(sizeof(list_t));
	if (ednode == NULL)
		return (NULL);

	ednode->str = strdup(str);
	if (ednode->str == NULL)
	{
		free(ednode);
		return (NULL);
	}

	ednode->len = strlen(ednode->str);

	if (*head == NULL)
	{
		*head = ednode;
		(*ednode).next = NULL;
	}
	else
	{
		end = *head;
	while (end->next != NULL)
		end = end->next;

	end->next = ednode;
	ednode->next = NULL;

	}

	return (ednode);
}
