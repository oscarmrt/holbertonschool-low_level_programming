#include "variadic_functions.h"
/**
 * print_strings - Entry point
 *
 * Description: write a function that prints strings
 * @separator: Is the parameter to be checked
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int k;
	char *str;

	va_start(valist, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
			printf("(nil)");
		else
		printf("%s", str);
		if (k < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
