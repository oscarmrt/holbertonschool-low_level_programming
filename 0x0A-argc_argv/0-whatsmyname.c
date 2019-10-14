#include<stdio.h>
/**
 *  main - Entry point
 *
 * Description: write a program that prints its name
 * @argc: Is the parameter to be checked
 * @argv: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
