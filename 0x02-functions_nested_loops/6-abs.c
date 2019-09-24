#include "holberton.h"
/**
 * _abs - _abs a function that computes the absolute value of an integer
 * @n: Integer
 * Description: write a function that computes the absolute value of an integer
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
