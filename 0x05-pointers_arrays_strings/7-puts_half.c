#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - Entry point
 *
 * Description: write a function that prints half of a string
 * @str: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; d++)
	{
	}
	d++;

	for (d /= 2; str[d] != '\0'; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
