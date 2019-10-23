#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Entry point
 *
 * Description: write a function that searches for an integer.
 * @array: Is the parameter to be checked
 * @size: Is the parameter to be checked
 * @cmp: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0)
		return (-1);
	if (cmp == '\0')
		return (-1);
	if (array == '\0')
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
		return (k);
	}
	return (-1);
}
