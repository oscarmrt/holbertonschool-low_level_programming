#include "holberton.h"
#include <stdio.h>
/**
 *  *_memcpy - Entry point
 *
 * Description: write a function that copies memory area
 * @dest: Is the parameter to be checked
 * @src: Is the parameter to be checked
 * @n: Is the parameter to be checked.
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int k;

	for (k = 0; k < n; k++)
	{
		*(dest + k) = *(src + k);
	}
	return (dest);
}
