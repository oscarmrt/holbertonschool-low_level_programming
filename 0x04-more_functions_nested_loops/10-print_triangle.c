#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @n: Integer
 * Description: prints a triangle, followed by a new line
 *
 * Return: 0
 */
void print_triangle(int n)
{
	int w;
	int s;
	int e;

	for (w = 0; w < n; w++)
	{
		for (s = 0; s < n; s++)
		{
			e = n - w - 1;
			if (s < e)
			{
			_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
