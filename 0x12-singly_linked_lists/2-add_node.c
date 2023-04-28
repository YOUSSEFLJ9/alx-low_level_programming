#include "lists.h"
/**
  *add_node - this fumction add new node at rhe beginning of the list
  *@head: is a pointer to point to NULL if the list empty or the next nude
  *@str: pointer to string we want to add it
  *Return: the nude who we add it
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *strdp;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	strdp = strdup(str);
	node->str = strdp;
	if (node == NULL)
	{
		free(strdp);
		free(node);
		return (NULL);
	}
	node->len = strlen(node->str);
	node->next = *head;
	*head = node;
	return (node);
}
