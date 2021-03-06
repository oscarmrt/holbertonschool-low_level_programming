#include "holberton.h"
#include <stdio.h>
/**
 *  print_diagsums - Entry point
 *
 * Description: write a function that prints the sum of the two diag
 * @a: Is the parameter to be checked
 * @size: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{

	int k;
	int j;
	int c = 0;
	int f = 0;

	for (k = 0, j = (size - 1); k < size; k++, j--)
	{
		c = c + *(a + (k + ((size - 1) * k) + j));
		f = f + *(a + (k + ((size - 1) * k) + k));
	}
	printf("%d, %d\n", f, c);
}
