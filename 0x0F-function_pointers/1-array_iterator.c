#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Entry point
 *
 * Description: write a function that executes a function given as a parameter
 * on each element of an array.
 * @array: Is the parameter to be checked
 * @size: Is the parameter to be checked
 * @action: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	for (k = 0; k < size; k++)
		action(array[k]);
}
