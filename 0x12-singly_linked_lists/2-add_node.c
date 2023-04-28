#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *strdp;

	node = malloc(sizeof(list_t));
	if(node == NULL)
		return (NULL);

	strdp = strdup(str);
	node->str = strdp;
	if (node == NULL)
	{
		free(strdp);
		free(node);
	}
	node->len = strlen(node->str);
	node->next = *head;
	*head = node;
	return (node);
}
