#include "holberton.h"
/**
 * print_sign - print_sign the sign of a number
 *
 * @n: Is an integer to be checked Return value of print_sign
 *
 * Description: write a function that print_sign the sign of a number
 *
 * Return: 1 and prints + if n is greater than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		else
		{
		_putchar('0');
		return (0);
		}
}
