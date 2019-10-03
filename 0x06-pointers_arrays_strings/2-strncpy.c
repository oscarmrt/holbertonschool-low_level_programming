#include "holberton.h"
#include <stdio.h>
/**
 * *_strncpy - Entry point
 *
 * Description: write a function that copies a string
 * @dest: Is the parameter to be checked
 * @src: Is the parameter to be checked
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d = 0;

	while (d < n && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
