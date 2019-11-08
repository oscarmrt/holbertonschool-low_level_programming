#include "holberton.h"

/**
 * print_binary - entry point
 * @n: Is the parameter to be checked
 *
 * Description: write a function that prints the binary representation
 * of a number.
 * Return: The converted number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mk;
	int k;

	mk = 1UL << 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	for (; mk > 0; mk = mk >> 1)
	{
		if (n & mk)
		{
			_putchar('1');
			k = 1;
		}
		else
		{
			if (k)
			_putchar('0');
		}
	}
}
