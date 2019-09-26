#include "holberton.h"
/**
 *  _isupper - Entry point
 *
 * Description: write a function that checks for uppercase character
 * @c: Is the parameter to be checked
 * Returns 1 if c is uppercase
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
