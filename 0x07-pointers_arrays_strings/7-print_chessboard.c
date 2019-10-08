#include "holberton.h"
#include <stdio.h>
/**
 *  print_chessboard - Entry point
 *
 * Description: write a function that prints the chessboard
 * @a: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{

	int k;
	int j = 0;

	for (k = 0; k < 8; k++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[k][j]);
		}
		_putchar('\n');
	}
}
