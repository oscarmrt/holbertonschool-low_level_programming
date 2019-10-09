#include "holberton.h"
#include <stdio.h>
/**
 *  _strlen_recursion - Entry point
 *
 * Description: write a function that returns the length of a string
 * @s: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
