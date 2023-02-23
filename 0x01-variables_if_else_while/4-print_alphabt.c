#include <stdio.h>

/**
 * main - prints alphabetics character
 * Return: Always 0 (success)
 *
 */

int main(void)
{

char l, q, e;
q = 'q';
e = 'e';

for (l = 'a' ; l <= 'z' ; l++)
{
if (l != e && l != q)
putchar(l);

}
putchar('\n');
return (0);


}
