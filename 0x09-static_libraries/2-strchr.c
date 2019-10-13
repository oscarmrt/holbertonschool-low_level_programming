#include "holberton.h"
#include <stdio.h>
/**
 *  *_strchr - Entry point
 *
 * Description: write a function that locates a character in a string
 * @s: Is the parameter to be checked
 * @c: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{

	int k;

	for (k = 0; *(s + k) != '\0'; k++)
	{
		if (*(s + k) == c)
			return (s + k);
	}
	if (*(s + k) == c)
		return (s + k);
	return (NULL);
}
