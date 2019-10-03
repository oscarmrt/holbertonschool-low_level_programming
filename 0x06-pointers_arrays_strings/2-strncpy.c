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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
