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
	list_t *ednode = malloc(sizeof(list_t));
	list_t *end;

	if (str == NULL)
		return (NULL);

	ednode->str = strdup(str);
	ednode->len = strlen(ednode->str);
	if (ednode == NULL || ednode->str == NULL)
		return (NULL);

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
