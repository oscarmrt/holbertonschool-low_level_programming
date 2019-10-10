#include "holberton.h"
#include <stdio.h>
int sqrt_recursion2(int n, int i);
/**
 * _sqrt_recursion - Entry point
 *
 * Description: write a function that returns the natural square root
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursion2(n, 0));
}

/**
 * sqrt_recursion2 - Entry point
 *
 * Description: Auxiliar function to proove the root
 * @n: Is the parameter to be checked
 * @i: Is the parameter to be checked
 * Return: Always (0) success
 */
int sqrt_recursion2(int n, int i)
{
	if (n <= 0)
		return (-1);
	if (n < i)
		return (-1);
	if (n == i * i)
		return (i);
	return (sqrt_recursion2(n, i + 1));
}
