#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  *str_concat - Entry point
 *
 * Description: write a function that concatenates two strings
 * @s1: Is the parameter to be checked
 * @s2: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int q;
	int w;
	int r;
	int f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (q = 0; s1[q] != '\0'; q++)
	{
	}
	for (w = 0; s2[w] != '\0'; w++)
	{
	}
	s = malloc((sizeof(char) * q) + (sizeof(char) * (w + 1)));
	if (s == NULL)
		return (NULL);

	for (r = 0; r < q; r++)
	{
		s[r] = s1[r];
	}
	for (f = 0; f < w; f++, r++)
	{
		s[r] = s2[f];
	}
	return (s);
}
