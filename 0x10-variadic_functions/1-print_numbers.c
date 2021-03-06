#include "variadic_functions.h"
/**
 * print_numbers - Entry point
 *
 * Description: write a function that prints numbers
 * @separator: Is the parameter to be checked
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int k;

	va_start(valist, n);
	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(valist, int));
		if (k < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
