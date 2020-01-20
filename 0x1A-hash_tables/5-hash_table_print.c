#include "hash_tables.h"
/**
 * hash_table_print - Entry point
 *
 * Description: Write a function that prints a hash table.
 * @ht: Is the parameter to be checked.
 * Return: You should print the key/value in the order
 * that they appear in the array of hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int x;
	char alert = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{

		for (temp = ht->array[x]; temp != NULL; temp = temp->next)
		{
			if (alert == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			alert = 1;
		}
	}
	printf("}\n");
}
