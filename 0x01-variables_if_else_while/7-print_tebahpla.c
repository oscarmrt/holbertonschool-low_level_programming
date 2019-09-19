#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alp = 122;
while (alp >= 97)
{
putchar(alp);
alp--;
}
putchar('\n');
return (0);
}
