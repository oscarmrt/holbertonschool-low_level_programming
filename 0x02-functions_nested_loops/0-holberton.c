#include "holberton.h"
/**
 * main - Entry point
 *
 * Description: Print Holberton using _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h[] = "Holberton\n";
	int b = 0;

	for ( ; b <= 9; b++)
		_putchar(h[b]);
	return (0);
}
