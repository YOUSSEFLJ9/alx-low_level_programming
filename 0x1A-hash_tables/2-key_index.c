#include "hash_tables.h"
/**
  * key_index - give the index of a key.
  * @key: the key string
  * @size: the size of the array of the hash table
  * Return: the index at which the key pair shold be stored
  * in the array of the hash tabe
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
