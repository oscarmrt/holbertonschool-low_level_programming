#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  *_strdup - Entry point
 *
 * Description: write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *s;
	int q;
	int w;

	if (str == 0)
		return (NULL);
	for (w = 0; str[w] != 0; w++)
	{
	}

	s = malloc(1 + sizeof(char) * w);
	if (s == NULL)
		return (NULL);

	for (q = 0; q < w; q++)
		s[q] = str[q];
	return (s);
}
