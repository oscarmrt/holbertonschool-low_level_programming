#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, n_1;
srand(time(0));
n = rand() - RAND_MAX / 2;
n_1 = n % 10;
if (n_1 > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, n_1);
else if (n_1 == 0)
printf("Last digit of %i is %i and is 0\n", n, n_1);
else
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n_1);
return (0);
}
