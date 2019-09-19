#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alp = 97;
int ALP = 65;
while (alp < 123)
{
putchar(alp);
alp++;
}
while (ALP < 91)
{
putchar(ALP);
ALP++;
}
putchar('\n');
return (0);
}
