#include <stdio.h>
/**
* main - Write a C program that prints the size of various types
*
* Return: Always 0 (Success)
*/
int main(void)
{
char charvariable;
int intvariable;
long int longintvariable;
long long int longlongintvariable;
float floatvariable;
printf("Size of a char: %ld byte(s)\n", sizeof(charvariable));
printf("Size of an int: %ld byte(s)\n", sizeof(intvariable));
printf("Size of a long int: %ld byte(s)\n", sizeof(longintvariable));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintvariable));
printf("Size of a float: %ld byte(s)\n", sizeof(floatvariable));
return (0);
}
