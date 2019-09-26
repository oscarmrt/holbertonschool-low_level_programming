#include "holberton.h"
/**
 * more_numbers - Entry point
 *
 * Description: prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	char h[] = "01234567891011121314\n";
	int b = 0;
	int p = 0;

	while (p < 10)
	{
		for ( ; b <= 20; b++)
		{
			_putchar(h[b]);
		}
		b = 0;
		p++;
	}
}
