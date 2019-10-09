#include "holberton.h"
#include <stdio.h>
/**
 *  factorial - Entry point
 *
 * Description: write a function that returns the factorial of a given number
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n < 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
