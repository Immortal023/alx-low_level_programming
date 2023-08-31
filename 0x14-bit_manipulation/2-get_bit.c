#include "main.h"

/**
 * get_bit - thevalue bit at an index in a decimal number
 * @n: numberto searc
 * @index: indexofthe bit
 * Return: valueof thebit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitval;

	if (index > 63)
		return (-1);

	bitval = (n >> index) & 1;

	return (bitval);
}

