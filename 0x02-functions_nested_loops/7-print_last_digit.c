#include "holberton.h"
/**
 * print_last_digit - print_last_digit  prints the last digit of a number
 * @q: Integer
 * Description: write a function that prints the last digit of a number
 *
 * Return: 0
 */
int print_last_digit(int q)
{
	if (q >=0)
		return (q % 10);
	else
		return (q * -1 % 10);
}
