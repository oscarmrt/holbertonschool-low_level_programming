#include "hash_tables.h"
/**
 * hash_djb2 - Entry point
 *
 * Description: write a function implementing the djb2 algorithm.
 * @str: Is the parameter to be checked.
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
