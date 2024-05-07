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

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t) * size);
	if (!ht)
		return (NULL);
	else
		return (ht);

}
