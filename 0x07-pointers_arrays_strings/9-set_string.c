#include "holberton.h"
#include <stdio.h>
/**
 *  set_string - Entry point
 *
 * Description: write a function that sets the value of a pointer to a char
 * @s: Is the parameter to be checked
 * @to: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
