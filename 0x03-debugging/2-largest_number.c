#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (c > b && b > a)
	{
		largest = c;
	}
	else if (b > c && c > a)
	{
		largest = b;
	}
	else
	{
		largest = a;
	}

	return (largest);
}
