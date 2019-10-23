#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Main fuction
 * @argc: Is the parameter to be checked
 * @argv: Is the parameter to be checked
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int k;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	k = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", k);

	return (0);
}
