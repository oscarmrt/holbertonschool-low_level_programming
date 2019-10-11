#include "holberton.h"
#include <stdio.h>
int cou(char *a);
int rec(char *a, int k);
/**
 * is_palindrome - Entry point
 *
 * Description: write a function that returns 1 if a string is a palindrome
 * @s: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (rec(s, cou(s)));
}

/**
 * cou - Entry point
 *
 * Description: Auxiliar function to count the lenght of the function
 * @a: Is the parameter to be checked
 * Return: Always (0) success
 */

int cou(char *a)
{
	int k = 0;

	if (*a != '\0')
	{
		k++;
		k = k + cou(a + 1);
	}
	return (k);
}

/**
 * rec - Entry point
 *
 * Description: Auxiliar function to record the lenght and compare
 * @a: Is the parameter to be checked
 * @k: Is the parameter to be checked
 * Return: Always (0) success
 */
int rec(char *a, int k)
{

	if (k >= k / 2)
	{
		if (*a == a[k - 1])
		{
			return (rec(a + 1, k - 2));
		}
		else
			return (0);
	}
	return (1);
}
