#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	int i;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "ana");
    hash_table_set(ht, "mentioner", "m9awed");
    hash_table_set(ht, "heliotropes", "wach");
    hash_table_set(ht, "neurospora", "tele");

	i = 0;
	while (i < 1024)
	{
		if(ht->array[i])
		{
			while(ht->array[i])
			{
				printf("key : %s -> value : %s\n", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] =ht->array[i]->next;
			}
			printf("\n...\n");
		}
		i++;
	}
    return (EXIT_SUCCESS);
}
