#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - Entry point
 *
 * Description: write a function that prints a string, in reverse
 * @s: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	char rev;
	int d;

	for (d = 0; s[d] != 0; d++)
	{
	}
		for (d = d - 1; d >= 0; d--)
		{
			rev = s[d];
			_putchar(rev);
		}
	_putchar('\n');
}
