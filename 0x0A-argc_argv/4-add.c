#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *  main - Entry point
 *
 * Description: write a program that adds positive numbers
 * @argc: Is the parameter to be checked
 * @argv: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int k;
	int q;
	int r;
	int s;

	s = 0;
	if (argc == 1)
	printf("%d\n", s);
	else
	{
		for (k = 1; k < argc; k++)
		{
			r = 0;
			for (q = 0; argv[k][q] != '\0'; q++)
			{
				if ((int)argv[k][q] < 48 || (int)argv[k][q] > 57)
				{
					printf("Error\n");
					return (0);
				}
				r = 1;
			}
			if (r == 1)
			{
				s += atoi(argv[k]);
			}
		}
		printf("%d\n", s);
	}
	return (0);
}
