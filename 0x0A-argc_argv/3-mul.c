#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *  main - Entry point
 *
 * Description: write a program that multiplies two numbers
 * @argc: Is the parameter to be checked
 * @argv: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int k;
	int q;
	int r;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	k = atoi(argv[1]);
	q = atoi(argv[2]);
	r = k * q;
	printf("%d\n", r);
	return (0);
}
