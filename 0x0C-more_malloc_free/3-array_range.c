#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  *array_range - Entry point
 *
 * Description:write a function that creates an array of integers
 * @min: Is the parameter to be checked
 * @max: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int *s;
	int q;

	if (min > max)
		return (NULL);

	s = malloc(((max - min) + 1) * sizeof(int));

	if (s == NULL)
		return (NULL);

	for (q = 0; min <= max; q++, min++)
		s[q] = min;

	return (s);
}
