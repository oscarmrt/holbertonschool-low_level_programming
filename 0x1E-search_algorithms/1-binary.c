#include "search_algos.h"

/**
 * binary_search - entry point
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Description: Write a function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int x;
	unsigned int low = 0;
	unsigned int mid;
	unsigned int high = size - 1;

	if (array == NULL)
		return (-1);

		while (low <= high)
		{
			printf("Searching in array: ");
			for (x = low; x < high; x++)
				printf("%i, ", array[x]);
			printf("%i\n", array[x]);
			mid = (low + high) / 2;
			if (value > array[mid])
				low = mid + 1;
			else if (value < array[mid])
				high = mid - 1;
			else
				return (mid);
		}
	return (-1);
}
