#include "lists.h"
/**
  *list_len - this function count all the nodes in a linked list
  *@h: this is the linked list
  *Return: the counter of nodes
  */
size_t list_len(const list_t *h)
{
	size_t count;
	list_t *node;

	if (h == NULL)
	{
		free(node);
		return (0);
	}
	else
	{
		node = (list_t *) h;
		count = 0;
		while (node != NULL)
		{
			count++;
			node = node->next;
		}
		return (count);

	}
}
