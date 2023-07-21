#include "main.h"
/* more headers goes there */

/**
 * positive_or_negative - prints if number is positive, negative, or zero
 * Return: Always (success)
 */

void positive_or_negative(int i)
{

	if (i < 0)
	{
	printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
	printf("%d is %s\n", i, "positive");
	}
	else
	{
	printf("%d is %s\n", i, "zero");
	}
	return (0);
}
