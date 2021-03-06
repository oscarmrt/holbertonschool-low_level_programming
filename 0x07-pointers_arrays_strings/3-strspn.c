#include "holberton.h"
#include <stdio.h>
/**
 *  _strspn - Entry point
 *
 * Description: write a function that gets the length of a prefix substring
 * @s: Is the parameter to be checked
 * @accept: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{

	int k;
	int j;
	int c = 0;

	for (k = 0; *(s + k) != '\0'; k++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + k) == *(accept + j))
			{
				c++;
				break;
			}
		}
		if (*(accept + j) == '\0')
			break;
	}
	return (c);
}
