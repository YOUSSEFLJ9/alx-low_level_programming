#include "lists.h"
#include <stdio.h>
/**
  *print_list - this function print all the nodes in a linked list
  *@h: this is the linked list
  *Return: the counter of the nodes printed
  */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *node;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		node = h;
		count = 0;
		while (node != NULL)
		{
			if (node->str == NULL)
			{
				node->str = "nil";
				node->len = 0;
			}
			printf("[%u] %s\n", node->len, node->str);
			count++;
			node = node->next;
		}
		return (count);
	}
}
