#include "holberton.h"
/**
 * print_square - draws a square in the terminal
 * @n: Integer
 * Description: write a function that draws a square in the terminal
 *
 * Return: 0
 */
void print_square(int n)
{
	int w;
	int s;

	for (w = 0; w < n; w++)
	{
		for (s = 0; s < n; s++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
