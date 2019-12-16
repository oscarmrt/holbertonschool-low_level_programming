#include "holberton.h"
/**
 *  _isalpha - Entry point
 *
 * Description: write a function that checks for alphabetic character
 * @c: Is the parameter to be checked
 * Returns 1 if c is a letter,lowercase or uppercase
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
