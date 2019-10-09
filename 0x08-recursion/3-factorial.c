#include "holberton.h"
#include <stdio.h>
/**
 * factorial - Entry point
 *
 * Description: write a function that returns the factorial of a given number
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	int f;

	if (n < 0)
		return (-1);
	else
		f = n * factorial(n - 1);
	return (f);
}
