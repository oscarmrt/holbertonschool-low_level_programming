#include "hash_tables.h"
/**
 * hash_table_set - Entry point
 *
 * Description: Write a function that adds an element to the hash table.
 * @ht: Is the parameter to be checked.
 * @key: Is the parameter to be checked.
 * @value: Is the parameter to be checked.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int hash_index;
    hash_node_t *new_node;
    hash_node_t *comp_node;

    if (ht == NULL || key == NULL || value == NULL)
		return (0);
    
    hash_index = key_index((unsigned char *)key, ht->size);

	for (comp_node = ht->array[hash_index]; comp_node != NULL; comp_node = comp_node->next)
	{
		if (strcmp(comp_node->key, key) == 0)
		{
			free(comp_node->value);
			comp_node->value = strdup(value);
			if (comp_node->value == NULL)
				return (0);
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[hash_index];
	ht->array[hash_index] = new_node;
	return (1);
}
