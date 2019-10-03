#include "holberton.h"
#include <stdio.h>
/**
 * *cap_string - Entry point
 *
 * Description: write a function that capitalizes all words of a string
 * @cap: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *cap_string(char *cap)
{
	int h;

	for (h = 0; cap[h] != '\0'; h++)
	{
		if (cap[h - 1] == ' ' && cap[h] >= 97 && cap[h] <= 122)
			cap[h] = cap[h] - 32;
	}
	return (cap);
}
