#include "holberton.h"

/**
 * get_bit - entry point
 * @n: Is the parameter to be checked
 * @index: Is the parameter to be checked
 *
 * Description: write a function that returns the value of a bit at a
 * given index.
 * Return: The value of the bit at index or -1 if error..
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (n & (1UL << index))
		return (1);
	else
		return (0);
}
