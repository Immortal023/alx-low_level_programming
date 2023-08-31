#include "main.h"

/**
 * set_bit - sets=abit at agiven index 1
 * @n: to the number to change
 * @index: index ofthe bitto set to 1
 * Return: 1 success, -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

