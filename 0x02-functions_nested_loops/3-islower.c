#include "main.h"
/**
 * function that checks for lowercase character.
 * Returns 1 if c is lowercase Returns 0 otherwise
 * return (0): always success
 */
int _islower(int c);
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
