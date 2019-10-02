#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Entry point
 *
 * Description: write a function that prints n elements of an array of integers
 * @n: Is the parameter to be checked
 * @a: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%d", a[d]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
