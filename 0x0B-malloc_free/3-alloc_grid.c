#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  **alloc_grid - Entry point
 *
 * Description: write a function that returns a pointer to a 2dimensional array
 * of integers
 * @width: Is the parameter to be checked
 * @height: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int k;
	int r;
	int **s;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	s = (int **)malloc(height * (sizeof(int *)));
		if (s == NULL)
			return (NULL);

		for (k = 0; k < height; k++)
		{
			s[k] = (int *)malloc(width * sizeof(int));
			if (s[k] == NULL)
			{
				for (r = 0; r < width; r++)
					free(s[r]);
				free(s);
				return (NULL);
			}
			for (r = 0; r < width; r++)
				s[k][r] = 0;
		}
		return (s);
}
