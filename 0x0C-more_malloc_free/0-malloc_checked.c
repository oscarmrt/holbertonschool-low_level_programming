#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  *malloc_checked - Entry point
 *
 * Description: write a function that allocates memory usign malloc
 * @b: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *s = ((unsigned int *) malloc(sizeof(unsigned int) * b));

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
