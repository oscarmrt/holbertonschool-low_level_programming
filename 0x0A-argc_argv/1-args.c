#include<stdio.h>
/**
 *  main - Entry point
 *
 * Description: write a program that prints the number of arguments passed into
 * @argc: Is the parameter to be checked
 * @argv: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
