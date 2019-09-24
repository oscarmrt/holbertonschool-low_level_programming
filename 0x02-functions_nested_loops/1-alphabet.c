#include "holberton.h"
/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h[] = "abcdefghijklmnopqrstuvwxyz\n";
	int b = 0;

	for ( ; b <= 26; b++)
		_putchar(h[b]);
	return (0);
}
