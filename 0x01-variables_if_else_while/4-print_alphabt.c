#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alp = 97;
while (alp < 123)
{
if (alp == 101 || alp == 113)
{
alp++;
}
putchar(alp);
alp++;
}
putchar('\n');
return (0);
}
