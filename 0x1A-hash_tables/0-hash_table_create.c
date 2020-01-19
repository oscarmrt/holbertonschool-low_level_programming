#include "hash_tables.h"
/**
 * hash_table_create - Entry point
 *
 * Description: write a function that creates a hash table.
 * @size: Is the parameter to be checked.
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	new_hash_table = NULL;
	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);
	new_hash_table->size = size;
	new_hash_table->array = malloc(size * sizeof(hash_table_t *));
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	return (new_hash_table);
}
