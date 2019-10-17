#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  *_calloc - Entry point
 *
 * Description:write a function that allocates memory for an array using malloc
 * @nmemb: Is the parameter to be checked
 * @size: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int q;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (q = 0; q < nmemb * size; q++)
		s[q] = '\0';

	return (s);
}
