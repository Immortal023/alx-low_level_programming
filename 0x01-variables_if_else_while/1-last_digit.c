#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - one last digit
 * Return: Always (success)
 */

int main(void)
{
int n, lasd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lasd = n % 10;

if (lasd > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lasd);
}
else if (lasd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lasd);
}
else if (lasd < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasd);
}
return (0);
}
