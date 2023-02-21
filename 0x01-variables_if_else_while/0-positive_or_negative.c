#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Determines if a number is positive, negative, or zero.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
int Rand_Max;

srand(time(0));
n = rand() - Rand_Max / 2;
if (n < 0)
{
printf("$d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("$d is negative\n", n);
}
return (0);
}
