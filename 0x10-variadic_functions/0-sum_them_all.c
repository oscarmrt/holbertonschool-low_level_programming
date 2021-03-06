#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 *
 * Description: write a function that returns the sum of all its parameters
 * @n: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	double sum = 0.0;
	unsigned int k;

	if (n == 0)
		return (0);

	va_start(valist, n);
	for (k = 0; k < n; k++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
