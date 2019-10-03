#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - Entry point
 *
 * Description: write a function that reverse an array of integers
 * @a: Is the parameter to be checked
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int rev;
	int d = 0;
	n--;

	while (d < n)
	{
		rev = a[d];
		a[d] = a[n];
		a[n] = rev;
		d++;
		n--;
	}
}
