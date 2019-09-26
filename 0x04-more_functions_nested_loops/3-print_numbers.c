#include "holberton.h"
/**
 * print_numbers - Entry point
 *
 * Description: print_numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char h[] = "0123456789\n";
	int b = 0;

	for ( ; b <= 10; b++)
		_putchar(h[b]);
}
