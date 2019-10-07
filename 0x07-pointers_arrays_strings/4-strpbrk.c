#include "holberton.h"
#include <stdio.h>
/**
 *  *_strpbrk - Entry point
 *
 * Description: write a function that searches a string for set of bytes
 * @s: Is the parameter to be checked
 * @accept: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{

	int k;
	int j;

	for (k = 0; *(s + k) != '\0'; k++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + k) == *(accept + j))
				break;
		}
		if (*(accept + j))
			return (s + k);
	}
	return (0);
}
