#include "lists.h"
/**
 *sum_dlistint - fucntion sum all the data n of linkedlist
 *@head: of a linkedlist
 *Return: the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		node = head;
		while (node)
		{
			sum += node->n;
			node = node->next;
		}
		return (sum);
	}
}
