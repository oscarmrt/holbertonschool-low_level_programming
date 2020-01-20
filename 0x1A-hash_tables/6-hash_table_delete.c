#include "hash_tables.h"
/**
 * hash_table_delete - Entry point
 *
 * Description: Write a function that prints a hash table.
 * @ht: Is the parameter to be checked.
 * Return: You should print the key/value in the order
 * that they appear in the array of hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int hash_index;
	hash_node_t *opt;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (hash_index = 0; hash_index < ht->size; hash_index++)
	{
		for (; ht->array[hash_index] != NULL; ht->array[hash_index] = opt)
		{
			opt = ht->array[hash_index]->next;
			free(ht->array[hash_index]->key);
			free(ht->array[hash_index]->value);
			free(ht->array[hash_index]);
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
