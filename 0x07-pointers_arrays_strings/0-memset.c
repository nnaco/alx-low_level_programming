#include "main.h"

/**
 * _memset - Entry point
 * @s: starting address
 * @b: the value
 * @n: number of bytes changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for(; n > 0; a++)
{
s[a] = b;
n--;
}
return(s);
}
