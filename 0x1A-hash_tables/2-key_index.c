#include "hash_tables.h"
/**
 * key_index - Entry point
 *
 * Description: Write a function that gives you the index of a key.
 * @key: Is the parameter to be checked.
 * @size: Is the parameter to be checked.
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
