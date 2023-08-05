#include "main.h"

/**
 * _memset - Program tha fills a block of memory
 * @s: starting address of memory
 * @b: desired value
 * @n: number of bytes
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;

for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);


}
