#include "hash_tables.h"
/**
  * hash_table_get - give the index of a key.
  * @ht: the hash table
  * @key: the key string
  * Return: the value associated with the element if success otherwise NULL
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long	indx;

	if (!ht || !key || !*key)
		return (NULL);
	indx = key_index((unsigned const char *)key, ht->size);
	while (ht->array[indx])
	{
		if (!strcmp(ht->array[indx]->key, key))
			return (ht->array[indx]->value);
		ht->array[indx] = ht->array[indx]->next;
	}
	return (NULL);
}
