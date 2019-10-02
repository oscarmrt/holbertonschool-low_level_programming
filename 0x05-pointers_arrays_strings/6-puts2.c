#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - Entry point
 *
 * Description: write a function that prints every other character of a string
 * @str: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int d;

	while (str[d] != '\0')
	{
		if (d % 2 == 0)
			_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}
