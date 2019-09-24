#include "holberton.h"
/**
 * print_last_digit - print_last_digit  prints the last digit of a number
 * @q: Integer
 * Description: write a function that prints the last digit of a number
 *
 * Return: 0
 */
int print_last_digit(int q)
{
	int w = q % 10;
	int t;

	if (w < 0)
		w = w * -1;
	t = '0' + w;
	putchar (t);
	return (w);
}
