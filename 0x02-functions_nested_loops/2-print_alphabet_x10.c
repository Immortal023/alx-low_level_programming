#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times
 * function that prints 10 times the alphabet - prints in lowercase
 * return 0: always succes
 */
void print_alphabet_x10(void)
{
	int i, p;

	for (i = 1; p <= 10; p++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
