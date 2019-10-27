#include "variadic_functions.h"
/**
 * str_f - Entry point
 * @valist: First parameter
 * Return: void
 */
void str_f(va_list valist)
{
	char *y;

	y = va_arg(valist, char *);
	if (y)
	{
		printf("%s", y);
		return;
	}
	printf("(nil)");
}

/**
 * char_f - Entry point
 * @valist: First parameter
 * Return: void
 */
void char_f(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * int_f - Entry point
 * @valist: First parameter
 * Return: void
 */
void int_f(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * float_f - Entry point
 * @valist: First parameter
 * Return: void
 */
void float_f(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_all - Entry point
 * Description: write a function that prints anything
 * @format: Is the parameter to be checked
 * Return: Always 0 (Success)
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int k;
	unsigned int l;
	char *x;

	aux_t ptr[] = {
		{"c", char_f},
		{"i", int_f},
		{"f", float_f},
		{"s", str_f},
		{NULL, NULL}
	};
	va_start(valist, format);
	k = 0;
	x = "";
	while (format && format[k] != '\0')
	{
		l = 0;
		while (ptr[l].au)
		{
			if (*(ptr[l].au) == format[k])
			{
				printf("%s", x);
				ptr[l].p(valist);
				x = ", ";
				break;
			}
			l++;
		}
		k++;
	}
	va_end(valist);
	printf("\n");
}
