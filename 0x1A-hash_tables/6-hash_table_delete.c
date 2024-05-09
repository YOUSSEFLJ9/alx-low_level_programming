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

	if (!ht)
		return;
	i = 0;
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			node = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(node);
		}
		i++;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
