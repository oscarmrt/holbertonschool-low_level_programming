#include "holberton.h"
#include <stdio.h>
/**
 *  *_strncat - Entry point
 *
 * Description: write a function that concatenates two strings
 * @dest: Is the parameter to be checked
 * @src: Is the parameter to be checked
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int g;
	int m;

	for (g = 0; dest[g] != '\0'; g++)
	{
	}
	for (m = 0; m < n && src[m] != '\0'; m++, g++)
	{
		dest[g] = src[m];
	}
	return (dest);
}
