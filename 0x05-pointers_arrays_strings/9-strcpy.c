#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - Entry point
 *
 * Description: write a function that copies the string pointed to by src
 * @dest: Is the parameter to be checked
 * @src: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int d = 0;

	while (src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
