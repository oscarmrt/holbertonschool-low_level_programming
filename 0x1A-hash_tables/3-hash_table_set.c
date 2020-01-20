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
	hash_node_t *cp_n;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	hash_index = key_index((unsigned char *)key, ht->size);

	for (cp_n = ht->array[hash_index]; cp_n != NULL; cp_n = cp_n->next)
	{
		if (strcmp(cp_n->key, key) == 0)
		{
			free(cp_n->value);
			cp_n->value = strdup(value);
			if (cp_n->value == NULL)
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
