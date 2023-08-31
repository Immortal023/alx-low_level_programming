#include "main.h"

/**
 * clear_bit - setsthevalue of agiven bit 0
 * @n: thenumber tochange
 * @index: thebit toclear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
