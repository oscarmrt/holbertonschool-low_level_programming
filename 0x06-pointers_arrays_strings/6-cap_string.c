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
	char sep[] = {10, 9, 32, 44, 46, 59, 33, 63, 34, 40, 41, 123, 125};
	int j;

	for (h = 0; cap[h] != '\0'; h++)
	{
		if (cap[h] >= 97 && cap[h] <= 122)
		{
			if (h == 0)
			cap[0] = cap[0] - 32;
			else
			{
				for (j = 0; sep[j] != '\0'; j++)
				{
					if (cap[h - 1] == sep[j])
						cap[h] = cap[h] - 32;
				}
			}
		}
	}
	return (cap);
}
