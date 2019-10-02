#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Entry point
 *
 * Description: write a function that reverse a string
 * @s: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	char rev;
	int d;
	int x;

	for (d = 0; s[d] != 0; d++)
	{
	}

	x = 0;
	d = d - 1;

	while (x < d)
	{
		rev = s[d];
		s[d] = s[x];
		s[x] = rev;
		x++;
		d--;
	}
}

