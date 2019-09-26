#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: Integer
 * Description: write a function that draws a straight line in the terminal
 *
 * Return: 0
 */
void print_line(int n)
{
	int w;

	for (w = 0; w < n; w++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
