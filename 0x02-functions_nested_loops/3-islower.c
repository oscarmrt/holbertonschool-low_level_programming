#include "holberton.h"
/**
 *  _islower - Entry point
 *
 * Description: write a function that checks for lowercase character
 * @c: Is the parameter to be checked
 * Returns 1 if c is lowercase
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
