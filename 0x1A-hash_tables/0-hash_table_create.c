#include "hash_tables.h"
/**
 * hash_table_create - function that creat a hash table
 *
 * @size: the size of the array
 * Return: if error NULL
 * else a pointer of the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int	d;

	if (size <= 0)
		return (NULL);
	d = 0;
	ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t) * size);
	while (d < size)
	{
		ht->array[d++] = NULL;
	}
	return (ht);
}
