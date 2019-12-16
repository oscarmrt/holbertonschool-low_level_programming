#include "holberton.h"
/**
 *  _isdigit - Entry point
 *
 * Description: write a function that checks for a digit
 * @c: Is the parameter to be checked
 * Returns 1 if c is a digit
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
