#include "holberton.h"
#include <stdio.h>
/**
 *  *_strcat - Entry point
 *
 * Description: write a function that concatenates two strings
 * @dest: Is the parameter to be checked
 * @src: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int m;

	for (n = 0; dest[n] != '\0'; n++)
	{
	}
	for (m = 0; src[m] != '\0'; m++, n++)
	{
		dest[n] = src[m];
	}
	return (dest);
}
