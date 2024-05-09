#include "hash_tables.h"
/**
  * hash_table_delete - function that remove the hash tabe.
  * @ht: the hash table
  * Return: do not do anything if the ht is NULL
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t	*node;
	hash_node_t	*tmp;
	hash_table_t *head;


	if (!ht)
		return;
	i = 0;
	head = ht;
	while (i < head->size)
	{
		if (head->array[i] != NULL)
		{
			node = head->array[i];
			while (node)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
		i++;
	}
	free(head->array);
	free(head);
	head = NULL;
}
