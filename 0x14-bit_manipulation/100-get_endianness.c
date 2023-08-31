#include "main.h"

/**
 * get_endianness - checksif amachine is littleor big endian
 * Return: 0 forbig, 1 forlittle
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
