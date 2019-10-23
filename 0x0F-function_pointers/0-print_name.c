#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Entry point
 *
 * Description: write a function that prints a name
 * @name: Is the parameter to be checked
 * @f: Is the parameter to be checked.
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
