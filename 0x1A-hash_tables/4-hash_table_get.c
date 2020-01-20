#include "hash_tables.h"
/**
 * hash_table_get - Entry point
 *
 * Description: Write a function that retrieves a value associated with a key.
 * @ht: Is the parameter to be checked.
 * @key: Is the parameter to be checked.
 * Return: Value assoc with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);
	hash_index = key_index((const unsigned char *)key, ht->size);
	for (temp = ht->array[hash_index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
