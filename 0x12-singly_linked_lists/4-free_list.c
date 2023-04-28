#include "lists.h"
/**
 *free_list - this function free the list
 *@head: is the head of the lest to be freed
 */
void free_list(list_t *head)
{
	list_t *remove = head;
	while (remove != NULL)
	{
		head = remove->next;
		free(remove);
		remove = head;
	}

}
