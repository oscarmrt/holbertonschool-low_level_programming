#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 48;
char alp = 'a';
while (n < 58)
{
putchar(n);
n++;
}
while (alp < 'g')
{
putchar(alp);
alp++;
}
putchar('\n');
return (0);
}
