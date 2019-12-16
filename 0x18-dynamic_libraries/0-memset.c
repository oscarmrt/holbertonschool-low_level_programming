#include "holberton.h"
#include <stdio.h>
/**
 *  *_memset - Entry point
 *
 * Description: write a function that fills memory with a constant byte
 * @s: Is the parameter to be checked
 * @b: Is the parameter to be checked
 * @n: Is the parameter to be checked.
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int k;

	for (k = 0; k < n; k++)
	{
		*(s + k) = b;
	}
	return (s);
}
