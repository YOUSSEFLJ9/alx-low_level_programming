#include "hash_tables.h"
/**
  * hash_table_set - give the index of a key.
  * @ht: the hash table
  * @key: the key string
  * @value: is the key
  * Return: 1 if success otherwise 0
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long	j;
	hash_node_t		*new_node;

	if (!ht || !key  || !*key || !value)
		return (0);

	j = key_index((const unsigned char *) key, ht->size);
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = ht->array[j];
	ht->array[j] = new_node;
	return (1);
}
