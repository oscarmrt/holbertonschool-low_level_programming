#include "holberton.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: print_numbers from 0 to 9, do not print 2 and 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char h[] = "01356789\n";
	int b = 0;

	for ( ; b <= 8; b++)
		_putchar(h[b]);
}
