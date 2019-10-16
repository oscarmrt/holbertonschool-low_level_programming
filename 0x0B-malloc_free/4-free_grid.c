#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Entry point
 *
 * Description: write a function that frees a 2dimensional grid previously
 * created by your alloc_grid function
 * @grid: Is the parameter to be checked
 * @height: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int k;

		for (k = 0; k < height; k++)
		{
			free(grid[k]);
		}
		free(grid);
}
