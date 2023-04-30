#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *node;

	if (h == NULL)
		return (0);

	node = (listint_t *)h;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
