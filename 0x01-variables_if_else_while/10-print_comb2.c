#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 48;
int m = 48;
while (n < 58 && m < 58)
{
putchar(n);
putchar (m);
if (n < 57 || m < 57)
{
putchar(',');
putchar(' ');
if (m < 57)
{
m++;
}
else
{
n++;
m = 48;
}
}
else
{
n++;
m++;
putchar('\n');
}
}
return (0);
}
