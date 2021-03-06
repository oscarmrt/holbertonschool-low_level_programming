#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  *string_nconcat - Entry point
 *
 * Description: write a function that concatenates two strings
 * @s1: Is the parameter to be checked
 * @s2: Is the parameter to be checked
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int q;
	unsigned int w;
	unsigned int r;
	unsigned int f;

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
	if (n >= w)
		n = w;
	s = malloc((sizeof(char) * q) + (sizeof(char) * (n + 1)));
	if (s == NULL)
		return (NULL);

	for (r = 0; r < q; r++)
	{
		s[r] = s1[r];
	}
	for (f = 0; f < n; f++, r++)
	{
		s[r] = s2[f];
	}
	s[r] = '\0';
	return (s);
}
