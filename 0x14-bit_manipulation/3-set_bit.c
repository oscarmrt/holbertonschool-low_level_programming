#include "holberton.h"

/**
 * set_bit - entry point
 * @n: Is the parameter to be checked
 * @index: Is the parameter to be checked
 *
 * Description: write a function that sets the value of a bit to 1
 * at a given index.
 * Return: 1 if it worked, or -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mk;

	mk = 1 << index;

	if (index > 63)
		return (-1);

	if (*n | mk)
		*n = *n + mk;
	return (1);
}
