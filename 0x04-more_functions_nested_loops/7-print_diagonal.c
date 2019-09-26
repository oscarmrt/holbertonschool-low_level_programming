#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: Integer
 * Description: write a function that draws a diagonal line in the terminal
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int w;
	int s;

	for (w = 0; w < n; w++)
	{
		for (s = 0; s <= w; s++)
	{
		if (s != w)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('\\');
		}
	}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
