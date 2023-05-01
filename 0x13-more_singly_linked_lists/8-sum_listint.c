#include "lists.h"
/**
 *sum_listint - this function count the sum of all the n in all nudes
 *@head: is the head of the list
 *Return: the sum full of sum of all n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
