#include "search_algos.h"

/**
 * linear_search - entry point
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Description: Write a function that searches for a value in an array
 * of integers using the Linear search algorithm
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%i] = [%i]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
