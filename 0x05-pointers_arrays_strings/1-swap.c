#include "holberton.h"
/**
 *  swap_int - Entry point
 *
 * Description: write a function that swaps the values of two integers
 * @a: Is the parameter to be checked
 * @b: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
