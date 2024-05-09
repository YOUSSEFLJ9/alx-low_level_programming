#include "hash_tables.h"
/**
  * hash_table_print - function that print the hash tabe.
  * @ht: the hash table
  * Return: do not printf anything if the ht is NULL
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	unsigned long k;

	i = 0;
	k = 0;
	if (!ht || !ht->array)
		return;
	printf("{");
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			if (k > 0 && ht->array[i])
				printf(", ");
			k++;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	printf("}\n");

}
