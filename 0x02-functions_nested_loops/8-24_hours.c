#include "holberton.h"
/**
 * jack_bauer - jack_bauer prints every minute of the day
 * @void: Integer
 * Description: write a function that prints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int w = 0;
	int r = 0;

	for ( ; w <= 23; w++)
	{
		for ( ; r <= 59; r++)
		{
			_putchar(w / 10 + '0');
			_putchar(w % 10 + '0');
			_putchar(':');
			_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
			_putchar('\n');
		}
		r = 0;
	}
}
