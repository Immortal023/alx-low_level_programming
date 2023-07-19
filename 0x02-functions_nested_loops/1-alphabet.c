#include "main.h"
/**
 * print alphabet - prints alphabet in lowercase
 * retur 0: always success
 */
void print_alphabet(void);
{
	int i;
	for(i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
